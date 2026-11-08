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

// Function: entry_001c2d84
// Address: 0x1c2d84 - 0x1c2db0
void entry_001c2d84_0x1c2d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2d84_0x1c2d84");
#endif

    ctx->pc = 0x1c2d84u;

    // 0x1c2d84: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x1c2d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x1c2d88: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x1c2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x1c2d8c: 0xace201c0  sw          $v0, 0x1C0($a3)
    ctx->pc = 0x1c2d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 2));
    // 0x1c2d90: 0xace401d0  sw          $a0, 0x1D0($a3)
    ctx->pc = 0x1c2d90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 4));
    // 0x1c2d94: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2D94u;
    {
        const bool branch_taken_0x1c2d94 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x1C2D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D94u;
        // 0x1c2d98: 0xace301e0  sw          $v1, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d94) {
            ctx->pc = 0x1C2DB0u;
            return;
        }
    }
    ctx->pc = 0x1C2D9Cu;
    // 0x1c2d9c: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C2D9Cu;
    {
        const bool branch_taken_0x1c2d9c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x1c2d9c) {
            ctx->pc = 0x1C2DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2D9Cu;
            // 0x1c2da0: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2DFCu;
            return;
        }
    }
    ctx->pc = 0x1C2DA4u;
    // 0x1c2da4: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x1c2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x1c2da8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C2DA8u;
    {
        const bool branch_taken_0x1c2da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DA8u;
        // 0x1c2dac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2da8) {
            ctx->pc = 0x1C2DECu;
            return;
        }
    }
    ctx->pc = 0x1C2DB0u;
}
