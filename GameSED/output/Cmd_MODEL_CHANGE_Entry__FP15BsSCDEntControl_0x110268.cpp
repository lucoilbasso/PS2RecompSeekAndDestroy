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

// Function: Cmd_MODEL_CHANGE_Entry__FP15BsSCDEntControl
// Address: 0x110268 - 0x1102fc
void Cmd_MODEL_CHANGE_Entry__FP15BsSCDEntControl_0x110268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MODEL_CHANGE_Entry__FP15BsSCDEntControl_0x110268");
#endif

    switch (ctx->pc) {
        case 0x110294u: goto label_110294;
        case 0x1102b0u: goto label_1102b0;
        case 0x1102c8u: goto label_1102c8;
        case 0x1102d4u: goto label_1102d4;
        case 0x1102e8u: goto label_1102e8;
        default: break;
    }

    ctx->pc = 0x110268u;

    // 0x110268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11026c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11026cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110270: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x110270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x110274: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x110274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110278: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x110278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11027c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11027cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110280: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110284: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x110284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x110288: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x110288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x11028c: 0xc04110c  jal         func_104430
    ctx->pc = 0x11028Cu;
    SET_GPR_U32(ctx, 31, 0x110294u);
    ctx->pc = 0x110290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11028Cu;
    // 0x110290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x11028Cu, 0x110294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110294u;
label_110294:
    // 0x110294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110298: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x110298u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11029c: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x11029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1102a0: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1102A0u;
    {
        const bool branch_taken_0x1102a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1102A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102A0u;
        // 0x1102a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102a0) {
            ctx->pc = 0x1102C8u;
            goto label_1102c8;
        }
    }
    ctx->pc = 0x1102A8u;
    // 0x1102a8: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x1102A8u;
    SET_GPR_U32(ctx, 31, 0x1102B0u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x1102A8u, 0x1102B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102B0u;
label_1102b0:
    // 0x1102b0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1102b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1102b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1102b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102b8: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x1102b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x1102bc: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1102bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1102c0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1102C0u;
    SET_GPR_U32(ctx, 31, 0x1102C8u);
    ctx->pc = 0x1102C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102C0u;
    // 0x1102c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1102C0u, 0x1102C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102C8u;
label_1102c8:
    // 0x1102c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1102c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102cc: 0xc0436d2  jal         func_10DB48
    ctx->pc = 0x1102CCu;
    SET_GPR_U32(ctx, 31, 0x1102D4u);
    ctx->pc = 0x1102D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102CCu;
    // 0x1102d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB48u, 0x1102CCu, 0x1102D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102D4u;
label_1102d4:
    // 0x1102d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1102D4u;
    {
        const bool branch_taken_0x1102d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1102D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102D4u;
        // 0x1102d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102d4) {
            ctx->pc = 0x1102E8u;
            goto label_1102e8;
        }
    }
    ctx->pc = 0x1102DCu;
    // 0x1102dc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1102dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1102e0: 0xc064ec6  jal         func_193B18
    ctx->pc = 0x1102E0u;
    SET_GPR_U32(ctx, 31, 0x1102E8u);
    ctx->pc = 0x1102E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102E0u;
    // 0x1102e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B18u, 0x1102E0u, 0x1102E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102E8u;
label_1102e8:
    // 0x1102e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1102e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1102ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1102ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1102f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1102f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1102f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1102F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1102F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102F4u;
        // 0x1102f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1102F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1102FCu;
}
