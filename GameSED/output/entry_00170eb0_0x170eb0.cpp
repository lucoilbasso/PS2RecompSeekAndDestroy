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

// Function: entry_00170eb0
// Address: 0x170eb0 - 0x170eb8
void entry_00170eb0_0x170eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170eb0_0x170eb0");
#endif

    ctx->pc = 0x170eb0u;

    // 0x170eb0: 0xc05c57c  jal         func_1715F0
    ctx->pc = 0x170EB0u;
    SET_GPR_U32(ctx, 31, 0x170EB8u);
    ctx->pc = 0x170EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170EB0u;
    // 0x170eb4: 0x24043fff  addiu       $a0, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1715F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1715F0u, 0x170EB0u, 0x170EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EB8u;
}
