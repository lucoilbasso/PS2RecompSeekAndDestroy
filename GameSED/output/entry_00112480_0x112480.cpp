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

// Function: entry_00112480
// Address: 0x112480 - 0x112494
void entry_00112480_0x112480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112480_0x112480");
#endif

    switch (ctx->pc) {
        case 0x112488u: goto label_112488;
        case 0x112490u: goto label_112490;
        default: break;
    }

    ctx->pc = 0x112480u;

    // 0x112480: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x112480u;
    SET_GPR_U32(ctx, 31, 0x112488u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x112480u, 0x112488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112488u;
label_112488:
    // 0x112488: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x112488u;
    SET_GPR_U32(ctx, 31, 0x112490u);
    ctx->pc = 0x11248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112488u;
    // 0x11248c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x112488u, 0x112490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112490u;
label_112490:
    // 0x112490: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112494u;
}
