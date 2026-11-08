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

// Function: entry_0015691c
// Address: 0x15691c - 0x156924
void entry_0015691c_0x15691c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015691c_0x15691c");
#endif

    ctx->pc = 0x15691cu;

    // 0x15691c: 0xc055904  jal         func_156410
    ctx->pc = 0x15691Cu;
    SET_GPR_U32(ctx, 31, 0x156924u);
    ctx->pc = 0x156920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15691Cu;
    // 0x156920: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156410u, 0x15691Cu, 0x156924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156924u;
}
