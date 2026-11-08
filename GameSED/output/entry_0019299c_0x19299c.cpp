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

// Function: entry_0019299c
// Address: 0x19299c - 0x1929b4
void entry_0019299c_0x19299c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019299c_0x19299c");
#endif

    ctx->pc = 0x19299cu;

    // 0x19299c: 0x0  nop
    ctx->pc = 0x19299cu;
    // NOP
    // 0x1929a0: 0x0  nop
    ctx->pc = 0x1929a0u;
    // NOP
    // 0x1929a4: 0x0  nop
    ctx->pc = 0x1929a4u;
    // NOP
    // 0x1929a8: 0x0  nop
    ctx->pc = 0x1929a8u;
    // NOP
    // 0x1929ac: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1929ACu;
    {
        const bool branch_taken_0x1929ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1929B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929ACu;
        // 0x1929b0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929ac) {
            ctx->pc = 0x192990u;
            return;
        }
    }
    ctx->pc = 0x1929B4u;
}
