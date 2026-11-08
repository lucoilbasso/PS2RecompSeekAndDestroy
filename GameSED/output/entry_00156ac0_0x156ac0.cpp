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

// Function: entry_00156ac0
// Address: 0x156ac0 - 0x156ac8
void entry_00156ac0_0x156ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ac0_0x156ac0");
#endif

    ctx->pc = 0x156ac0u;

    // 0x156ac0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x156AC0u;
    {
        const bool branch_taken_0x156ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156AC0u;
        // 0x156ac4: 0xac830180  sw          $v1, 0x180($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ac0) {
            ctx->pc = 0x156AD4u;
            return;
        }
    }
    ctx->pc = 0x156AC8u;
}
