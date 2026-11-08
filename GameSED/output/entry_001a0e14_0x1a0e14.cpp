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

// Function: entry_001a0e14
// Address: 0x1a0e14 - 0x1a0e1c
void entry_001a0e14_0x1a0e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0e14_0x1a0e14");
#endif

    ctx->pc = 0x1a0e14u;

    // 0x1a0e14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0E14u;
    {
        const bool branch_taken_0x1a0e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E14u;
        // 0x1a0e18: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e14) {
            ctx->pc = 0x1A0E24u;
            return;
        }
    }
    ctx->pc = 0x1A0E1Cu;
}
