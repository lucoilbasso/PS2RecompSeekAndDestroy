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

// Function: entry_001bf424
// Address: 0x1bf424 - 0x1bf43c
void entry_001bf424_0x1bf424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf424_0x1bf424");
#endif

    ctx->pc = 0x1bf424u;

    // 0x1bf424: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BF424u;
    {
        const bool branch_taken_0x1bf424 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF424u;
        // 0x1bf428: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf424) {
            ctx->pc = 0x1BF4C4u;
            return;
        }
    }
    ctx->pc = 0x1BF42Cu;
    // 0x1bf42c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1bf42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1bf430: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF430u;
    {
        const bool branch_taken_0x1bf430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf430) {
            ctx->pc = 0x1BF434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF430u;
            // 0x1bf434: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF43Cu;
            return;
        }
    }
    ctx->pc = 0x1BF438u;
    // 0x1bf438: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x1bf438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    ctx->pc = 0x1bf43cu;
}
