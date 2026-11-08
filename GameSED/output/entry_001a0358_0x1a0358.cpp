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

// Function: entry_001a0358
// Address: 0x1a0358 - 0x1a0364
void entry_001a0358_0x1a0358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0358_0x1a0358");
#endif

    ctx->pc = 0x1a0358u;

    // 0x1a0358: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a0358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a035c: 0x8067d0e  j           func_19F438
    ctx->pc = 0x1A035Cu;
    ctx->pc = 0x1A0360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A035Cu;
    // 0x1a0360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F438u;
    BMemPMgrAllocMgr__FUiP8BMemPoolUib_0x19f438(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0364u;
}
