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

// Function: EffectBallPolyInit__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x12c0b0 - 0x12c144
void EffectBallPolyInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x12c0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectBallPolyInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x12c0b0");
#endif

    switch (ctx->pc) {
        case 0x12c0d8u: goto label_12c0d8;
        case 0x12c0fcu: goto label_12c0fc;
        case 0x12c110u: goto label_12c110;
        default: break;
    }

    ctx->pc = 0x12c0b0u;

    // 0x12c0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c0b4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x12c0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x12c0b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c0bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c0c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12c0c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12c0c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12c0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12c0cc: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x12c0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x12c0d0: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C0D0u;
    SET_GPR_U32(ctx, 31, 0x12C0D8u);
    ctx->pc = 0x12C0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C0D0u;
    // 0x12c0d4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C0D0u, 0x12C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0D8u;
label_12c0d8:
    // 0x12c0d8: 0xae4001b0  sw          $zero, 0x1B0($s2)
    ctx->pc = 0x12c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 0));
    // 0x12c0dc: 0xae4001b4  sw          $zero, 0x1B4($s2)
    ctx->pc = 0x12c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 0));
    // 0x12c0e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c0e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0e4: 0xae4001b8  sw          $zero, 0x1B8($s2)
    ctx->pc = 0x12c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 0));
    // 0x12c0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0ec: 0x264501bc  addiu       $a1, $s2, 0x1BC
    ctx->pc = 0x12c0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
    // 0x12c0f0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x12c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12c0f4: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12C0F4u;
    SET_GPR_U32(ctx, 31, 0x12C0FCu);
    ctx->pc = 0x12C0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C0F4u;
    // 0x12c0f8: 0xae4201c4  sw          $v0, 0x1C4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12C0F4u, 0x12C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0FCu;
label_12c0fc:
    // 0x12c0fc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x12c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12c100: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x12c100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x12c104: 0xae4201c0  sw          $v0, 0x1C0($s2)
    ctx->pc = 0x12c104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 2));
    // 0x12c108: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C108u;
    SET_GPR_U32(ctx, 31, 0x12C110u);
    ctx->pc = 0x12C10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C108u;
    // 0x12c10c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C108u, 0x12C110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C110u;
label_12c110:
    // 0x12c110: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C110u;
    {
        const bool branch_taken_0x12c110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C110u;
        // 0x12c114: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c110) {
            ctx->pc = 0x12C12Cu;
            goto label_12c12c;
        }
    }
    ctx->pc = 0x12C118u;
    // 0x12c118: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x12c118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12c11c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C11Cu;
    {
        const bool branch_taken_0x12c11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C11Cu;
        // 0x12c120: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c11c) {
            ctx->pc = 0x12C130u;
            goto label_12c130;
        }
    }
    ctx->pc = 0x12C124u;
    // 0x12c124: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x12c124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x12c128: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x12c128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
label_12c12c:
    // 0x12c12c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c130:
    // 0x12c130: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c134: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c138: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12c138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c13c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C13Cu;
        // 0x12c140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C144u;
}
