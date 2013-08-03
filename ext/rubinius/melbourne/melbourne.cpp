#include "namespace.h"
#include "melbourne.hpp"
#include "grammar.hpp"
#include "symbols.hpp"

#ifdef __cplusplus
extern "C" {
#endif

VALUE MELBOURNE_STRING_TO_AST(VALUE self, VALUE source, VALUE name, VALUE line) {
  StringValue(source);
  StringValue(name);
  bstring b_str = blk2bstr(RSTRING_PTR(source), (int)RSTRING_LEN(source));
  VALUE result = MELBOURNE::string_to_ast(self,
      RSTRING_PTR(name), b_str, FIX2INT(line));
  bdestroy(b_str);

  return result;
}

VALUE MELBOURNE_FILE_TO_AST(VALUE self, VALUE fname, VALUE start) {
  StringValue(fname);

  char* c_name = RSTRING_PTR(fname);

  FILE *file = fopen(c_name, "r");
  if(file) {
    VALUE result = MELBOURNE::file_to_ast(self,
        RSTRING_PTR(fname), file, FIX2INT(start));
    fclose(file);

    return result;
  } else {
    rb_raise(rb_eLoadError, "%s -- %s", strerror(errno), c_name);
    return Qnil;
  }
}

void Init_melbourne(void) {
  VALUE rb_cMelbourne, rb_mToolSet, rb_mTScurrent, rb_mTS;

  MELBOURNE::init_symbols();

#ifndef RUBINIUS
  VALUE rb_mRubinius = rb_const_get(rb_cObject, rb_intern("Rubinius"));
#endif

  rb_mToolSet = rb_const_get(rb_mRubinius, rb_intern("ToolSet"));
  rb_mTScurrent = rb_funcall(rb_mToolSet, rb_intern("current"), 0);
  rb_mTS = rb_define_module_under(rb_mTScurrent, "TS");
  rb_cMelbourne = rb_define_class_under(rb_mTS, "Melbourne", rb_cObject);
  rb_define_method(rb_cMelbourne, "string_to_ast",
      RUBY_METHOD_FUNC(MELBOURNE_STRING_TO_AST), 3);
  rb_define_method(rb_cMelbourne, "file_to_ast",
      RUBY_METHOD_FUNC(MELBOURNE_FILE_TO_AST), 2);
}

#ifdef __cplusplus
}  /* extern "C" { */
#endif
