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

// Function: entry_0012f224
// Address: 0x12f224 - 0x12f248
void entry_0012f224_0x12f224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f224_0x12f224");
#endif

    ctx->pc = 0x12f224u;

    // 0x12f224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f228: 0x106201cf  beq         $v1, $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x12F228u;
    {
        const bool branch_taken_0x12f228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F228u;
        // 0x12f22c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f228) {
            ctx->pc = 0x12F968u;
            return;
        }
    }
    ctx->pc = 0x12F230u;
    // 0x12f230: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F230u;
    {
        const bool branch_taken_0x12f230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f230) {
            ctx->pc = 0x12F234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F230u;
            // 0x12f234: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F248u;
            return;
        }
    }
    ctx->pc = 0x12F238u;
    // 0x12f238: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12F238u;
    {
        const bool branch_taken_0x12f238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F238u;
        // 0x12f23c: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f238) {
            ctx->pc = 0x12F258u;
            return;
        }
    }
    ctx->pc = 0x12F240u;
    // 0x12f240: 0x100002ab  b           . + 4 + (0x2AB << 2)
    ctx->pc = 0x12F240u;
    {
        const bool branch_taken_0x12f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f240) {
            ctx->pc = 0x12FCF0u;
            return;
        }
    }
    ctx->pc = 0x12F248u;
}
