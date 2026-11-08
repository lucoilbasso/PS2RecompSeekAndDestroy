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

// Function: entry_00178f64
// Address: 0x178f64 - 0x178f78
void entry_00178f64_0x178f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178f64_0x178f64");
#endif

    ctx->pc = 0x178f64u;

    // 0x178f64: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x178F64u;
    {
        const bool branch_taken_0x178f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F64u;
        // 0x178f68: 0x3c140026  lui         $s4, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f64) {
            ctx->pc = 0x179030u;
            return;
        }
    }
    ctx->pc = 0x178F6Cu;
    // 0x178f6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x178F6Cu;
    {
        const bool branch_taken_0x178f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F6Cu;
        // 0x178f70: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f6c) {
            ctx->pc = 0x178FB0u;
            return;
        }
    }
    ctx->pc = 0x178F74u;
    // 0x178f74: 0x0  nop
    ctx->pc = 0x178f74u;
    // NOP
    ctx->pc = 0x178f78u;
}
