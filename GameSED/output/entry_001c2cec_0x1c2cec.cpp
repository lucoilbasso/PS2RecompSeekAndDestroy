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

// Function: entry_001c2cec
// Address: 0x1c2cec - 0x1c2d14
void entry_001c2cec_0x1c2cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2cec_0x1c2cec");
#endif

    ctx->pc = 0x1c2cecu;

    // 0x1c2cec: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x1c2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x1c2cf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2cf4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1c2cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1c2cf8: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2CF8u;
    {
        const bool branch_taken_0x1c2cf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c2cf8) {
            ctx->pc = 0x1C2CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2CF8u;
            // 0x1c2cfc: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D14u;
            return;
        }
    }
    ctx->pc = 0x1C2D00u;
    // 0x1c2d00: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x1c2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x1c2d04: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1c2d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1c2d08: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2D08u;
    {
        const bool branch_taken_0x1c2d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1c2d08) {
            ctx->pc = 0x1C2D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2D08u;
            // 0x1c2d0c: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D20u;
            return;
        }
    }
    ctx->pc = 0x1C2D10u;
    // 0x1c2d10: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x1c2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    ctx->pc = 0x1c2d14u;
}
