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

// Function: entry_001d3350
// Address: 0x1d3350 - 0x1d3370
void entry_001d3350_0x1d3350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3350_0x1d3350");
#endif

    ctx->pc = 0x1d3350u;

    // 0x1d3350: 0x7c00007  bltz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3350u;
    {
        const bool branch_taken_0x1d3350 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x1D3354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3350u;
        // 0x1d3354: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3350) {
            ctx->pc = 0x1D3370u;
            return;
        }
    }
    ctx->pc = 0x1D3358u;
    // 0x1d3358: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1d3358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1d335c: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x1d335cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1d3360: 0xafbe003c  sw          $fp, 0x3C($sp)
    ctx->pc = 0x1d3360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 30));
    // 0x1d3364: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3364u;
    {
        const bool branch_taken_0x1d3364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3364u;
        // 0x1d3368: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3364) {
            ctx->pc = 0x1D3388u;
            return;
        }
    }
    ctx->pc = 0x1D336Cu;
    // 0x1d336c: 0x0  nop
    ctx->pc = 0x1d336cu;
    // NOP
    ctx->pc = 0x1d3370u;
}
