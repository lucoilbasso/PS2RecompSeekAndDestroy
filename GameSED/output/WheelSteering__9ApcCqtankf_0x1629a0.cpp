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

// Function: WheelSteering__9ApcCqtankf
// Address: 0x1629a0 - 0x162ac0
void WheelSteering__9ApcCqtankf_0x1629a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WheelSteering__9ApcCqtankf_0x1629a0");
#endif

    switch (ctx->pc) {
        case 0x162a3cu: goto label_162a3c;
        case 0x162a4cu: goto label_162a4c;
        case 0x162a8cu: goto label_162a8c;
        case 0x162a9cu: goto label_162a9c;
        default: break;
    }

    ctx->pc = 0x1629a0u;

    // 0x1629a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1629a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1629a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1629a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1629a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1629a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1629ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1629acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1629b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1629b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1629b4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1629b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1629b8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1629b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1629bc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1629bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1629c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1629c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1629c4: 0x8e421a2c  lw          $v0, 0x1A2C($s2)
    ctx->pc = 0x1629c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6700)));
    // 0x1629c8: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1629C8u;
    {
        const bool branch_taken_0x1629c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1629c8) {
            ctx->pc = 0x1629CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1629C8u;
            // 0x1629cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162AA0u;
            goto label_162aa0;
        }
    }
    ctx->pc = 0x1629D0u;
    // 0x1629d0: 0xc7808350  lwc1        $f0, -0x7CB0($gp)
    ctx->pc = 0x1629d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1629d4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1629d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1629d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1629d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1629dc: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1629dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1629e0: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1629e0u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1629e4: 0x48342800  qmfc2.ni    $s4, $vf5
    ctx->pc = 0x1629e4u;
    SET_GPR_VEC(ctx, 20, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1629e8: 0x14a000  sll         $s4, $s4, 0
    ctx->pc = 0x1629e8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
    // 0x1629ec: 0x265311b0  addiu       $s3, $s2, 0x11B0
    ctx->pc = 0x1629ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4528));
    // 0x1629f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1629f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1629f4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1629f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1629f8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1629F8u;
    {
        const bool branch_taken_0x1629f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1629FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629F8u;
        // 0x1629fc: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629f8) {
            ctx->pc = 0x162A9Cu;
            goto label_162a9c;
        }
    }
    ctx->pc = 0x162A00u;
    // 0x162a00: 0x8e4211b4  lw          $v0, 0x11B4($s2)
    ctx->pc = 0x162a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4532)));
    // 0x162a04: 0x10550011  beq         $v0, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x162A04u;
    {
        const bool branch_taken_0x162a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x162A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A04u;
        // 0x162a08: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a04) {
            ctx->pc = 0x162A4Cu;
            goto label_162a4c;
        }
    }
    ctx->pc = 0x162A0Cu;
    // 0x162a0c: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x162a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x162a10: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x162a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x162a14: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x162a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x162a18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x162a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a1c: 0x24061c28  addiu       $a2, $zero, 0x1C28
    ctx->pc = 0x162a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7208));
    // 0x162a20: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x162a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x162a24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x162a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162a28: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x162a28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162a2c: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x162a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x162a30: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x162a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x162a34: 0xc067b88  jal         func_19EE20
    ctx->pc = 0x162A34u;
    SET_GPR_U32(ctx, 31, 0x162A3Cu);
    ctx->pc = 0x162A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A34u;
    // 0x162a38: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE20u, 0x162A34u, 0x162A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A3Cu;
label_162a3c:
    // 0x162a3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x162a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a44: 0xc0618d4  jal         func_186350
    ctx->pc = 0x162A44u;
    SET_GPR_U32(ctx, 31, 0x162A4Cu);
    ctx->pc = 0x162A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A44u;
    // 0x162a48: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x162A44u, 0x162A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A4Cu;
label_162a4c:
    // 0x162a4c: 0x8e4311b8  lw          $v1, 0x11B8($s2)
    ctx->pc = 0x162a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4536)));
    // 0x162a50: 0x10750012  beq         $v1, $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x162A50u;
    {
        const bool branch_taken_0x162a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x162A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A50u;
        // 0x162a54: 0x31980  sll         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a50) {
            ctx->pc = 0x162A9Cu;
            goto label_162a9c;
        }
    }
    ctx->pc = 0x162A58u;
    // 0x162a58: 0x8e4701b4  lw          $a3, 0x1B4($s2)
    ctx->pc = 0x162a58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x162a5c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x162a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x162a60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x162a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a64: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x162a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x162a68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x162a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a6c: 0x24061c28  addiu       $a2, $zero, 0x1C28
    ctx->pc = 0x162a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7208));
    // 0x162a70: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x162a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x162a74: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x162a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x162a78: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x162a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x162a7c: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x162a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x162a80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x162a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x162a84: 0xc067b88  jal         func_19EE20
    ctx->pc = 0x162A84u;
    SET_GPR_U32(ctx, 31, 0x162A8Cu);
    ctx->pc = 0x162A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A84u;
    // 0x162a88: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE20u, 0x162A84u, 0x162A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A8Cu;
label_162a8c:
    // 0x162a8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x162a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a94: 0xc0618d4  jal         func_186350
    ctx->pc = 0x162A94u;
    SET_GPR_U32(ctx, 31, 0x162A9Cu);
    ctx->pc = 0x162A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A94u;
    // 0x162a98: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x162A94u, 0x162A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A9Cu;
label_162a9c:
    // 0x162a9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x162a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162aa0:
    // 0x162aa0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x162aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162aa4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x162aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162aa8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x162aa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x162aac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x162aacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162ab0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x162ab0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x162ab4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x162ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x162AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AB8u;
        // 0x162abc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162AC0u;
}
