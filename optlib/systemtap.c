/*
 * Generated by ./misc/optlib2c from optlib/systemtap.ctags, Don't edit this manually.
 */
#include "general.h"
#include "parse.h"
#include "routines.h"
#include "field.h"
#include "xtag.h"


static void initializeSystemTapParser (const langType language)
{

	addLanguageRegexTable (language, "main");
	addLanguageRegexTable (language, "comment");
	addLanguageRegexTable (language, "any");
	addLanguageRegexTable (language, "skipWhiteSpace");
	addLanguageRegexTable (language, "skipLiteral");
	addLanguageRegexTable (language, "ssliteral");
	addLanguageRegexTable (language, "dsliteral");
	addLanguageRegexTable (language, "arraysize");
	addLanguageRegexTable (language, "stmtend");
	addLanguageRegexTable (language, "probe");
	addLanguageRegexTable (language, "probeBody");
	addLanguageRegexTable (language, "probeStmt");
	addLanguageRegexTable (language, "func");
	addLanguageRegexTable (language, "funcSig");
	addLanguageRegexTable (language, "funcBody");
	addLanguageRegexTable (language, "funcStmt");
	addLanguageRegexTable (language, "cfuncStmt");
	addLanguageRegexTable (language, "vars");
	addLanguageRegexTable (language, "macro");
	addLanguageRegexTable (language, "macroSig");
	addLanguageRegexTable (language, "macroBody");
	addLanguageRegexTable (language, "macroStmt");
	addLanguageRegexTable (language, "comment_multiline");
	addLanguageRegexTable (language, "comment_oneline");

	addLanguageTagMultiTableRegex (language, "main",
	                               "^[^#/'\"pfg@%]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^probe[[:space:]]+",
	                               "", "", "{tenter=probe}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^\\#",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^/\\*",
	                               "", "", "{tenter=comment_multiline}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^//",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^@define[[:space:]]+",
	                               "", "", "{tenter=macro}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^function[[:space:]]+",
	                               "", "", "{tenter=func}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^global[[:space:]]+",
	                               "", "", "{tenter=vars}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^%[\\{(]",
	                               "", "", "{tenter=cfuncStmt}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "comment",
	                               "^\\#",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "comment",
	                               "^/\\*",
	                               "", "", "{tenter=comment_multiline}", NULL);
	addLanguageTagMultiTableRegex (language, "comment",
	                               "^//",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "any",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "skipWhiteSpace",
	                               "^[ \t\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "skipLiteral",
	                               "^\"",
	                               "", "", "{tenter=dsliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "skipLiteral",
	                               "^'",
	                               "", "", "{tenter=ssliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "ssliteral",
	                               "^[^']*'",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "ssliteral",
	                               "^[^']+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "dsliteral",
	                               "^[^\"\\\\]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "dsliteral",
	                               "^\"",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "dsliteral",
	                               "^\\\\.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "arraysize",
	                               "^[^]/#]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "arraysize",
	                               "^]",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "arraysize",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "stmtend",
	                               "^",
	                               "", "", "{tleave}{scope=pop}", NULL);
	addLanguageTagMultiTableRegex (language, "probe",
	                               "^([[:alpha:]_][[:alnum:]_.]*)[[:space:]]*\\+?=[[:space:]]*",
	                               "\\1", "p", "{tenter=probeBody}{scope=push}", NULL);
	addLanguageTagMultiTableRegex (language, "probe",
	                               "^([[:alpha:]_][[:alnum:]_.]*)[[:space:]]*",
	                               "\\1", "p", "{_role=attached}{tenter=probeBody}{scope=push}", NULL);
	addLanguageTagMultiTableRegex (language, "probeBody",
	                               "^[^\\{/#'\"]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "probeBody",
	                               "^\\{",
	                               "", "", "{tenter=probeStmt,stmtend}", NULL);
	addLanguageTagMultiTableRegex (language, "probeBody",
	                               "^\"",
	                               "", "", "{tenter=dsliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "probeBody",
	                               "^'",
	                               "", "", "{tenter=ssliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "probeBody",
	                               "^\\#",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "probeBody",
	                               "^/\\*",
	                               "", "", "{tenter=comment_multiline}", NULL);
	addLanguageTagMultiTableRegex (language, "probeBody",
	                               "^//",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "probeBody",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "probeStmt",
	                               "^[^\\{\\}/#'\"]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "probeStmt",
	                               "^\\}",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "probeStmt",
	                               "^\"",
	                               "", "", "{tenter=dsliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "probeStmt",
	                               "^'",
	                               "", "", "{tenter=ssliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "probeStmt",
	                               "^\\{",
	                               "", "", "{tenter=probeStmt}", NULL);
	addLanguageTagMultiTableRegex (language, "probeStmt",
	                               "^\\#",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "probeStmt",
	                               "^/\\*",
	                               "", "", "{tenter=comment_multiline}", NULL);
	addLanguageTagMultiTableRegex (language, "probeStmt",
	                               "^//",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "probeStmt",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "func",
	                               "^([[:alpha:]_][[:alnum:]_]*)(:[[:alpha:]_][[:alnum:]_]*)?[[:space:]]*\\(",
	                               "\\1", "f", "{tenter=funcSig,funcBody}{scope=push}", NULL);
	addLanguageTagMultiTableRegex (language, "funcSig",
	                               "^[^)/]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "funcSig",
	                               "^\\)(:[0-9]+)?",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "funcSig",
	                               "^\\#",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "funcSig",
	                               "^/\\*",
	                               "", "", "{tenter=comment_multiline}", NULL);
	addLanguageTagMultiTableRegex (language, "funcSig",
	                               "^//",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "funcSig",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "funcBody",
	                               "^[^\\{%'\"#]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "funcBody",
	                               "^\\{",
	                               "", "", "{tenter=funcStmt,stmtend}", NULL);
	addLanguageTagMultiTableRegex (language, "funcBody",
	                               "^%[\\{(]",
	                               "", "", "{tenter=cfuncStmt,stmtend}", NULL);
	addLanguageTagMultiTableRegex (language, "funcBody",
	                               "^\\#",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "funcBody",
	                               "^/\\*",
	                               "", "", "{tenter=comment_multiline}", NULL);
	addLanguageTagMultiTableRegex (language, "funcBody",
	                               "^//",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "funcBody",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "funcStmt",
	                               "^[^%/#'\"\\{\\}]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "funcStmt",
	                               "^\\}",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "funcStmt",
	                               "^\"",
	                               "", "", "{tenter=dsliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "funcStmt",
	                               "^'",
	                               "", "", "{tenter=ssliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "funcStmt",
	                               "^\\#",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "funcStmt",
	                               "^/\\*",
	                               "", "", "{tenter=comment_multiline}", NULL);
	addLanguageTagMultiTableRegex (language, "funcStmt",
	                               "^//",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "funcStmt",
	                               "^%[\\{(]",
	                               "", "", "{tenter=cfuncStmt}", NULL);
	addLanguageTagMultiTableRegex (language, "funcStmt",
	                               "^\\{",
	                               "", "", "{tenter=funcStmt}", NULL);
	addLanguageTagMultiTableRegex (language, "funcStmt",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "cfuncStmt",
	                               "^[^%/#'\"]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "cfuncStmt",
	                               "^\\#",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "cfuncStmt",
	                               "^/\\*",
	                               "", "", "{tenter=comment_multiline}", NULL);
	addLanguageTagMultiTableRegex (language, "cfuncStmt",
	                               "^//",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "cfuncStmt",
	                               "^\"",
	                               "", "", "{tenter=dsliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "cfuncStmt",
	                               "^'",
	                               "", "", "{tenter=ssliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "cfuncStmt",
	                               "^%[\\})]",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "cfuncStmt",
	                               "^%[\\{(]",
	                               "", "", "{tenter=cfuncStmt}", NULL);
	addLanguageTagMultiTableRegex (language, "cfuncStmt",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "vars",
	                               "^([[:alpha:]_][[:alnum:]_]*)%?",
	                               "\\1", "v", "", NULL);
	addLanguageTagMultiTableRegex (language, "vars",
	                               "^[\n]",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "vars",
	                               "^,[[:space:]]*",
	                               "", "", "{tjump=vars}", NULL);
	addLanguageTagMultiTableRegex (language, "vars",
	                               "^\\#",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "vars",
	                               "^/\\*",
	                               "", "", "{tenter=comment_multiline}", NULL);
	addLanguageTagMultiTableRegex (language, "vars",
	                               "^//",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "vars",
	                               "^\"",
	                               "", "", "{tenter=dsliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "vars",
	                               "^'",
	                               "", "", "{tenter=ssliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "vars",
	                               "^\\[",
	                               "", "", "{tenter=arraysize}", NULL);
	addLanguageTagMultiTableRegex (language, "vars",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "macro",
	                               "^([[:alpha:]_][[:alnum:]_]*)[[:space:]]*\\(",
	                               "\\1", "m", "{tenter=macroSig,macroBody}{scope=push}", NULL);
	addLanguageTagMultiTableRegex (language, "macro",
	                               "^([[:alpha:]_][[:alnum:]_]*)[[:space:]]*",
	                               "\\1", "m", "{tenter=macroBody,stmtend}{scope=push}", NULL);
	addLanguageTagMultiTableRegex (language, "macroSig",
	                               "^[^#/)]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "macroSig",
	                               "^\\)",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "macroSig",
	                               "^\\#",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "macroSig",
	                               "^/\\*",
	                               "", "", "{tenter=comment_multiline}", NULL);
	addLanguageTagMultiTableRegex (language, "macroSig",
	                               "^//",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "macroSig",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "macroBody",
	                               "^[^%#/)]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "macroBody",
	                               "^%\\(",
	                               "", "", "{tenter=macroStmt,stmtend}", NULL);
	addLanguageTagMultiTableRegex (language, "macroBody",
	                               "^\\#",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "macroBody",
	                               "^/\\*",
	                               "", "", "{tenter=comment_multiline}", NULL);
	addLanguageTagMultiTableRegex (language, "macroBody",
	                               "^//",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "macroBody",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "macroStmt",
	                               "^[^#/%'\"]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "macroStmt",
	                               "^%\\)",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "macroStmt",
	                               "^\"",
	                               "", "", "{tenter=dsliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "macroStmt",
	                               "^'",
	                               "", "", "{tenter=ssliteral}", NULL);
	addLanguageTagMultiTableRegex (language, "macroStmt",
	                               "^\\#",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "macroStmt",
	                               "^/\\*",
	                               "", "", "{tenter=comment_multiline}", NULL);
	addLanguageTagMultiTableRegex (language, "macroStmt",
	                               "^//",
	                               "", "", "{tenter=comment_oneline}", NULL);
	addLanguageTagMultiTableRegex (language, "macroStmt",
	                               "^%\\(",
	                               "", "", "{tenter=macroStmt}", NULL);
	addLanguageTagMultiTableRegex (language, "macroStmt",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "comment_multiline",
	                               "^[^*]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "comment_multiline",
	                               "^\\*/",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "comment_multiline",
	                               "^.",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "comment_oneline",
	                               "^[^\n]*\n",
	                               "", "", "{tleave}", NULL);
	addLanguageTagMultiTableRegex (language, "comment_oneline",
	                               "^.",
	                               "", "", "", NULL);
}

extern parserDefinition* SystemTapParser (void)
{
	static const char *const extensions [] = {
		"stp",
		"stpm",
		NULL
	};

	static const char *const aliases [] = {
		"stap",
		NULL
	};

	static const char *const patterns [] = {
		NULL
	};

	static roleDefinition SystemTapProbeRoleTable [] = {
		{ true, "attached", "attached by code for probing" },
	};
	static kindDefinition SystemTapKindTable [] = {
		{
		  true, 'p', "probe", "probe aliases",
		  ATTACH_ROLES(SystemTapProbeRoleTable),
		},
		{
		  true, 'f', "function", "functions",
		},
		{
		  true, 'v', "variable", "variables",
		},
		{
		  true, 'm', "macro", "macros",
		},
	};

	parserDefinition* const def = parserNew ("SystemTap");

	def->versionCurrent= 1;
	def->versionAge    = 1;
	def->enabled       = true;
	def->extensions    = extensions;
	def->patterns      = patterns;
	def->aliases       = aliases;
	def->method        = METHOD_NOT_CRAFTED|METHOD_REGEX;
	def->useCork       = CORK_QUEUE;
	def->kindTable     = SystemTapKindTable;
	def->kindCount     = ARRAY_SIZE(SystemTapKindTable);
	def->initialize    = initializeSystemTapParser;

	return def;
}
