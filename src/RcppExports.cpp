// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/re2r.h"
#include <Rcpp.h>

using namespace Rcpp;

// cpp_match
SEXP cpp_match(CharacterVector input, XPtr<RE2>& ptr, bool value, size_t anchor, bool all, bool parallel);
RcppExport SEXP re2r_cpp_match(SEXP inputSEXP, SEXP ptrSEXP, SEXP valueSEXP, SEXP anchorSEXP, SEXP allSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< bool >::type value(valueSEXP);
    Rcpp::traits::input_parameter< size_t >::type anchor(anchorSEXP);
    Rcpp::traits::input_parameter< bool >::type all(allSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    __result = Rcpp::wrap(cpp_match(input, ptr, value, anchor, all, parallel));
    return __result;
END_RCPP
}
// cpp_re2_compile
XPtr<RE2> cpp_re2_compile(const char * pattern, bool log_errors_value, bool utf_8_value, bool posix_syntax_value, bool case_sensitive_value, bool dot_nl_value, bool literal_value, bool longest_match_value, bool never_nl_value, bool never_capture_value, bool one_line_value, bool perl_classes_value, bool word_boundary_value, int64_t max_mem_value);
RcppExport SEXP re2r_cpp_re2_compile(SEXP patternSEXP, SEXP log_errors_valueSEXP, SEXP utf_8_valueSEXP, SEXP posix_syntax_valueSEXP, SEXP case_sensitive_valueSEXP, SEXP dot_nl_valueSEXP, SEXP literal_valueSEXP, SEXP longest_match_valueSEXP, SEXP never_nl_valueSEXP, SEXP never_capture_valueSEXP, SEXP one_line_valueSEXP, SEXP perl_classes_valueSEXP, SEXP word_boundary_valueSEXP, SEXP max_mem_valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const char * >::type pattern(patternSEXP);
    Rcpp::traits::input_parameter< bool >::type log_errors_value(log_errors_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type utf_8_value(utf_8_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type posix_syntax_value(posix_syntax_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type case_sensitive_value(case_sensitive_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type dot_nl_value(dot_nl_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type literal_value(literal_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type longest_match_value(longest_match_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type never_nl_value(never_nl_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type never_capture_value(never_capture_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type one_line_value(one_line_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type perl_classes_value(perl_classes_valueSEXP);
    Rcpp::traits::input_parameter< bool >::type word_boundary_value(word_boundary_valueSEXP);
    Rcpp::traits::input_parameter< int64_t >::type max_mem_value(max_mem_valueSEXP);
    __result = Rcpp::wrap(cpp_re2_compile(pattern, log_errors_value, utf_8_value, posix_syntax_value, case_sensitive_value, dot_nl_value, literal_value, longest_match_value, never_nl_value, never_capture_value, one_line_value, perl_classes_value, word_boundary_value, max_mem_value));
    return __result;
END_RCPP
}
// get_expression_size
int get_expression_size(XPtr<RE2>& regexp);
RcppExport SEXP re2r_get_expression_size(SEXP regexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    __result = Rcpp::wrap(get_expression_size(regexp));
    return __result;
END_RCPP
}
// cpp_get_pattern
string cpp_get_pattern(XPtr<RE2>& regexp);
RcppExport SEXP re2r_cpp_get_pattern(SEXP regexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    __result = Rcpp::wrap(cpp_get_pattern(regexp));
    return __result;
END_RCPP
}
// get_number_of_groups
int get_number_of_groups(XPtr<RE2>& regexp);
RcppExport SEXP re2r_get_number_of_groups(SEXP regexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    __result = Rcpp::wrap(get_number_of_groups(regexp));
    return __result;
END_RCPP
}
// cpp_get_named_groups
IntegerVector cpp_get_named_groups(XPtr<RE2>& regexp);
RcppExport SEXP re2r_cpp_get_named_groups(SEXP regexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    __result = Rcpp::wrap(cpp_get_named_groups(regexp));
    return __result;
END_RCPP
}
// cpp_quote_meta
SEXP cpp_quote_meta(vector<string>& input, bool parallel);
RcppExport SEXP re2r_cpp_quote_meta(SEXP inputSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< vector<string>& >::type input(inputSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    __result = Rcpp::wrap(cpp_quote_meta(input, parallel));
    return __result;
END_RCPP
}
// cpp_replace
SEXP cpp_replace(vector<string>& input, XPtr<RE2>& regexp, string& rewrite, bool global_, bool parallel);
RcppExport SEXP re2r_cpp_replace(SEXP inputSEXP, SEXP regexpSEXP, SEXP rewriteSEXP, SEXP global_SEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< vector<string>& >::type input(inputSEXP);
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    Rcpp::traits::input_parameter< string& >::type rewrite(rewriteSEXP);
    Rcpp::traits::input_parameter< bool >::type global_(global_SEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    __result = Rcpp::wrap(cpp_replace(input, regexp, rewrite, global_, parallel));
    return __result;
END_RCPP
}
// cpp_extract
CharacterVector cpp_extract(vector<string>& input, XPtr<RE2>& regexp, string& rewrite, bool parallel);
RcppExport SEXP re2r_cpp_extract(SEXP inputSEXP, SEXP regexpSEXP, SEXP rewriteSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< vector<string>& >::type input(inputSEXP);
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    Rcpp::traits::input_parameter< string& >::type rewrite(rewriteSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    __result = Rcpp::wrap(cpp_extract(input, regexp, rewrite, parallel));
    return __result;
END_RCPP
}
// cpp_get_program_fanout
SEXP cpp_get_program_fanout(XPtr<RE2>& regexp);
RcppExport SEXP re2r_cpp_get_program_fanout(SEXP regexpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<RE2>& >::type regexp(regexpSEXP);
    __result = Rcpp::wrap(cpp_get_program_fanout(regexp));
    return __result;
END_RCPP
}
