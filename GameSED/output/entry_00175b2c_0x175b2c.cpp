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

// Function: entry_00175b2c
// Address: 0x175b2c - 0x175b34
void entry_00175b2c_0x175b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175b2c_0x175b2c");
#endif

    ctx->pc = 0x175b2cu;

    // 0x175b2c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x175B2Cu;
    SET_GPR_U32(ctx, 31, 0x175B34u);
    ctx->pc = 0x175B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B2Cu;
    // 0x175b30: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x175B2Cu, 0x175B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B34u;
}
