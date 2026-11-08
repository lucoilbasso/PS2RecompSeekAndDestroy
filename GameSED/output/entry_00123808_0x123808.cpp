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

// Function: entry_00123808
// Address: 0x123808 - 0x123858
void entry_00123808_0x123808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123808_0x123808");
#endif

    ctx->pc = 0x123808u;

    // 0x123808: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x123808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x12380c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12380cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x123810: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x123810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x123814: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x123814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x123818: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x123818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12381c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12381cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x123820: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x123820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123824: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x123824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x123828: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x123828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x12382c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12382cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x123830: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x123830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x123834: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x123834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x123838: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x123838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12383c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x12383cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x123840: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x123840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x123844: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x123844u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x123848: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x123848u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12384c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x12384cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x123850: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x123850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x123854: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x123854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->pc = 0x123858u;
}
