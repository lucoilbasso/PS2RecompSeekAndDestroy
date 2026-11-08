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

// Function: entry_00106f70
// Address: 0x106f70 - 0x106f88
void entry_00106f70_0x106f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106f70_0x106f70");
#endif

    ctx->pc = 0x106f70u;

    // 0x106f70: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x106f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x106f74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106F74u;
    {
        const bool branch_taken_0x106f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F74u;
        // 0x106f78: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f74) {
            ctx->pc = 0x106F88u;
            return;
        }
    }
    ctx->pc = 0x106F7Cu;
    // 0x106f7c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x106f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x106f80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x106F80u;
    {
        const bool branch_taken_0x106f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F80u;
        // 0x106f84: 0x8c51b830  lw          $s1, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f80) {
            ctx->pc = 0x106FA0u;
            return;
        }
    }
    ctx->pc = 0x106F88u;
}
