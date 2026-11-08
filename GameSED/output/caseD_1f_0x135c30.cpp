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

// Function: caseD_1f
// Address: 0x135c30 - 0x135ca0
void caseD_1f_0x135c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1f_0x135c30");
#endif

    switch (ctx->pc) {
        case 0x135c4cu: goto label_135c4c;
        case 0x135c60u: goto label_135c60;
        case 0x135c7cu: goto label_135c7c;
        default: break;
    }

    ctx->pc = 0x135c30u;

    // 0x135c30: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x135c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135c34: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x135c34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x135c38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x135c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135c3c: 0x50530032  beql        $v0, $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x135C3Cu;
    {
        const bool branch_taken_0x135c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x135c3c) {
            ctx->pc = 0x135C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135C3Cu;
            // 0x135c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135D08u;
            return;
        }
    }
    ctx->pc = 0x135C44u;
    // 0x135c44: 0xc0506aa  jal         func_141AA8
    ctx->pc = 0x135C44u;
    SET_GPR_U32(ctx, 31, 0x135C4Cu);
    ctx->pc = 0x135C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C44u;
    // 0x135c48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141AA8u, 0x135C44u, 0x135C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C4Cu;
label_135c4c:
    // 0x135c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c54: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135c58: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135C58u;
    SET_GPR_U32(ctx, 31, 0x135C60u);
    ctx->pc = 0x135C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C58u;
    // 0x135c5c: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135C58u, 0x135C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C60u;
label_135c60:
    // 0x135c60: 0x1240007a  beqz        $s2, . + 4 + (0x7A << 2)
    ctx->pc = 0x135C60u;
    {
        const bool branch_taken_0x135c60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x135C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C60u;
        // 0x135c64: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c60) {
            ctx->pc = 0x135E4Cu;
            return;
        }
    }
    ctx->pc = 0x135C68u;
    // 0x135c68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x135c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135c6c: 0x5642000c  bnel        $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x135C6Cu;
    {
        const bool branch_taken_0x135c6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x135c6c) {
            ctx->pc = 0x135C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135C6Cu;
            // 0x135c70: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135CA0u;
            return;
        }
    }
    ctx->pc = 0x135C74u;
    // 0x135c74: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x135C74u;
    SET_GPR_U32(ctx, 31, 0x135C7Cu);
    ctx->pc = 0x135C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C74u;
    // 0x135c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x135C74u, 0x135C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C7Cu;
label_135c7c:
    // 0x135c7c: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x135c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135c80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x135c80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x135c84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x135c88: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x135c88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x135c8c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x135c8cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x135c90: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x135c90u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x135c94: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x135c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x135c98: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x135C98u;
    {
        const bool branch_taken_0x135c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C98u;
        // 0x135c9c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c98) {
            ctx->pc = 0x135E4Cu;
            return;
        }
    }
    ctx->pc = 0x135CA0u;
}
