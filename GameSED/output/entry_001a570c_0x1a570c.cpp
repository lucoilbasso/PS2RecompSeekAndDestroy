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

// Function: entry_001a570c
// Address: 0x1a570c - 0x1a5720
void entry_001a570c_0x1a570c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a570c_0x1a570c");
#endif

    ctx->pc = 0x1a570cu;

    // 0x1a570c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A570Cu;
    {
        const bool branch_taken_0x1a570c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A570Cu;
        // 0x1a5710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a570c) {
            ctx->pc = 0x1A5720u;
            return;
        }
    }
    ctx->pc = 0x1A5714u;
    // 0x1a5714: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5714u;
    {
        const bool branch_taken_0x1a5714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5714u;
        // 0x1a5718: 0xa4a2001a  sh          $v0, 0x1A($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5714) {
            ctx->pc = 0x1A5724u;
            return;
        }
    }
    ctx->pc = 0x1A571Cu;
    // 0x1a571c: 0x0  nop
    ctx->pc = 0x1a571cu;
    // NOP
    ctx->pc = 0x1a5720u;
}
