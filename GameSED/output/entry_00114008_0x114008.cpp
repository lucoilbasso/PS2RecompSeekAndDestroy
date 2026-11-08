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

// Function: entry_00114008
// Address: 0x114008 - 0x114020
void entry_00114008_0x114008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114008_0x114008");
#endif

    ctx->pc = 0x114008u;

    // 0x114008: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x114008u;
    {
        const bool branch_taken_0x114008 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114008u;
        // 0x11400c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114008) {
            ctx->pc = 0x114030u;
            return;
        }
    }
    ctx->pc = 0x114010u;
    // 0x114010: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x114010u;
    {
        const bool branch_taken_0x114010 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x114014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114010u;
        // 0x114014: 0x61200  sll         $v0, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114010) {
            ctx->pc = 0x114038u;
            return;
        }
    }
    ctx->pc = 0x114018u;
    // 0x114018: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x114018u;
    {
        const bool branch_taken_0x114018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114018u;
        // 0x11401c: 0x24468000  addiu       $a2, $v0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114018) {
            ctx->pc = 0x114044u;
            return;
        }
    }
    ctx->pc = 0x114020u;
}
