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

// Function: entry_0012cd5c
// Address: 0x12cd5c - 0x12cd6c
void entry_0012cd5c_0x12cd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cd5c_0x12cd5c");
#endif

    ctx->pc = 0x12cd5cu;

    // 0x12cd5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd60: 0x248500e0  addiu       $a1, $a0, 0xE0
    ctx->pc = 0x12cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x12cd64: 0xc047b44  jal         func_11ED10
    ctx->pc = 0x12CD64u;
    SET_GPR_U32(ctx, 31, 0x12CD6Cu);
    ctx->pc = 0x12CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD64u;
    // 0x12cd68: 0x248600f0  addiu       $a2, $a0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED10u, 0x12CD64u, 0x12CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD6Cu;
}
