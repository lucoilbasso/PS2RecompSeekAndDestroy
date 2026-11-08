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

// Function: entry_0014fb7c
// Address: 0x14fb7c - 0x14fb98
void entry_0014fb7c_0x14fb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fb7c_0x14fb7c");
#endif

    ctx->pc = 0x14fb7cu;

    // 0x14fb7c: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x14fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14fb80: 0x8c620c10  lw          $v0, 0xC10($v1)
    ctx->pc = 0x14fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3088)));
    // 0x14fb84: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FB84u;
    {
        const bool branch_taken_0x14fb84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB84u;
        // 0x14fb88: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb84) {
            ctx->pc = 0x14FB98u;
            return;
        }
    }
    ctx->pc = 0x14FB8Cu;
    // 0x14fb8c: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x14fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x14fb90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14FB90u;
    {
        const bool branch_taken_0x14fb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB90u;
        // 0x14fb94: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb90) {
            ctx->pc = 0x14FB9Cu;
            return;
        }
    }
    ctx->pc = 0x14FB98u;
}
