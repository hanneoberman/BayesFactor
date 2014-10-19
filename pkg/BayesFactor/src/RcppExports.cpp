// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// metropMetaTRcpp
NumericMatrix metropMetaTRcpp(NumericVector t, NumericVector n1, NumericVector n2, bool twoSample, double rscale, int iterations, bool doInterval, NumericVector interval, bool intervalCompl, bool nullModel, int progress, Function callback, double callbackInterval);
RcppExport SEXP BayesFactor_metropMetaTRcpp(SEXP tSEXP, SEXP n1SEXP, SEXP n2SEXP, SEXP twoSampleSEXP, SEXP rscaleSEXP, SEXP iterationsSEXP, SEXP doIntervalSEXP, SEXP intervalSEXP, SEXP intervalComplSEXP, SEXP nullModelSEXP, SEXP progressSEXP, SEXP callbackSEXP, SEXP callbackIntervalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type n1(n1SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type n2(n2SEXP );
        Rcpp::traits::input_parameter< bool >::type twoSample(twoSampleSEXP );
        Rcpp::traits::input_parameter< double >::type rscale(rscaleSEXP );
        Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP );
        Rcpp::traits::input_parameter< bool >::type doInterval(doIntervalSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type interval(intervalSEXP );
        Rcpp::traits::input_parameter< bool >::type intervalCompl(intervalComplSEXP );
        Rcpp::traits::input_parameter< bool >::type nullModel(nullModelSEXP );
        Rcpp::traits::input_parameter< int >::type progress(progressSEXP );
        Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP );
        Rcpp::traits::input_parameter< double >::type callbackInterval(callbackIntervalSEXP );
        NumericMatrix __result = metropMetaTRcpp(t, n1, n2, twoSample, rscale, iterations, doInterval, interval, intervalCompl, nullModel, progress, callback, callbackInterval);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// metropProportionRcpp
NumericMatrix metropProportionRcpp(NumericVector y, NumericVector n, double p0, double rscale, int iterations, bool doInterval, NumericVector interval, bool intervalCompl, bool nullModel, int progress, Function callback, double callbackInterval);
RcppExport SEXP BayesFactor_metropProportionRcpp(SEXP ySEXP, SEXP nSEXP, SEXP p0SEXP, SEXP rscaleSEXP, SEXP iterationsSEXP, SEXP doIntervalSEXP, SEXP intervalSEXP, SEXP intervalComplSEXP, SEXP nullModelSEXP, SEXP progressSEXP, SEXP callbackSEXP, SEXP callbackIntervalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP );
        Rcpp::traits::input_parameter< double >::type p0(p0SEXP );
        Rcpp::traits::input_parameter< double >::type rscale(rscaleSEXP );
        Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP );
        Rcpp::traits::input_parameter< bool >::type doInterval(doIntervalSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type interval(intervalSEXP );
        Rcpp::traits::input_parameter< bool >::type intervalCompl(intervalComplSEXP );
        Rcpp::traits::input_parameter< bool >::type nullModel(nullModelSEXP );
        Rcpp::traits::input_parameter< int >::type progress(progressSEXP );
        Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP );
        Rcpp::traits::input_parameter< double >::type callbackInterval(callbackIntervalSEXP );
        NumericMatrix __result = metropProportionRcpp(y, n, p0, rscale, iterations, doInterval, interval, intervalCompl, nullModel, progress, callback, callbackInterval);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// gibbsTwoSampleRcpp
NumericMatrix gibbsTwoSampleRcpp(NumericVector ybar, NumericVector s2, NumericVector N, double rscale, int iterations, bool doInterval, NumericVector interval, bool intervalCompl, bool nullModel, int progress, Function callback, double callbackInterval);
RcppExport SEXP BayesFactor_gibbsTwoSampleRcpp(SEXP ybarSEXP, SEXP s2SEXP, SEXP NSEXP, SEXP rscaleSEXP, SEXP iterationsSEXP, SEXP doIntervalSEXP, SEXP intervalSEXP, SEXP intervalComplSEXP, SEXP nullModelSEXP, SEXP progressSEXP, SEXP callbackSEXP, SEXP callbackIntervalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type ybar(ybarSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type s2(s2SEXP );
        Rcpp::traits::input_parameter< NumericVector >::type N(NSEXP );
        Rcpp::traits::input_parameter< double >::type rscale(rscaleSEXP );
        Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP );
        Rcpp::traits::input_parameter< bool >::type doInterval(doIntervalSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type interval(intervalSEXP );
        Rcpp::traits::input_parameter< bool >::type intervalCompl(intervalComplSEXP );
        Rcpp::traits::input_parameter< bool >::type nullModel(nullModelSEXP );
        Rcpp::traits::input_parameter< int >::type progress(progressSEXP );
        Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP );
        Rcpp::traits::input_parameter< double >::type callbackInterval(callbackIntervalSEXP );
        NumericMatrix __result = gibbsTwoSampleRcpp(ybar, s2, N, rscale, iterations, doInterval, interval, intervalCompl, nullModel, progress, callback, callbackInterval);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// gibbsOneSampleRcpp
NumericMatrix gibbsOneSampleRcpp(double ybar, double s2, int N, double rscale, int iterations, bool doInterval, NumericVector interval, bool intervalCompl, bool nullModel, int progress, Function callback, double callbackInterval);
RcppExport SEXP BayesFactor_gibbsOneSampleRcpp(SEXP ybarSEXP, SEXP s2SEXP, SEXP NSEXP, SEXP rscaleSEXP, SEXP iterationsSEXP, SEXP doIntervalSEXP, SEXP intervalSEXP, SEXP intervalComplSEXP, SEXP nullModelSEXP, SEXP progressSEXP, SEXP callbackSEXP, SEXP callbackIntervalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type ybar(ybarSEXP );
        Rcpp::traits::input_parameter< double >::type s2(s2SEXP );
        Rcpp::traits::input_parameter< int >::type N(NSEXP );
        Rcpp::traits::input_parameter< double >::type rscale(rscaleSEXP );
        Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP );
        Rcpp::traits::input_parameter< bool >::type doInterval(doIntervalSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type interval(intervalSEXP );
        Rcpp::traits::input_parameter< bool >::type intervalCompl(intervalComplSEXP );
        Rcpp::traits::input_parameter< bool >::type nullModel(nullModelSEXP );
        Rcpp::traits::input_parameter< int >::type progress(progressSEXP );
        Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP );
        Rcpp::traits::input_parameter< double >::type callbackInterval(callbackIntervalSEXP );
        NumericMatrix __result = gibbsOneSampleRcpp(ybar, s2, N, rscale, iterations, doInterval, interval, intervalCompl, nullModel, progress, callback, callbackInterval);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}