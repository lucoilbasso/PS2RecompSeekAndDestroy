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

// Function: entry_00173a30
// Address: 0x173a30 - 0x173a48
void entry_00173a30_0x173a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173a30_0x173a30");
#endif

    ctx->pc = 0x173a30u;

    // 0x173a30: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x173a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a34: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x173a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a38: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x173a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a3c: 0x805c9ce  j           func_172738
    ctx->pc = 0x173A3Cu;
    ctx->pc = 0x173A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A3Cu;
    // 0x173a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172738u;
    cscVu1SetTag_prog_0x172738(rdram, ctx, runtime); return;
    ctx->pc = 0x173A44u;
    // 0x173a44: 0x0  nop
    ctx->pc = 0x173a44u;
    // NOP
    ctx->pc = 0x173a48u;
}
