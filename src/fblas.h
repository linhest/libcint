/*
 * File: fblas.h
 * Author: Qiming Sun <osirpt.sun@gmail.com>
 *
 * blas interface and blas-like functions
 */

#if defined __cplusplus
extern "C" {
#endif
#include <complex.h>

double dasum_(const int *n, const double *dx, const int *incx);
void dscal_(const int *n, const double *da, double *dx, const int *incx);
void daxpy_(const int *n, const double *da, const double *dx,
           const int *incx, double *dy, const int *incy);
double ddot_(const int *n, const double *dx, const int *incx,
             const double *dy, const int *incy);
void dcopy_(const int *n, const double *dx, const int *incx,
            const double *dy, const int *incy);
void dgemm_(const char*, const char*,
            const int*, const int*, const int*,
            const double*, const double*, const int*,
            const double*, const int*,
            const double*, double*, const int*);
void dgemv_(const char*, const int*, const int*,
            const double*, const double*, const int*,
            const double*, const int*,
            const double*, double*, const int*);
void dger_(const int *m, const int *n,
           const double *alpha, const double *x,
           const int *incx, const double *y, const int *incy,
           double *a, const int *lda);
void dsymm_(const char*, const char*, const int*, const int*,
            const double*, const double*, const int*,
            const double*, const int*,
            const double*, double*, const int*);

//void dsyrk_
void zgerc_(const int *m, const int *n,
            const double complex *alpha, const double complex *x, const int *incx,
            const double complex *y, const int *incy,
            double complex *a, const int *lda);
void zgemv_(const char*, const int*, const int*,
            const double complex*, const double complex*, const int*,
            const double complex*, const int*,
            const double complex*, double complex*, const int*);
void zgemm_(const char*, const char*,
            const int*, const int*, const int*,
            const double complex*, const double complex*, const int*,
            const double complex*, const int*,
            const double complex*, double complex*, const int*);


void CINTdset0(const int n, double *x);
void CINTdaxpy2v(const int n, const double a,
                 const double *x, const double *y, double *v);
void CINTdmat_transpose(double *a_t, const double *a,
                        const int m, const int n);
void CINTzmat_transpose(double complex *a_t, const double complex *a,
                        const int m, const int n);
void CINTzmat_dagger(double complex *a_c, const double complex *a,
                     const int m, const int n);

#if defined __cplusplus
} // end extern "C"
#endif
