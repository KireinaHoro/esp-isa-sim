require_fp;
softfloat_roundingMode = VRM;
WRITE_FRD(f64_mul(f64(FRS1), f64(FRS2)).v);
set_fp_exceptions;
