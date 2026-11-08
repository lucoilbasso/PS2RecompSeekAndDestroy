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

// Function: entry_0013bee0
// Address: 0x13bee0 - 0x13bf00
void entry_0013bee0_0x13bee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bee0_0x13bee0");
#endif

    ctx->pc = 0x13bee0u;

    // 0x13bee0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13bee4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13bee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bee8: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x13BEE8u;
    {
        const bool branch_taken_0x13bee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bee8) {
            ctx->pc = 0x13BF94u;
            return;
        }
    }
    ctx->pc = 0x13BEF0u;
    // 0x13bef0: 0x8e820204  lw          $v0, 0x204($s4)
    ctx->pc = 0x13bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 516)));
    // 0x13bef4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13BEF4u;
    {
        const bool branch_taken_0x13bef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bef4) {
            ctx->pc = 0x13BEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BEF4u;
            // 0x13bef8: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BF20u;
            return;
        }
    }
    ctx->pc = 0x13BEFCu;
    // 0x13befc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x13bf00u;
}
