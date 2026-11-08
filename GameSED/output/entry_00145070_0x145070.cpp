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

// Function: entry_00145070
// Address: 0x145070 - 0x145088
void entry_00145070_0x145070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145070_0x145070");
#endif

    ctx->pc = 0x145070u;

    // 0x145070: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x145070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x145074: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x145074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x145078: 0x5040ffe3  beql        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x145078u;
    {
        const bool branch_taken_0x145078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145078) {
            ctx->pc = 0x14507Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145078u;
            // 0x14507c: 0x8d450000  lw          $a1, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145008u;
            return;
        }
    }
    ctx->pc = 0x145080u;
    // 0x145080: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x145080u;
    {
        const bool branch_taken_0x145080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145080u;
        // 0x145084: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145080) {
            ctx->pc = 0x1450C0u;
            return;
        }
    }
    ctx->pc = 0x145088u;
}
