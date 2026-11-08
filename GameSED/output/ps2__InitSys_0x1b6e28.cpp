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

// Function: _InitSys
// Address: 0x1b6e28 - 0x1b6e64
void ps2__InitSys_0x1b6e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitSys_0x1b6e28");
#endif

    switch (ctx->pc) {
        case 0x1b6e38u: goto label_1b6e38;
        case 0x1b6e40u: goto label_1b6e40;
        case 0x1b6e48u: goto label_1b6e48;
        case 0x1b6e50u: goto label_1b6e50;
        case 0x1b6e58u: goto label_1b6e58;
        default: break;
    }

    ctx->pc = 0x1b6e28u;

    // 0x1b6e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6e2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6e30: 0xc06db00  jal         func_1B6C00
    ctx->pc = 0x1B6E30u;
    SET_GPR_U32(ctx, 31, 0x1B6E38u);
    ctx->pc = 0x1B6C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C00u, 0x1B6E30u, 0x1B6E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E38u;
label_1b6e38:
    // 0x1b6e38: 0xc06db46  jal         func_1B6D18
    ctx->pc = 0x1B6E38u;
    SET_GPR_U32(ctx, 31, 0x1B6E40u);
    ctx->pc = 0x1B6D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D18u, 0x1B6E38u, 0x1B6E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E40u;
label_1b6e40:
    // 0x1b6e40: 0xc06dcbc  jal         func_1B72F0
    ctx->pc = 0x1B6E40u;
    SET_GPR_U32(ctx, 31, 0x1B6E48u);
    ctx->pc = 0x1B72F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72F0u, 0x1B6E40u, 0x1B6E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E48u;
label_1b6e48:
    // 0x1b6e48: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B6E48u;
    SET_GPR_U32(ctx, 31, 0x1B6E50u);
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B6E48u, 0x1B6E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E50u;
label_1b6e50:
    // 0x1b6e50: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1B6E50u;
    SET_GPR_U32(ctx, 31, 0x1B6E58u);
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1B6E50u, 0x1B6E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E58u;
label_1b6e58:
    // 0x1b6e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6e5c: 0x806e068  j           func_1B81A0
    ctx->pc = 0x1B6E5Cu;
    ctx->pc = 0x1B6E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E5Cu;
    // 0x1b6e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B81A0u;
    InitTLBFunctions_0x1b81a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B6E64u;
}
