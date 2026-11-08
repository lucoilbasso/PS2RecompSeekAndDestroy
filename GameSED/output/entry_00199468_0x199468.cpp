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

// Function: entry_00199468
// Address: 0x199468 - 0x199470
void entry_00199468_0x199468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199468_0x199468");
#endif

    ctx->pc = 0x199468u;

    // 0x199468: 0xc0685ca  jal         func_1A1728
    ctx->pc = 0x199468u;
    SET_GPR_U32(ctx, 31, 0x199470u);
    ctx->pc = 0x19946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199468u;
    // 0x19946c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1728u, 0x199468u, 0x199470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199470u;
}
