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

// Function: entry_0014f2b8
// Address: 0x14f2b8 - 0x14f2c0
void entry_0014f2b8_0x14f2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f2b8_0x14f2b8");
#endif

    ctx->pc = 0x14f2b8u;

    // 0x14f2b8: 0xc058602  jal         func_161808
    ctx->pc = 0x14F2B8u;
    SET_GPR_U32(ctx, 31, 0x14F2C0u);
    ctx->pc = 0x14F2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2B8u;
    // 0x14f2bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161808u, 0x14F2B8u, 0x14F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2C0u;
}
