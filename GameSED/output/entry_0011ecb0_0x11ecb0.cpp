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

// Function: entry_0011ecb0
// Address: 0x11ecb0 - 0x11ecec
void entry_0011ecb0_0x11ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ecb0_0x11ecb0");
#endif

    ctx->pc = 0x11ecb0u;

    // 0x11ecb0: 0xc4c30058  lwc1        $f3, 0x58($a2)
    ctx->pc = 0x11ecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ecb4: 0xc4c20080  lwc1        $f2, 0x80($a2)
    ctx->pc = 0x11ecb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ecb8: 0xc4c10084  lwc1        $f1, 0x84($a2)
    ctx->pc = 0x11ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ecbc: 0xc4c00088  lwc1        $f0, 0x88($a2)
    ctx->pc = 0x11ecbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ecc0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x11ecc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11ecc4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11ecc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11ecc8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11ecc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11eccc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x11ecccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11ecd0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x11ecd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11ecd4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x11ecd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x11ecd8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x11ecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x11ecdc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x11ecdcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11ece0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x11ece0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x11ece4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x11ece4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x11ece8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11ece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x11ececu;
}
