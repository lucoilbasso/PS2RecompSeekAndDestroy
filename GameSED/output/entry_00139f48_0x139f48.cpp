#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00139f48
// Address: 0x139f48 - 0x139f90
void entry_00139f48_0x139f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139f48_0x139f48");
#endif

    ctx->pc = 0x139f48u;

    // 0x139f48: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x139f48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x139f4c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x139f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x139f50: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x139f50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x139f54: 0xacb30010  sw          $s3, 0x10($a1)
    ctx->pc = 0x139f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 19));
    // 0x139f58: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x139f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x139f5c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x139f5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x139f60: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x139f60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x139f64: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x139f64u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139f68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x139f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x139f6c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x139f6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139f70: 0xe4940018  swc1        $f20, 0x18($a0)
    ctx->pc = 0x139f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x139f74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139f78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139f7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139f7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139f80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x139f80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139f84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x139f84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139f88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x139f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139f8c: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x139f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x139f90u;
}
