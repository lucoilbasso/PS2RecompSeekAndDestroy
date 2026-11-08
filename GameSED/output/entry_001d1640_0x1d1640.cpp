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

// Function: entry_001d1640
// Address: 0x1d1640 - 0x1d1658
void entry_001d1640_0x1d1640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1640_0x1d1640");
#endif

    ctx->pc = 0x1d1640u;

    // 0x1d1640: 0x60100f7  bgez        $s0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x1D1640u;
    {
        const bool branch_taken_0x1d1640 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1640u;
        // 0x1d1644: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1640) {
            ctx->pc = 0x1D1A20u;
            return;
        }
    }
    ctx->pc = 0x1D1648u;
    // 0x1d1648: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1d1648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d164c: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x1d164cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x1d1650: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x1D1650u;
    {
        const bool branch_taken_0x1d1650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1650u;
        // 0x1d1654: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1650) {
            ctx->pc = 0x1D1A20u;
            return;
        }
    }
    ctx->pc = 0x1D1658u;
}
