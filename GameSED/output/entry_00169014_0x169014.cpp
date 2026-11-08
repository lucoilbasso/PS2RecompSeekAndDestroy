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

// Function: entry_00169014
// Address: 0x169014 - 0x16908c
void entry_00169014_0x169014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169014_0x169014");
#endif

    switch (ctx->pc) {
        case 0x169058u: goto label_169058;
        default: break;
    }

    ctx->pc = 0x169014u;

    // 0x169014: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x169014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x169018: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x169018u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16901c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16901cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169020: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x169020u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x169024: 0x4a0002ff  vnop
    ctx->pc = 0x169024u;
    // NOP operation, no action needed for VU0
    // 0x169028: 0x4a0002ff  vnop
    ctx->pc = 0x169028u;
    // NOP operation, no action needed for VU0
    // 0x16902c: 0x4a0002ff  vnop
    ctx->pc = 0x16902cu;
    // NOP operation, no action needed for VU0
    // 0x169030: 0x4a0002ff  vnop
    ctx->pc = 0x169030u;
    // NOP operation, no action needed for VU0
    // 0x169034: 0x4a0002ff  vnop
    ctx->pc = 0x169034u;
    // NOP operation, no action needed for VU0
    // 0x169038: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x169038u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x16903c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x16903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x169040: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x169040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x169044: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x169044u;
    {
        const bool branch_taken_0x169044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169044) {
            ctx->pc = 0x169048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169044u;
            // 0x169048: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169090u;
            return;
        }
    }
    ctx->pc = 0x16904Cu;
    // 0x16904c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169050: 0xc06164c  jal         func_185930
    ctx->pc = 0x169050u;
    SET_GPR_U32(ctx, 31, 0x169058u);
    ctx->pc = 0x169054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169050u;
    // 0x169054: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169050u, 0x169058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169058u;
label_169058:
    // 0x169058: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16905c: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x16905cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x169060: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x169060u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x169064: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x169064u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x169068: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x169068u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16906c: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x16906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x169070: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x169070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169074: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x169074u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169078: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x169078u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x16907c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x16907cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x169080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169084: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x169084u;
    SET_GPR_U32(ctx, 31, 0x16908Cu);
    ctx->pc = 0x169088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169084u;
    // 0x169088: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x169084u, 0x16908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16908Cu;
}
