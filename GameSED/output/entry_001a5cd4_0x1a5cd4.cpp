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

// Function: entry_001a5cd4
// Address: 0x1a5cd4 - 0x1a5ce0
void entry_001a5cd4_0x1a5cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5cd4_0x1a5cd4");
#endif

    ctx->pc = 0x1a5cd4u;

    // 0x1a5cd4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a5cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a5cd8: 0x5600ffd5  bnel        $s0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A5CD8u;
    {
        const bool branch_taken_0x1a5cd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5cd8) {
            ctx->pc = 0x1A5CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5CD8u;
            // 0x1a5cdc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5C30u;
            return;
        }
    }
    ctx->pc = 0x1A5CE0u;
}
