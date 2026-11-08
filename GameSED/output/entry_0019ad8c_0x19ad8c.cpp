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

// Function: entry_0019ad8c
// Address: 0x19ad8c - 0x19ada4
void entry_0019ad8c_0x19ad8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ad8c_0x19ad8c");
#endif

    ctx->pc = 0x19ad8cu;

    // 0x19ad8c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19ad90: 0x0  nop
    ctx->pc = 0x19ad90u;
    // NOP
    // 0x19ad94: 0x0  nop
    ctx->pc = 0x19ad94u;
    // NOP
    // 0x19ad98: 0x0  nop
    ctx->pc = 0x19ad98u;
    // NOP
    // 0x19ad9c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AD9Cu;
    {
        const bool branch_taken_0x19ad9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD9Cu;
        // 0x19ada0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad9c) {
            ctx->pc = 0x19AD78u;
            return;
        }
    }
    ctx->pc = 0x19ADA4u;
}
