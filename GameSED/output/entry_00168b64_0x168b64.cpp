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

// Function: entry_00168b64
// Address: 0x168b64 - 0x168bdc
void entry_00168b64_0x168b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168b64_0x168b64");
#endif

    switch (ctx->pc) {
        case 0x168ba8u: goto label_168ba8;
        default: break;
    }

    ctx->pc = 0x168b64u;

    // 0x168b64: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x168b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x168b68: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168b68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168b6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168b6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168b70: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168b70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168b74: 0x4a0002ff  vnop
    ctx->pc = 0x168b74u;
    // NOP operation, no action needed for VU0
    // 0x168b78: 0x4a0002ff  vnop
    ctx->pc = 0x168b78u;
    // NOP operation, no action needed for VU0
    // 0x168b7c: 0x4a0002ff  vnop
    ctx->pc = 0x168b7cu;
    // NOP operation, no action needed for VU0
    // 0x168b80: 0x4a0002ff  vnop
    ctx->pc = 0x168b80u;
    // NOP operation, no action needed for VU0
    // 0x168b84: 0x4a0002ff  vnop
    ctx->pc = 0x168b84u;
    // NOP operation, no action needed for VU0
    // 0x168b88: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168b88u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168b8c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168b90: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168b94: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x168B94u;
    {
        const bool branch_taken_0x168b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b94) {
            ctx->pc = 0x168B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168B94u;
            // 0x168b98: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168BE0u;
            return;
        }
    }
    ctx->pc = 0x168B9Cu;
    // 0x168b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ba0: 0xc06164c  jal         func_185930
    ctx->pc = 0x168BA0u;
    SET_GPR_U32(ctx, 31, 0x168BA8u);
    ctx->pc = 0x168BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168BA0u;
    // 0x168ba4: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168BA0u, 0x168BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168BA8u;
label_168ba8:
    // 0x168ba8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bac: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x168bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x168bb0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168bb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168bb4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168bb4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168bb8: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168bbc: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168bc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x168bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bc4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168bc8: 0x3c7100b  movn        $v0, $fp, $a3
    ctx->pc = 0x168bc8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168bcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168bd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168bd4: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168BD4u;
    SET_GPR_U32(ctx, 31, 0x168BDCu);
    ctx->pc = 0x168BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168BD4u;
    // 0x168bd8: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168BD4u, 0x168BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168BDCu;
}
