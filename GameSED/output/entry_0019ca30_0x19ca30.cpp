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

// Function: entry_0019ca30
// Address: 0x19ca30 - 0x19ca44
void entry_0019ca30_0x19ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ca30_0x19ca30");
#endif

    ctx->pc = 0x19ca30u;

    // 0x19ca30: 0x0  nop
    ctx->pc = 0x19ca30u;
    // NOP
    // 0x19ca34: 0x0  nop
    ctx->pc = 0x19ca34u;
    // NOP
    // 0x19ca38: 0x0  nop
    ctx->pc = 0x19ca38u;
    // NOP
    // 0x19ca3c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CA3Cu;
    {
        const bool branch_taken_0x19ca3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA3Cu;
        // 0x19ca40: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca3c) {
            ctx->pc = 0x19CA28u;
            return;
        }
    }
    ctx->pc = 0x19CA44u;
}
