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

// Function: entry_00174628
// Address: 0x174628 - 0x174638
void entry_00174628_0x174628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174628_0x174628");
#endif

    ctx->pc = 0x174628u;

    // 0x174628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17462c: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x17462cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x174630: 0x805d118  j           func_174460
    ctx->pc = 0x174630u;
    ctx->pc = 0x174634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174630u;
    // 0x174634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x174638u;
}
