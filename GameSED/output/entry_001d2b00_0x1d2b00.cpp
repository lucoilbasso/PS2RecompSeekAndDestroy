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

// Function: entry_001d2b00
// Address: 0x1d2b00 - 0x1d2b18
void entry_001d2b00_0x1d2b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2b00_0x1d2b00");
#endif

    ctx->pc = 0x1d2b00u;

    // 0x1d2b00: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2B00u;
    {
        const bool branch_taken_0x1d2b00 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1D2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B00u;
        // 0x1d2b04: 0x27bdfec0  addiu       $sp, $sp, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b00) {
            ctx->pc = 0x1D2B18u;
            return;
        }
    }
    ctx->pc = 0x1D2B08u;
    // 0x1d2b08: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1d2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d2b0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2B0Cu;
    {
        const bool branch_taken_0x1d2b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B0Cu;
        // 0x1d2b10: 0x52823  negu        $a1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b0c) {
            ctx->pc = 0x1D2B1Cu;
            return;
        }
    }
    ctx->pc = 0x1D2B14u;
    // 0x1d2b14: 0x0  nop
    ctx->pc = 0x1d2b14u;
    // NOP
    ctx->pc = 0x1d2b18u;
}
