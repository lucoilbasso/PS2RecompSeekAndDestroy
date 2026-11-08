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

// Function: entry_001917f8
// Address: 0x1917f8 - 0x191804
void entry_001917f8_0x1917f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001917f8_0x1917f8");
#endif

    ctx->pc = 0x1917f8u;

    // 0x1917f8: 0x54800002  bnel        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1917F8u;
    {
        const bool branch_taken_0x1917f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1917f8) {
            ctx->pc = 0x1917FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1917F8u;
            // 0x1917fc: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191804u;
            return;
        }
    }
    ctx->pc = 0x191800u;
    // 0x191800: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x191800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x191804u;
}
