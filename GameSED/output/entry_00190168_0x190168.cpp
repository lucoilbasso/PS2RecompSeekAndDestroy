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

// Function: entry_00190168
// Address: 0x190168 - 0x190184
void entry_00190168_0x190168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190168_0x190168");
#endif

    ctx->pc = 0x190168u;

label_190168:
    // 0x190168: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19016c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19016cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x190170: 0x0  nop
    ctx->pc = 0x190170u;
    // NOP
    // 0x190174: 0x0  nop
    ctx->pc = 0x190174u;
    // NOP
    // 0x190178: 0x0  nop
    ctx->pc = 0x190178u;
    // NOP
    // 0x19017c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19017Cu;
    {
        const bool branch_taken_0x19017c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19017c) {
            ctx->pc = 0x190168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190168;
        }
    }
    ctx->pc = 0x190184u;
}
