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

// Function: entry_001a4088
// Address: 0x1a4088 - 0x1a4090
void entry_001a4088_0x1a4088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4088_0x1a4088");
#endif

    ctx->pc = 0x1a4088u;

    // 0x1a4088: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1A4088u;
    SET_GPR_U32(ctx, 31, 0x1A4090u);
    ctx->pc = 0x1A408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4088u;
    // 0x1a408c: 0xaf809188  sw          $zero, -0x6E78($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939016), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1A4088u, 0x1A4090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4090u;
}
