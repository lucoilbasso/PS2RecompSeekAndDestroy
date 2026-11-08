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

// Function: entry_001cde20
// Address: 0x1cde20 - 0x1cde44
void entry_001cde20_0x1cde20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cde20_0x1cde20");
#endif

    ctx->pc = 0x1cde20u;

    // 0x1cde20: 0x82020477  lb          $v0, 0x477($s0)
    ctx->pc = 0x1cde20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1143)));
    // 0x1cde24: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDE24u;
    {
        const bool branch_taken_0x1cde24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cde24) {
            ctx->pc = 0x1CDE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDE24u;
            // 0x1cde28: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDE44u;
            return;
        }
    }
    ctx->pc = 0x1CDE2Cu;
    // 0x1cde2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cde2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cde30: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1cde30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cde34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cde34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cde38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cde38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cde3c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1cde3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1cde40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cde40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1cde44u;
}
