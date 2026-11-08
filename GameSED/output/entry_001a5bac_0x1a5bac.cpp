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

// Function: entry_001a5bac
// Address: 0x1a5bac - 0x1a5bb8
void entry_001a5bac_0x1a5bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5bac_0x1a5bac");
#endif

    ctx->pc = 0x1a5bacu;

    // 0x1a5bac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a5bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a5bb0: 0x5600ffd5  bnel        $s0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A5BB0u;
    {
        const bool branch_taken_0x1a5bb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5bb0) {
            ctx->pc = 0x1A5BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5BB0u;
            // 0x1a5bb4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5B08u;
            return;
        }
    }
    ctx->pc = 0x1A5BB8u;
}
