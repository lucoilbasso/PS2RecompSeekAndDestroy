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

// Function: entry_0012a670
// Address: 0x12a670 - 0x12a690
void entry_0012a670_0x12a670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a670_0x12a670");
#endif

    ctx->pc = 0x12a670u;

label_12a670:
    // 0x12a670: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12a670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12a674: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x12a674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x12a678: 0x0  nop
    ctx->pc = 0x12a678u;
    // NOP
    // 0x12a67c: 0x0  nop
    ctx->pc = 0x12a67cu;
    // NOP
    // 0x12a680: 0x0  nop
    ctx->pc = 0x12a680u;
    // NOP
    // 0x12a684: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A684u;
    {
        const bool branch_taken_0x12a684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a684) {
            ctx->pc = 0x12A670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a670;
        }
    }
    ctx->pc = 0x12A68Cu;
    // 0x12a68c: 0x0  nop
    ctx->pc = 0x12a68cu;
    // NOP
    ctx->pc = 0x12a690u;
}
