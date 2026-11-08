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

// Function: entry_001c41c0
// Address: 0x1c41c0 - 0x1c41cc
void entry_001c41c0_0x1c41c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c41c0_0x1c41c0");
#endif

    ctx->pc = 0x1c41c0u;

    // 0x1c41c0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1c41c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41c4: 0x8071012  j           func_1C4048
    ctx->pc = 0x1C41C4u;
    ctx->pc = 0x1C41C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C41C4u;
    // 0x1c41c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4048u;
    _sysbitFlush_0x1c4048(rdram, ctx, runtime); return;
    ctx->pc = 0x1C41CCu;
}
