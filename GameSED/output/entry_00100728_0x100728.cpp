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

// Function: entry_00100728
// Address: 0x100728 - 0x10073c
void entry_00100728_0x100728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100728_0x100728");
#endif

    ctx->pc = 0x100728u;

    // 0x100728: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x100728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x10072c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10072cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x100730: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x100730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100734: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x100734u;
    {
        const bool branch_taken_0x100734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100734u;
        // 0x100738: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100734) {
            ctx->pc = 0x1006F0u;
            return;
        }
    }
    ctx->pc = 0x10073Cu;
}
