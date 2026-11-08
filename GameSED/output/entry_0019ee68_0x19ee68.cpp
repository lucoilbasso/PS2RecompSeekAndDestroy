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

// Function: entry_0019ee68
// Address: 0x19ee68 - 0x19ee74
void entry_0019ee68_0x19ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ee68_0x19ee68");
#endif

    ctx->pc = 0x19ee68u;

    // 0x19ee68: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EE68u;
    {
        const bool branch_taken_0x19ee68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE68u;
        // 0x19ee6c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee68) {
            ctx->pc = 0x19EE74u;
            return;
        }
    }
    ctx->pc = 0x19EE70u;
    // 0x19ee70: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x19ee70u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    ctx->pc = 0x19ee74u;
}
