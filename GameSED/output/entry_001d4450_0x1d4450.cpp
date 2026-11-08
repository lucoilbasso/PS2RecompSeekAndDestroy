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

// Function: entry_001d4450
// Address: 0x1d4450 - 0x1d4460
void entry_001d4450_0x1d4450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4450_0x1d4450");
#endif

    ctx->pc = 0x1d4450u;

    // 0x1d4450: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d4450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d4454: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d4454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d4458: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4458u;
    {
        const bool branch_taken_0x1d4458 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4458u;
        // 0x1d445c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4458) {
            ctx->pc = 0x1D4484u;
            return;
        }
    }
    ctx->pc = 0x1D4460u;
}
