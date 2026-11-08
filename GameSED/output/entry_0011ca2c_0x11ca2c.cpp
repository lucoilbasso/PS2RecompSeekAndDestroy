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

// Function: entry_0011ca2c
// Address: 0x11ca2c - 0x11ca3c
void entry_0011ca2c_0x11ca2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ca2c_0x11ca2c");
#endif

    ctx->pc = 0x11ca2cu;

    // 0x11ca2c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x11ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11ca30: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x11ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x11ca34: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CA34u;
    {
        const bool branch_taken_0x11ca34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x11CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA34u;
        // 0x11ca38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca34) {
            ctx->pc = 0x11CA48u;
            return;
        }
    }
    ctx->pc = 0x11CA3Cu;
}
