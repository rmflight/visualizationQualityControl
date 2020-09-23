// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// kendallt
double kendallt(NumericVector x, NumericVector y, String perspective);
RcppExport SEXP _visualizationQualityControl_kendallt(SEXP xSEXP, SEXP ySEXP, SEXP perspectiveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< String >::type perspective(perspectiveSEXP);
    rcpp_result_gen = Rcpp::wrap(kendallt(x, y, perspective));
    return rcpp_result_gen;
END_RCPP
}
// kendall_matrix
NumericMatrix kendall_matrix(NumericMatrix& x, String perspective);
RcppExport SEXP _visualizationQualityControl_kendall_matrix(SEXP xSEXP, SEXP perspectiveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< String >::type perspective(perspectiveSEXP);
    rcpp_result_gen = Rcpp::wrap(kendall_matrix(x, perspective));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_visualizationQualityControl_kendallt", (DL_FUNC) &_visualizationQualityControl_kendallt, 3},
    {"_visualizationQualityControl_kendall_matrix", (DL_FUNC) &_visualizationQualityControl_kendall_matrix, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_visualizationQualityControl(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
