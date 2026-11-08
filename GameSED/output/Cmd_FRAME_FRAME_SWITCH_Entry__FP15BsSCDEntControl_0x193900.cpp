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

// Function: Cmd_FRAME_FRAME_SWITCH_Entry__FP15BsSCDEntControl
// Address: 0x193900 - 0x193950
void Cmd_FRAME_FRAME_SWITCH_Entry__FP15BsSCDEntControl_0x193900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_FRAME_FRAME_SWITCH_Entry__FP15BsSCDEntControl_0x193900");
#endif

    switch (ctx->pc) {
        case 0x193928u: goto label_193928;
        case 0x193934u: goto label_193934;
        default: break;
    }

    ctx->pc = 0x193900u;

    // 0x193900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193904: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x193904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19390c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19390cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193910: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193914: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19391c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x19391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x193920: 0xc04110c  jal         func_104430
    ctx->pc = 0x193920u;
    SET_GPR_U32(ctx, 31, 0x193928u);
    ctx->pc = 0x193924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193920u;
    // 0x193924: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x193920u, 0x193928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193928u;
label_193928:
    // 0x193928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19392c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x19392Cu;
    SET_GPR_U32(ctx, 31, 0x193934u);
    ctx->pc = 0x193930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19392Cu;
    // 0x193930: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x19392Cu, 0x193934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193934u;
label_193934:
    // 0x193934: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x193934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x193938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19393c: 0xae220234  sw          $v0, 0x234($s1)
    ctx->pc = 0x19393cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 2));
    // 0x193940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193948: 0x3e00008  jr          $ra
    ctx->pc = 0x193948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193948u;
        // 0x19394c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193950u;
}
