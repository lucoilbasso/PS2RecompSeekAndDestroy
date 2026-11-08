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

// Function: entry_0019ca68
// Address: 0x19ca68 - 0x19ca7c
void entry_0019ca68_0x19ca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ca68_0x19ca68");
#endif

    ctx->pc = 0x19ca68u;

    // 0x19ca68: 0x0  nop
    ctx->pc = 0x19ca68u;
    // NOP
    // 0x19ca6c: 0x0  nop
    ctx->pc = 0x19ca6cu;
    // NOP
    // 0x19ca70: 0x0  nop
    ctx->pc = 0x19ca70u;
    // NOP
    // 0x19ca74: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CA74u;
    {
        const bool branch_taken_0x19ca74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA74u;
        // 0x19ca78: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca74) {
            ctx->pc = 0x19CA60u;
            return;
        }
    }
    ctx->pc = 0x19CA7Cu;
}
