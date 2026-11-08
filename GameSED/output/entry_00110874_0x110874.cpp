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

// Function: entry_00110874
// Address: 0x110874 - 0x110890
void entry_00110874_0x110874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110874_0x110874");
#endif

    switch (ctx->pc) {
        case 0x110880u: goto label_110880;
        case 0x110888u: goto label_110888;
        default: break;
    }

    ctx->pc = 0x110874u;

    // 0x110874: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x110874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x110878: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x110878u;
    SET_GPR_U32(ctx, 31, 0x110880u);
    ctx->pc = 0x11087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110878u;
    // 0x11087c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x110878u, 0x110880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110880u;
label_110880:
    // 0x110880: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x110880u;
    SET_GPR_U32(ctx, 31, 0x110888u);
    ctx->pc = 0x110884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110880u;
    // 0x110884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x110880u, 0x110888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110888u;
label_110888:
    // 0x110888: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x110888u;
    SET_GPR_U32(ctx, 31, 0x110890u);
    ctx->pc = 0x11088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110888u;
    // 0x11088c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x110888u, 0x110890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110890u;
}
