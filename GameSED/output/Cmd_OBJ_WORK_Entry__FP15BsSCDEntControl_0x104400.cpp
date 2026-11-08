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

// Function: Cmd_OBJ_WORK_Entry__FP15BsSCDEntControl
// Address: 0x104400 - 0x104430
void Cmd_OBJ_WORK_Entry__FP15BsSCDEntControl_0x104400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_WORK_Entry__FP15BsSCDEntControl_0x104400");
#endif

    switch (ctx->pc) {
        case 0x10441cu: goto label_10441c;
        case 0x104424u: goto label_104424;
        default: break;
    }

    ctx->pc = 0x104400u;

    // 0x104400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104404: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x104404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10440c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10440cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104410: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x104410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x104414: 0xc04110c  jal         func_104430
    ctx->pc = 0x104414u;
    SET_GPR_U32(ctx, 31, 0x10441Cu);
    ctx->pc = 0x104418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104414u;
    // 0x104418: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x104414u, 0x10441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10441Cu;
label_10441c:
    // 0x10441c: 0xc04171a  jal         func_105C68
    ctx->pc = 0x10441Cu;
    SET_GPR_U32(ctx, 31, 0x104424u);
    ctx->pc = 0x104420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10441Cu;
    // 0x104420: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x10441Cu, 0x104424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104424u;
label_104424:
    // 0x104424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104428: 0x3e00008  jr          $ra
    ctx->pc = 0x104428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104428u;
        // 0x10442c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104430u;
}
