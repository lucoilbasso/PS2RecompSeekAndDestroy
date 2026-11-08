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

// Function: entry_00154148
// Address: 0x154148 - 0x154168
void entry_00154148_0x154148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154148_0x154148");
#endif

    ctx->pc = 0x154148u;

    // 0x154148: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x154148u;
    {
        const bool branch_taken_0x154148 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154148u;
        // 0x15414c: 0x8e220690  lw          $v0, 0x690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154148) {
            ctx->pc = 0x154168u;
            return;
        }
    }
    ctx->pc = 0x154150u;
    // 0x154150: 0x8c431a2c  lw          $v1, 0x1A2C($v0)
    ctx->pc = 0x154150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6700)));
    // 0x154154: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x154154u;
    {
        const bool branch_taken_0x154154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x154154) {
            ctx->pc = 0x154174u;
            return;
        }
    }
    ctx->pc = 0x15415Cu;
    // 0x15415c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15415Cu;
    {
        const bool branch_taken_0x15415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15415c) {
            ctx->pc = 0x1541B8u;
            return;
        }
    }
    ctx->pc = 0x154164u;
    // 0x154164: 0x0  nop
    ctx->pc = 0x154164u;
    // NOP
    ctx->pc = 0x154168u;
}
