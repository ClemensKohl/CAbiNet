// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ComputeSNNasym
Eigen::SparseMatrix<double> ComputeSNNasym(Eigen::SparseMatrix<double> SNN, double prune, String mode);
RcppExport SEXP _CAbiNet_ComputeSNNasym(SEXP SNNSEXP, SEXP pruneSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type SNN(SNNSEXP);
    Rcpp::traits::input_parameter< double >::type prune(pruneSEXP);
    Rcpp::traits::input_parameter< String >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(ComputeSNNasym(SNN, prune, mode));
    return rcpp_result_gen;
END_RCPP
}
// calc_overlap
Eigen::SparseMatrix<double> calc_overlap(Eigen::SparseMatrix<int> cc_adj, Eigen::SparseMatrix<int> cg_adj);
RcppExport SEXP _CAbiNet_calc_overlap(SEXP cc_adjSEXP, SEXP cg_adjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<int> >::type cc_adj(cc_adjSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<int> >::type cg_adj(cg_adjSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_overlap(cc_adj, cg_adj));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CAbiNet_ComputeSNNasym", (DL_FUNC) &_CAbiNet_ComputeSNNasym, 3},
    {"_CAbiNet_calc_overlap", (DL_FUNC) &_CAbiNet_calc_overlap, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_CAbiNet(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
