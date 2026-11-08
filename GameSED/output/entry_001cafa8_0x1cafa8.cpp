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

// Function: entry_001cafa8
// Address: 0x1cafa8 - 0x1cafb4
void entry_001cafa8_0x1cafa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cafa8_0x1cafa8");
#endif

    ctx->pc = 0x1cafa8u;

    // 0x1cafa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cafac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1CAFACu;
    {
        const bool branch_taken_0x1cafac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFACu;
        // 0x1cafb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafac) {
            ctx->pc = 0x1CAF58u;
            return;
        }
    }
    ctx->pc = 0x1CAFB4u;
}
