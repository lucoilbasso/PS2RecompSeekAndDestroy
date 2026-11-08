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

// Function: entry_0012e2c0
// Address: 0x12e2c0 - 0x12e2c8
void entry_0012e2c0_0x12e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e2c0_0x12e2c0");
#endif

    ctx->pc = 0x12e2c0u;

    // 0x12e2c0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x12E2C0u;
    {
        const bool branch_taken_0x12e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2C0u;
        // 0x12e2c4: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2c0) {
            ctx->pc = 0x12E328u;
            return;
        }
    }
    ctx->pc = 0x12E2C8u;
}
