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

// Function: entry_001a02c0
// Address: 0x1a02c0 - 0x1a02d4
void entry_001a02c0_0x1a02c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a02c0_0x1a02c0");
#endif

    ctx->pc = 0x1a02c0u;

    // 0x1a02c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a02c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a02c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a02c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a02c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a02cc: 0x8067d0e  j           func_19F438
    ctx->pc = 0x1A02CCu;
    ctx->pc = 0x1A02D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A02CCu;
    // 0x1a02d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F438u;
    BMemPMgrAllocMgr__FUiP8BMemPoolUib_0x19f438(rdram, ctx, runtime); return;
    ctx->pc = 0x1A02D4u;
}
