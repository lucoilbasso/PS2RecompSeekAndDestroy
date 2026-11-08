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

// Function: default
// Address: 0x1de73c - 0x1de7b8
void ps2_default_0x1de73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1de73c");
#endif

    ctx->pc = 0x1de73cu;

    // 0x1de73c: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x1de73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de740: 0x25070030  addiu       $a3, $t0, 0x30
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x1de744: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x1de744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de748: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1de748u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1de74c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1de74cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1de750: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1de750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de754: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1de754u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de758: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1de758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de75c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1de75cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1de760: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1de760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1de764: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1de764u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1de768: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1de768u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1de76c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1de76cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1de770: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1de770u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1de774: 0xc503002c  lwc1        $f3, 0x2C($t0)
    ctx->pc = 0x1de774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1de778: 0x25060040  addiu       $a2, $t0, 0x40
    ctx->pc = 0x1de778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x1de77c: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x1de77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de780: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1de780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de784: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x1de784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de788: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1de788u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1de78c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1de78cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1de790: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1de790u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1de794: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1de794u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1de798: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1de798u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1de79c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1de79cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1de7a0: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1de7a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1de7a4: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x1de7a4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1de7a8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1de7a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de7ac: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1de7acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1de7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE7B8u;
}
