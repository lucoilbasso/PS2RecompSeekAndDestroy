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

// Function: entry_0013e514
// Address: 0x13e514 - 0x13e530
void entry_0013e514_0x13e514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e514_0x13e514");
#endif

    ctx->pc = 0x13e514u;

    // 0x13e514: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e518: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x13e518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x13e51c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x13e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x13e520: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x13e520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13e524: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E524u;
    {
        const bool branch_taken_0x13e524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E524u;
        // 0x13e528: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e524) {
            ctx->pc = 0x13E534u;
            return;
        }
    }
    ctx->pc = 0x13E52Cu;
    // 0x13e52c: 0x0  nop
    ctx->pc = 0x13e52cu;
    // NOP
    ctx->pc = 0x13e530u;
}
