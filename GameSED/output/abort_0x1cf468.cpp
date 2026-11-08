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

// Function: abort
// Address: 0x1cf468 - 0x1cf480
void abort_0x1cf468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("abort_0x1cf468");
#endif

    switch (ctx->pc) {
        case 0x1cf478u: goto label_1cf478;
        default: break;
    }

    ctx->pc = 0x1cf468u;

    // 0x1cf468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf46c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf470: 0xc07417c  jal         func_1D05F0
    ctx->pc = 0x1CF470u;
    SET_GPR_U32(ctx, 31, 0x1CF478u);
    ctx->pc = 0x1CF474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF470u;
    // 0x1cf474: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D05F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05F0u, 0x1CF470u, 0x1CF478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF478u;
label_1cf478:
    // 0x1cf478: 0xc040072  jal         func_1001C8
    ctx->pc = 0x1CF478u;
    SET_GPR_U32(ctx, 31, 0x1CF480u);
    ctx->pc = 0x1CF47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF478u;
    // 0x1cf47c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001C8u, 0x1CF478u, 0x1CF480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF480u;
}
