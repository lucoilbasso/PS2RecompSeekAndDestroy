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

// Function: entry_00189c98
// Address: 0x189c98 - 0x189cb8
void entry_00189c98_0x189c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189c98_0x189c98");
#endif

    ctx->pc = 0x189c98u;

label_189c98:
    // 0x189c98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x189c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189c9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x189c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x189ca0: 0x0  nop
    ctx->pc = 0x189ca0u;
    // NOP
    // 0x189ca4: 0x0  nop
    ctx->pc = 0x189ca4u;
    // NOP
    // 0x189ca8: 0x0  nop
    ctx->pc = 0x189ca8u;
    // NOP
    // 0x189cac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x189CACu;
    {
        const bool branch_taken_0x189cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189cac) {
            ctx->pc = 0x189C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189c98;
        }
    }
    ctx->pc = 0x189CB4u;
    // 0x189cb4: 0x0  nop
    ctx->pc = 0x189cb4u;
    // NOP
    ctx->pc = 0x189cb8u;
}
