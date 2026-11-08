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

// Function: entry_001ba43c
// Address: 0x1ba43c - 0x1ba454
void entry_001ba43c_0x1ba43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba43c_0x1ba43c");
#endif

    ctx->pc = 0x1ba43cu;

    // 0x1ba43c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1ba43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ba440: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA440u;
    {
        const bool branch_taken_0x1ba440 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA440u;
        // 0x1ba444: 0x8e82c090  lw          $v0, -0x3F70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba440) {
            ctx->pc = 0x1BA454u;
            return;
        }
    }
    ctx->pc = 0x1BA448u;
    // 0x1ba448: 0x26a2d700  addiu       $v0, $s5, -0x2900
    ctx->pc = 0x1ba448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956800));
    // 0x1ba44c: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x1ba44cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba450: 0x8e82c090  lw          $v0, -0x3F70($s4)
    ctx->pc = 0x1ba450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951056)));
    ctx->pc = 0x1ba454u;
}
