#include "bad_figure.h"

bad_figure::bad_figure(const char* a) : std::domain_error(a) {};