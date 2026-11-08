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

// Function: caseD_6
// Address: 0x154a40 - 0x154ab8
void caseD_6_0x154a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x154a40");
#endif

    switch (ctx->pc) {
        case 0x154a54u: goto label_154a54;
        case 0x154a6cu: goto label_154a6c;
        default: break;
    }

    ctx->pc = 0x154a40u;

    // 0x154a40: 0x8e02079c  lw          $v0, 0x79C($s0)
    ctx->pc = 0x154a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1948)));
    // 0x154a44: 0x50400236  beql        $v0, $zero, . + 4 + (0x236 << 2)
    ctx->pc = 0x154A44u;
    {
        const bool branch_taken_0x154a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154a44) {
            ctx->pc = 0x154A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154A44u;
            // 0x154a48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155320u;
            return;
        }
    }
    ctx->pc = 0x154A4Cu;
    // 0x154a4c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154A4Cu;
    SET_GPR_U32(ctx, 31, 0x154A54u);
    ctx->pc = 0x154A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A4Cu;
    // 0x154a50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154A4Cu, 0x154A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A54u;
label_154a54:
    // 0x154a54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x154a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x154a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154a5c: 0x56220016  bnel        $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x154A5Cu;
    {
        const bool branch_taken_0x154a5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x154a5c) {
            ctx->pc = 0x154A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154A5Cu;
            // 0x154a60: 0x8e0203b0  lw          $v0, 0x3B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154AB8u;
            return;
        }
    }
    ctx->pc = 0x154A64u;
    // 0x154a64: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x154A64u;
    SET_GPR_U32(ctx, 31, 0x154A6Cu);
    ctx->pc = 0x154A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A64u;
    // 0x154a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x154A64u, 0x154A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A6Cu;
label_154a6c:
    // 0x154a6c: 0xc6000634  lwc1        $f0, 0x634($s0)
    ctx->pc = 0x154a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154a70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x154a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a74: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x154a74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x154a78: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x154a78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x154a7c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x154a7cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x154a80: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x154a80u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x154a84: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x154a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x154a88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x154a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x154a8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x154a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x154a90: 0x8e0403b0  lw          $a0, 0x3B0($s0)
    ctx->pc = 0x154a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x154a94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x154a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154a98: 0x30841000  andi        $a0, $a0, 0x1000
    ctx->pc = 0x154a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x154a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x154a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154aa0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x154aa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x154aa4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x154aa4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x154aa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154aac: 0x804171a  j           func_105C68
    ctx->pc = 0x154AACu;
    ctx->pc = 0x154AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AACu;
    // 0x154ab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    ApSCDEntSetSystemStatus__Fi_0x105c68(rdram, ctx, runtime); return;
    ctx->pc = 0x154AB4u;
    // 0x154ab4: 0x0  nop
    ctx->pc = 0x154ab4u;
    // NOP
    ctx->pc = 0x154ab8u;
}
