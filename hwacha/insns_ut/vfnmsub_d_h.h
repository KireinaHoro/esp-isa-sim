require_fp;
softfloat_roundingMode = VRM;
WRITE_FRD(f64_mulAdd(f32_to_f64(f32(HFRS1 ^ (uint32_t)INT32_MIN)), f32_to_f64(f32(HFRS2)), f32_to_f64(f32(HFRS3))).v);
set_fp_exceptions;
