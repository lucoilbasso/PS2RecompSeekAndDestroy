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

// Function: entry_00148668
// Address: 0x148668 - 0x148688
void entry_00148668_0x148668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148668_0x148668");
#endif

    ctx->pc = 0x148668u;

label_148668:
    // 0x148668: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14866c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14866cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148670: 0x0  nop
    ctx->pc = 0x148670u;
    // NOP
    // 0x148674: 0x0  nop
    ctx->pc = 0x148674u;
    // NOP
    // 0x148678: 0x0  nop
    ctx->pc = 0x148678u;
    // NOP
    // 0x14867c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14867Cu;
    {
        const bool branch_taken_0x14867c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14867c) {
            ctx->pc = 0x148668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148668;
        }
    }
    ctx->pc = 0x148684u;
    // 0x148684: 0x0  nop
    ctx->pc = 0x148684u;
    // NOP
    ctx->pc = 0x148688u;
}
