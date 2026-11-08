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

// Function: entry_0017508c
// Address: 0x17508c - 0x175094
void entry_0017508c_0x17508c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017508c_0x17508c");
#endif

    ctx->pc = 0x17508cu;

    // 0x17508c: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x17508Cu;
    ctx->pc = 0x175090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17508Cu;
    // 0x175090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x175094u;
}
