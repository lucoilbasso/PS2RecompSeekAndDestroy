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

// Function: entry_001429f4
// Address: 0x1429f4 - 0x142a50
void entry_001429f4_0x1429f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001429f4_0x1429f4");
#endif

    ctx->pc = 0x1429f4u;

    // 0x1429f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1429f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1429f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1429f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1429fc: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x1429fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142a00: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x142A00u;
    {
        const bool branch_taken_0x142a00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x142A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A00u;
        // 0x142a04: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a00) {
            ctx->pc = 0x142A64u;
            return;
        }
    }
    ctx->pc = 0x142A08u;
    // 0x142a08: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x142a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x142a0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142a10: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x142a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x142a14: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x142a14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x142a18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x142a18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142a1c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x142a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x142a20: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x142a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x142a24: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x142a24u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x142a28: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x142a28u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x142a2c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x142a2cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x142a30: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x142a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x142a34: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x142a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x142a38: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x142a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x142a3c: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x142a3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x142a40: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x142a40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x142a44: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x142a44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142a48: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x142a48u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x142a4c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x142a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x142a50u;
}
