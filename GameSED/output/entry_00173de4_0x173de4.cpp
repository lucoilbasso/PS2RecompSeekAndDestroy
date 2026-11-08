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

// Function: entry_00173de4
// Address: 0x173de4 - 0x173df0
void entry_00173de4_0x173de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173de4_0x173de4");
#endif

    ctx->pc = 0x173de4u;

    // 0x173de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173de8: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x173DE8u;
    ctx->pc = 0x173DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173DE8u;
    // 0x173dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x173DF0u;
}
