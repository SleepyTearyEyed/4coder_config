/*
4coder_language_js.h - Sets up the JavaScript language context.
*/

// TOP

#if !defined(FCODER_LANGUAGE_JS_H)
#define FCODER_LANGUAGE_JS_H

static Parse_Context_ID parse_context_language_js;

#define PSAT(s, t) {s, sizeof(s)-1, t}
static void
init_language_js(Application_Links *app){
    if (parse_context_language_js != 0) return;
    
    Parser_String_And_Type kw[] = {
        // Other
        PSAT("debugger", CPP_TOKEN_KEY_OTHER),
        PSAT("function", CPP_TOKEN_KEY_OTHER),
        PSAT("return", CPP_TOKEN_KEY_OTHER),
        PSAT("void", CPP_TOKEN_KEY_OTHER),
        PSAT("package", CPP_TOKEN_KEY_OTHER),
        PSAT("static", CPP_TOKEN_KEY_OTHER),
        PSAT("await", CPP_TOKEN_KEY_OTHER),
        PSAT("native", CPP_TOKEN_KEY_OTHER),
        PSAT("synchronized", CPP_TOKEN_KEY_OTHER),
        PSAT("transient", CPP_TOKEN_KEY_OTHER),
        PSAT("volatile", CPP_TOKEN_KEY_OTHER),
        
        // Types &  Declaration
        PSAT("boolean", CPP_TOKEN_KEY_OTHER),
        PSAT("byte", CPP_TOKEN_KEY_OTHER),
        PSAT("char", CPP_TOKEN_KEY_OTHER),
        PSAT("const", CPP_TOKEN_KEY_OTHER),
        PSAT("double", CPP_TOKEN_KEY_OTHER),
        PSAT("enum", CPP_TOKEN_KEY_OTHER),
        PSAT("false", CPP_TOKEN_KEY_OTHER),
        PSAT("final", CPP_TOKEN_KEY_OTHER),
        PSAT("float", CPP_TOKEN_KEY_OTHER),
        PSAT("int", CPP_TOKEN_KEY_OTHER),
        PSAT("let", CPP_TOKEN_KEY_OTHER),
        PSAT("long", CPP_TOKEN_KEY_OTHER),
        PSAT("null", CPP_TOKEN_KEY_OTHER),
        PSAT("short", CPP_TOKEN_KEY_OTHER),
        PSAT("true", CPP_TOKEN_KEY_OTHER),
        PSAT("typeof", CPP_TOKEN_KEY_OTHER),
        PSAT("var", CPP_TOKEN_KEY_OTHER),
        
        // Prototype/Class/Object
        PSAT("abstract", CPP_TOKEN_KEY_OTHER),
        PSAT("class", CPP_TOKEN_KEY_OTHER),
        PSAT("delete", CPP_TOKEN_KEY_OTHER),
        PSAT("extends", CPP_TOKEN_KEY_OTHER),
        PSAT("implements", CPP_TOKEN_KEY_OTHER),
        PSAT("instanceof", CPP_TOKEN_KEY_OTHER),
        PSAT("interface", CPP_TOKEN_KEY_OTHER),
        PSAT("new", CPP_TOKEN_KEY_OTHER),
        PSAT("super", CPP_TOKEN_KEY_OTHER),
        PSAT("this", CPP_TOKEN_KEY_OTHER),
        
        // Access Modifiers
        PSAT("private", CPP_TOKEN_KEY_OTHER),
        PSAT("protected", CPP_TOKEN_KEY_OTHER),
        PSAT("public", CPP_TOKEN_KEY_OTHER),
        
        // Module
        PSAT("export", CPP_TOKEN_KEY_OTHER),
        PSAT("import", CPP_TOKEN_KEY_OTHER),
        
        // Control Flow
        PSAT("if",       CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("else",     CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("switch",   CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("case",     CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("do",       CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("for",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("in",       CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("while",    CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("break",    CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("continue", CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("default",  CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("goto",     CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("return",   CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("yield",    CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("throw",    CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("try",      CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("catch",    CPP_TOKEN_KEY_CONTROL_FLOW),
        PSAT("finally",  CPP_TOKEN_KEY_CONTROL_FLOW),
#if defined(EXTRA_KEYWORDS)
#include EXTRA_KEYWORDS
#undef EXTRA_KEYWORDS
#endif
    };
    
    parse_context_language_js = create_parse_context(app, kw, ArrayCount(kw), 0, 0);
}
#undef PSAT

#endif

// BOTTOM