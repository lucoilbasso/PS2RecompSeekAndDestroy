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

// Function: entry_001a14d0
// Address: 0x1a14d0 - 0x1a14e8
void entry_001a14d0_0x1a14d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a14d0_0x1a14d0");
#endif

    ctx->pc = 0x1a14d0u;

    // 0x1a14d0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a14d4: 0x2444f6a8  addiu       $a0, $v0, -0x958
    ctx->pc = 0x1a14d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964904));
    // 0x1a14d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x23F6A8u));
    // 0x1a14dc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A14DCu;
    {
        const bool branch_taken_0x1a14dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14DCu;
        // 0x1a14e0: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14dc) {
            ctx->pc = 0x1A1504u;
            return;
        }
    }
    ctx->pc = 0x1A14E4u;
    // 0x1a14e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x1a14e8u;
}
