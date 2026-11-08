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

// Function: entry_00162c68
// Address: 0x162c68 - 0x162c88
void entry_00162c68_0x162c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162c68_0x162c68");
#endif

    ctx->pc = 0x162c68u;

    // 0x162c68: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x162c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x162c6c: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x162c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x162c70: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162C70u;
    {
        const bool branch_taken_0x162c70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x162C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C70u;
        // 0x162c74: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c70) {
            ctx->pc = 0x162C88u;
            return;
        }
    }
    ctx->pc = 0x162C78u;
    // 0x162c78: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x162c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x162c7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x162C7Cu;
    {
        const bool branch_taken_0x162c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C7Cu;
        // 0x162c80: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c7c) {
            ctx->pc = 0x162C8Cu;
            return;
        }
    }
    ctx->pc = 0x162C84u;
    // 0x162c84: 0x0  nop
    ctx->pc = 0x162c84u;
    // NOP
    ctx->pc = 0x162c88u;
}
