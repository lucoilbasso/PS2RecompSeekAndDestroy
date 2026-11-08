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

// Function: entry_001bf3cc
// Address: 0x1bf3cc - 0x1bf3e4
void entry_001bf3cc_0x1bf3cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf3cc_0x1bf3cc");
#endif

    ctx->pc = 0x1bf3ccu;

    // 0x1bf3cc: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BF3CCu;
    {
        const bool branch_taken_0x1bf3cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3CCu;
        // 0x1bf3d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3cc) {
            ctx->pc = 0x1BF424u;
            return;
        }
    }
    ctx->pc = 0x1BF3D4u;
    // 0x1bf3d4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1bf3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1bf3d8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF3D8u;
    {
        const bool branch_taken_0x1bf3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf3d8) {
            ctx->pc = 0x1BF3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF3D8u;
            // 0x1bf3dc: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF3E4u;
            return;
        }
    }
    ctx->pc = 0x1BF3E0u;
    // 0x1bf3e0: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x1bf3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    ctx->pc = 0x1bf3e4u;
}
