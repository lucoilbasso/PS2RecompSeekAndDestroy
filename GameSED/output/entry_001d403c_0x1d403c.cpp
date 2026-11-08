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

// Function: entry_001d403c
// Address: 0x1d403c - 0x1d4050
void entry_001d403c_0x1d403c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d403c_0x1d403c");
#endif

    ctx->pc = 0x1d403cu;

    // 0x1d403c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1d403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1d4040: 0x52820009  beql        $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4040u;
    {
        const bool branch_taken_0x1d4040 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d4040) {
            ctx->pc = 0x1D4044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4040u;
            // 0x1d4044: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4068u;
            return;
        }
    }
    ctx->pc = 0x1D4048u;
    // 0x1d4048: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1D4048u;
    {
        const bool branch_taken_0x1d4048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4048u;
        // 0x1d404c: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4048) {
            ctx->pc = 0x1D4190u;
            return;
        }
    }
    ctx->pc = 0x1D4050u;
}
