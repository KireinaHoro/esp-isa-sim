require_fp;
softfloat_roundingMode = VRM;
WRITE_FRD(f64_mulAdd(f64(FRS1 ^ (uint64_t)INT64_MIN), f64(FRS2), f64(FRS3 ^ (uint64_t)INT64_MIN)).v);
set_fp_exceptions;
