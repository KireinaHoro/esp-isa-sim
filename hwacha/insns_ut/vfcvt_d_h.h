require_fp;
softfloat_roundingMode = VRM;
WRITE_FRD(f32_to_f64(f32(HFRS1)).v);
set_fp_exceptions;
