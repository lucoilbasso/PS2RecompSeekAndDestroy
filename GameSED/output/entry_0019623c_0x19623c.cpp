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

// Function: entry_0019623c
// Address: 0x19623c - 0x196248
void entry_0019623c_0x19623c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019623c_0x19623c");
#endif

    ctx->pc = 0x19623cu;

    // 0x19623c: 0x806182a  j           func_1860A8
    ctx->pc = 0x19623Cu;
    ctx->pc = 0x196240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19623Cu;
    // 0x196240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1860A8u;
    SetWorldBase__8WcEntityP8WcEntityT1_0x1860a8(rdram, ctx, runtime); return;
    ctx->pc = 0x196244u;
    // 0x196244: 0x0  nop
    ctx->pc = 0x196244u;
    // NOP
    ctx->pc = 0x196248u;
}
