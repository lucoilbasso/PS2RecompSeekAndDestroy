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

// Function: entry_0013df98
// Address: 0x13df98 - 0x13dfb8
void entry_0013df98_0x13df98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013df98_0x13df98");
#endif

    ctx->pc = 0x13df98u;

label_13df98:
    // 0x13df98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13df98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13df9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13dfa0: 0x0  nop
    ctx->pc = 0x13dfa0u;
    // NOP
    // 0x13dfa4: 0x0  nop
    ctx->pc = 0x13dfa4u;
    // NOP
    // 0x13dfa8: 0x0  nop
    ctx->pc = 0x13dfa8u;
    // NOP
    // 0x13dfac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13DFACu;
    {
        const bool branch_taken_0x13dfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dfac) {
            ctx->pc = 0x13DF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13df98;
        }
    }
    ctx->pc = 0x13DFB4u;
    // 0x13dfb4: 0x0  nop
    ctx->pc = 0x13dfb4u;
    // NOP
    ctx->pc = 0x13dfb8u;
}
