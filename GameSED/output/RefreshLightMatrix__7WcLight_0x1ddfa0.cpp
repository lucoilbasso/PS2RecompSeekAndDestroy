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

// Function: RefreshLightMatrix__7WcLight
// Address: 0x1ddfa0 - 0x1de0ec
void RefreshLightMatrix__7WcLight_0x1ddfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RefreshLightMatrix__7WcLight_0x1ddfa0");
#endif

    switch (ctx->pc) {
        case 0x1de00cu: goto label_1de00c;
        case 0x1de020u: goto label_1de020;
        default: break;
    }

    ctx->pc = 0x1ddfa0u;

    // 0x1ddfa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ddfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ddfa4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ddfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ddfa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ddfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ddfac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ddfacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddfb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ddfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ddfb4: 0x26110150  addiu       $s1, $s0, 0x150
    ctx->pc = 0x1ddfb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1ddfb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ddfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ddfbc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ddfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ddfc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ddfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ddfc4: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x1DDFC4u;
    {
        const bool branch_taken_0x1ddfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddfc4) {
            ctx->pc = 0x1DDFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDFC4u;
            // 0x1ddfc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE0DCu;
            goto label_1de0dc;
        }
    }
    ctx->pc = 0x1DDFCCu;
    // 0x1ddfcc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ddfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ddfd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ddfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddfd4: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DDFD4u;
    {
        const bool branch_taken_0x1ddfd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ddfd4) {
            ctx->pc = 0x1DDFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDFD4u;
            // 0x1ddfd8: 0x26030160  addiu       $v1, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE028u;
            goto label_1de028;
        }
    }
    ctx->pc = 0x1DDFDCu;
    // 0x1ddfdc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDFDCu;
    {
        const bool branch_taken_0x1ddfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddfdc) {
            ctx->pc = 0x1DDFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDFDCu;
            // 0x1ddfe0: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDFF8u;
            goto label_1ddff8;
        }
    }
    ctx->pc = 0x1DDFE4u;
    // 0x1ddfe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ddfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddfe8: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1DDFE8u;
    {
        const bool branch_taken_0x1ddfe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DDFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFE8u;
        // 0x1ddfec: 0x26040220  addiu       $a0, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddfe8) {
            ctx->pc = 0x1DE088u;
            goto label_1de088;
        }
    }
    ctx->pc = 0x1DDFF0u;
    // 0x1ddff0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1DDFF0u;
    {
        const bool branch_taken_0x1ddff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFF0u;
        // 0x1ddff4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddff0) {
            ctx->pc = 0x1DE0C8u;
            goto label_1de0c8;
        }
    }
    ctx->pc = 0x1DDFF8u;
label_1ddff8:
    // 0x1ddff8: 0x26050220  addiu       $a1, $s0, 0x220
    ctx->pc = 0x1ddff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1ddffc: 0x26060230  addiu       $a2, $s0, 0x230
    ctx->pc = 0x1ddffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x1de000: 0x26070240  addiu       $a3, $s0, 0x240
    ctx->pc = 0x1de000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x1de004: 0xc06f060  jal         func_1BC180
    ctx->pc = 0x1DE004u;
    SET_GPR_U32(ctx, 31, 0x1DE00Cu);
    ctx->pc = 0x1DE008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE004u;
    // 0x1de008: 0x260801e0  addiu       $t0, $s0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC180u, 0x1DE004u, 0x1DE00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE00Cu;
label_1de00c:
    // 0x1de00c: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x1de00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1de010: 0x26070210  addiu       $a3, $s0, 0x210
    ctx->pc = 0x1de010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1de014: 0x260501f0  addiu       $a1, $s0, 0x1F0
    ctx->pc = 0x1de014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1de018: 0xc06f030  jal         func_1BC0C0
    ctx->pc = 0x1DE018u;
    SET_GPR_U32(ctx, 31, 0x1DE020u);
    ctx->pc = 0x1DE01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE018u;
    // 0x1de01c: 0x26060200  addiu       $a2, $s0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0C0u, 0x1DE018u, 0x1DE020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE020u;
label_1de020:
    // 0x1de020: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1DE020u;
    {
        const bool branch_taken_0x1de020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE020u;
        // 0x1de024: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de020) {
            ctx->pc = 0x1DE0C8u;
            goto label_1de0c8;
        }
    }
    ctx->pc = 0x1DE028u;
label_1de028:
    // 0x1de028: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x1de028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1de02c: 0x260401e0  addiu       $a0, $s0, 0x1E0
    ctx->pc = 0x1de02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x1de030: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1de030u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de034: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1de034u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1de038: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1de038u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1de03c: 0xd8870000  lqc2        $vf7, 0x0($a0)
    ctx->pc = 0x1de03cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1de040: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1de040u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1de044: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1de044u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de048: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1de048u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1de04c: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1de04cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1de050: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x1de050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1de054: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x1de054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1de058: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1de058u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de05c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1de05cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1de060: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1de060u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1de064: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x1de064u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1de068: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x1de068u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1de06c: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x1de06cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1de070: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1de070u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1de074: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1de074u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de078: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1de078u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1de07c: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x1de07cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1de080: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DE080u;
    {
        const bool branch_taken_0x1de080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE080u;
        // 0x1de084: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de080) {
            ctx->pc = 0x1DE0C8u;
            goto label_1de0c8;
        }
    }
    ctx->pc = 0x1DE088u;
label_1de088:
    // 0x1de088: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x1de088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1de08c: 0x260201f0  addiu       $v0, $s0, 0x1F0
    ctx->pc = 0x1de08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x1de090: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1de090u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de094: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1de094u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1de098: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1de098u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1de09c: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x1de09cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1de0a0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1de0a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de0a4: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x1de0a4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1de0a8: 0x4a250b3c  vmove.w     $vf5, $vf1
    ctx->pc = 0x1de0a8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x1de0ac: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x1de0acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1de0b0: 0x4a270b3c  vmove.w     $vf7, $vf1
    ctx->pc = 0x1de0b0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[1], _mm_castsi128_ps(mask)); }
    // 0x1de0b4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1de0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1de0b8: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1de0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de0bc: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1de0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1de0c0: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1de0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1de0c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1de0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1de0c8:
    // 0x1de0c8: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x1de0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x1de0cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1de0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1de0d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1de0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1de0d4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1de0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1de0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1de0dc:
    // 0x1de0dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de0dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de0e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0E4u;
        // 0x1de0e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE0ECu;
}
