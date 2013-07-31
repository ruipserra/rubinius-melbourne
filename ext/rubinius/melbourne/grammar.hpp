#ifndef MEL_GRAMMAR_HPP
#define MEL_GRAMMAR_HPP

#include "bstrlib.h"

namespace MELBOURNE {
  VALUE string_to_ast(VALUE ptp, const char *f, bstring s, int line);
  VALUE file_to_ast(VALUE ptp, const char *f, FILE *file, int start);
};

#endif
