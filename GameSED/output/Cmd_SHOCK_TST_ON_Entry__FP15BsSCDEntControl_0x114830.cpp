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

// Function: Cmd_SHOCK_TST_ON_Entry__FP15BsSCDEntControl
// Address: 0x114830 - 0x11489c
void Cmd_SHOCK_TST_ON_Entry__FP15BsSCDEntControl_0x114830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SHOCK_TST_ON_Entry__FP15BsSCDEntControl_0x114830");
#endif

    switch (ctx->pc) {
        case 0x114848u: goto label_114848;
        case 0x11486cu: goto label_11486c;
        case 0x114888u: goto label_114888;
        default: break;
    }

    ctx->pc = 0x114830u;

    // 0x114830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x114834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114838: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11483c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x114840: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x114840u;
    SET_GPR_U32(ctx, 31, 0x114848u);
    ctx->pc = 0x114844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114840u;
    // 0x114844: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x114840u, 0x114848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114848u;
label_114848:
    // 0x114848: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x114848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11484c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11484cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114850: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x114850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x114854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114858: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x114858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11485c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11485Cu;
    {
        const bool branch_taken_0x11485c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x114860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11485Cu;
        // 0x114860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11485c) {
            ctx->pc = 0x114870u;
            goto label_114870;
        }
    }
    ctx->pc = 0x114864u;
    // 0x114864: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x114864u;
    SET_GPR_U32(ctx, 31, 0x11486Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x114864u, 0x11486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11486Cu;
label_11486c:
    // 0x11486c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11486cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114870:
    // 0x114870: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x114870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x114874: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x114874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114878: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x114878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11487c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x11487cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x114880: 0xc05dfc4  jal         func_177F10
    ctx->pc = 0x114880u;
    SET_GPR_U32(ctx, 31, 0x114888u);
    ctx->pc = 0x114884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114880u;
    // 0x114884: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F10u, 0x114880u, 0x114888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114888u;
label_114888:
    // 0x114888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11488c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11488cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x114890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114894: 0x3e00008  jr          $ra
    ctx->pc = 0x114894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114894u;
        // 0x114898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11489Cu;
}
