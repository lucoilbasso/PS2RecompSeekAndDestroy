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

// Function: entry_00173a28
// Address: 0x173a28 - 0x173a30
void entry_00173a28_0x173a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173a28_0x173a28");
#endif

    ctx->pc = 0x173a28u;

    // 0x173a28: 0x805c7ea  j           func_171FA8
    ctx->pc = 0x173A28u;
    ctx->pc = 0x173A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A28u;
    // 0x173a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171FA8u;
    cscVu1SetTag_frfl_0x171fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x173A30u;
}
