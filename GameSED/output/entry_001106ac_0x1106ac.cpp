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

// Function: entry_001106ac
// Address: 0x1106ac - 0x1106b4
void entry_001106ac_0x1106ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001106ac_0x1106ac");
#endif

    ctx->pc = 0x1106acu;

    // 0x1106ac: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x1106ACu;
    SET_GPR_U32(ctx, 31, 0x1106B4u);
    ctx->pc = 0x1106B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1106ACu;
    // 0x1106b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x1106ACu, 0x1106B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1106B4u;
}
