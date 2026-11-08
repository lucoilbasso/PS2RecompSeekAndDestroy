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

// Function: entry_001d5660
// Address: 0x1d5660 - 0x1d5674
void entry_001d5660_0x1d5660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5660_0x1d5660");
#endif

    ctx->pc = 0x1d5660u;

    // 0x1d5660: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d5660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d5664: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5664u;
    {
        const bool branch_taken_0x1d5664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5664u;
        // 0x1d5668: 0x3c02c000  lui         $v0, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5664) {
            ctx->pc = 0x1D5674u;
            return;
        }
    }
    ctx->pc = 0x1D566Cu;
    // 0x1d566c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d566cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d5670: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d5670u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x1d5674u;
}
