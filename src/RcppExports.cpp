// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// XBloop_rcpp
arma::mat XBloop_rcpp(List DM, NumericVector Xvec, int nbObs, int nr, int nc);
RcppExport SEXP momentuHMM_XBloop_rcpp(SEXP DMSEXP, SEXP XvecSEXP, SEXP nbObsSEXP, SEXP nrSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type DM(DMSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Xvec(XvecSEXP);
    Rcpp::traits::input_parameter< int >::type nbObs(nbObsSEXP);
    Rcpp::traits::input_parameter< int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    rcpp_result_gen = Rcpp::wrap(XBloop_rcpp(DM, Xvec, nbObs, nr, nc));
    return rcpp_result_gen;
END_RCPP
}
// dgamma_rcpp
arma::colvec dgamma_rcpp(NumericVector x, arma::mat mu, arma::mat sigma);
RcppExport SEXP momentuHMM_dgamma_rcpp(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(dgamma_rcpp(x, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// dweibull_rcpp
arma::colvec dweibull_rcpp(NumericVector x, arma::mat shape, arma::mat scale);
RcppExport SEXP momentuHMM_dweibull_rcpp(SEXP xSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(dweibull_rcpp(x, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// dlnorm_rcpp
arma::colvec dlnorm_rcpp(NumericVector x, arma::mat meanlog, arma::mat sdlog);
RcppExport SEXP momentuHMM_dlnorm_rcpp(SEXP xSEXP, SEXP meanlogSEXP, SEXP sdlogSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type meanlog(meanlogSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sdlog(sdlogSEXP);
    rcpp_result_gen = Rcpp::wrap(dlnorm_rcpp(x, meanlog, sdlog));
    return rcpp_result_gen;
END_RCPP
}
// dexp_rcpp
arma::colvec dexp_rcpp(NumericVector x, arma::mat rate, arma::mat foo);
RcppExport SEXP momentuHMM_dexp_rcpp(SEXP xSEXP, SEXP rateSEXP, SEXP fooSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type foo(fooSEXP);
    rcpp_result_gen = Rcpp::wrap(dexp_rcpp(x, rate, foo));
    return rcpp_result_gen;
END_RCPP
}
// dvm_rcpp
arma::colvec dvm_rcpp(NumericVector x, arma::mat mu, arma::mat kappa);
RcppExport SEXP momentuHMM_dvm_rcpp(SEXP xSEXP, SEXP muSEXP, SEXP kappaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kappa(kappaSEXP);
    rcpp_result_gen = Rcpp::wrap(dvm_rcpp(x, mu, kappa));
    return rcpp_result_gen;
END_RCPP
}
// dwrpcauchy_rcpp
arma::colvec dwrpcauchy_rcpp(NumericVector x, arma::mat mu, arma::mat rho);
RcppExport SEXP momentuHMM_dwrpcauchy_rcpp(SEXP xSEXP, SEXP muSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(dwrpcauchy_rcpp(x, mu, rho));
    return rcpp_result_gen;
END_RCPP
}
// dbeta_rcpp
arma::colvec dbeta_rcpp(NumericVector x, arma::mat shape1, arma::mat shape2);
RcppExport SEXP momentuHMM_dbeta_rcpp(SEXP xSEXP, SEXP shape1SEXP, SEXP shape2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type shape2(shape2SEXP);
    rcpp_result_gen = Rcpp::wrap(dbeta_rcpp(x, shape1, shape2));
    return rcpp_result_gen;
END_RCPP
}
// dpois_rcpp
arma::colvec dpois_rcpp(NumericVector x, arma::mat rate, arma::mat foo);
RcppExport SEXP momentuHMM_dpois_rcpp(SEXP xSEXP, SEXP rateSEXP, SEXP fooSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type foo(fooSEXP);
    rcpp_result_gen = Rcpp::wrap(dpois_rcpp(x, rate, foo));
    return rcpp_result_gen;
END_RCPP
}
// nLogLike_rcpp
double nLogLike_rcpp(int nbStates, arma::mat covs, DataFrame data, CharacterVector dataNames, List dist, List Par, IntegerVector aInd, List zeroInflation, List oneInflation, bool stationary, IntegerVector knownStates);
RcppExport SEXP momentuHMM_nLogLike_rcpp(SEXP nbStatesSEXP, SEXP covsSEXP, SEXP dataSEXP, SEXP dataNamesSEXP, SEXP distSEXP, SEXP ParSEXP, SEXP aIndSEXP, SEXP zeroInflationSEXP, SEXP oneInflationSEXP, SEXP stationarySEXP, SEXP knownStatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nbStates(nbStatesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type covs(covsSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type dataNames(dataNamesSEXP);
    Rcpp::traits::input_parameter< List >::type dist(distSEXP);
    Rcpp::traits::input_parameter< List >::type Par(ParSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type aInd(aIndSEXP);
    Rcpp::traits::input_parameter< List >::type zeroInflation(zeroInflationSEXP);
    Rcpp::traits::input_parameter< List >::type oneInflation(oneInflationSEXP);
    Rcpp::traits::input_parameter< bool >::type stationary(stationarySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type knownStates(knownStatesSEXP);
    rcpp_result_gen = Rcpp::wrap(nLogLike_rcpp(nbStates, covs, data, dataNames, dist, Par, aInd, zeroInflation, oneInflation, stationary, knownStates));
    return rcpp_result_gen;
END_RCPP
}
// trMatrix_rcpp
arma::cube trMatrix_rcpp(int nbStates, arma::mat beta, arma::mat covs);
RcppExport SEXP momentuHMM_trMatrix_rcpp(SEXP nbStatesSEXP, SEXP betaSEXP, SEXP covsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nbStates(nbStatesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type covs(covsSEXP);
    rcpp_result_gen = Rcpp::wrap(trMatrix_rcpp(nbStates, beta, covs));
    return rcpp_result_gen;
END_RCPP
}
