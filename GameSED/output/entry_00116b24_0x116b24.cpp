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

// Function: entry_00116b24
// Address: 0x116b24 - 0x116b40
void entry_00116b24_0x116b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116b24_0x116b24");
#endif

    ctx->pc = 0x116b24u;

    // 0x116b24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116b28: 0x2882006e  slti        $v0, $a0, 0x6E
    ctx->pc = 0x116b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x116b2c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x116B2Cu;
    {
        const bool branch_taken_0x116b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116b2c) {
            ctx->pc = 0x116B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116B2Cu;
            // 0x116b30: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116B08u;
            return;
        }
    }
    ctx->pc = 0x116B34u;
    // 0x116b34: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x116B34u;
    {
        const bool branch_taken_0x116b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B34u;
        // 0x116b38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b34) {
            ctx->pc = 0x116BC4u;
            return;
        }
    }
    ctx->pc = 0x116B3Cu;
    // 0x116b3c: 0x0  nop
    ctx->pc = 0x116b3cu;
    // NOP
    ctx->pc = 0x116b40u;
}
