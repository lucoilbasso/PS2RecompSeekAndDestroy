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

// Function: entry_00177a40
// Address: 0x177a40 - 0x177a50
void entry_00177a40_0x177a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177a40_0x177a40");
#endif

    switch (ctx->pc) {
        case 0x177a48u: goto label_177a48;
        default: break;
    }

    ctx->pc = 0x177a40u;

    // 0x177a40: 0xc05de98  jal         func_177A60
    ctx->pc = 0x177A40u;
    SET_GPR_U32(ctx, 31, 0x177A48u);
    ctx->pc = 0x177A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A40u;
    // 0x177a44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A60u, 0x177A40u, 0x177A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A48u;
label_177a48:
    // 0x177a48: 0xc05de98  jal         func_177A60
    ctx->pc = 0x177A48u;
    SET_GPR_U32(ctx, 31, 0x177A50u);
    ctx->pc = 0x177A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A48u;
    // 0x177a4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A60u, 0x177A48u, 0x177A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A50u;
}
