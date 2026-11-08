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

// Function: entry_00167ffc
// Address: 0x167ffc - 0x168074
void entry_00167ffc_0x167ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167ffc_0x167ffc");
#endif

    switch (ctx->pc) {
        case 0x168040u: goto label_168040;
        default: break;
    }

    ctx->pc = 0x167ffcu;

    // 0x167ffc: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x167ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x168000: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168000u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168004: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168004u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168008: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168008u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16800c: 0x4a0002ff  vnop
    ctx->pc = 0x16800cu;
    // NOP operation, no action needed for VU0
    // 0x168010: 0x4a0002ff  vnop
    ctx->pc = 0x168010u;
    // NOP operation, no action needed for VU0
    // 0x168014: 0x4a0002ff  vnop
    ctx->pc = 0x168014u;
    // NOP operation, no action needed for VU0
    // 0x168018: 0x4a0002ff  vnop
    ctx->pc = 0x168018u;
    // NOP operation, no action needed for VU0
    // 0x16801c: 0x4a0002ff  vnop
    ctx->pc = 0x16801cu;
    // NOP operation, no action needed for VU0
    // 0x168020: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168020u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168024: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168028: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16802c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x16802Cu;
    {
        const bool branch_taken_0x16802c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16802c) {
            ctx->pc = 0x168030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16802Cu;
            // 0x168030: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168078u;
            return;
        }
    }
    ctx->pc = 0x168034u;
    // 0x168034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168038: 0xc06164c  jal         func_185930
    ctx->pc = 0x168038u;
    SET_GPR_U32(ctx, 31, 0x168040u);
    ctx->pc = 0x16803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168038u;
    // 0x16803c: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168038u, 0x168040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168040u;
label_168040:
    // 0x168040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168044: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x168044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x168048: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16804c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x16804cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168050: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168050u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168054: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168058: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x168058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16805c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16805cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168060: 0x3c7100b  movn        $v0, $fp, $a3
    ctx->pc = 0x168060u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168068: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168068u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16806c: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x16806Cu;
    SET_GPR_U32(ctx, 31, 0x168074u);
    ctx->pc = 0x168070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16806Cu;
    // 0x168070: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x16806Cu, 0x168074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168074u;
}
