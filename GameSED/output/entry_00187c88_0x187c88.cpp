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

// Function: entry_00187c88
// Address: 0x187c88 - 0x187ca8
void entry_00187c88_0x187c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187c88_0x187c88");
#endif

    ctx->pc = 0x187c88u;

label_187c88:
    // 0x187c88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187c8c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x187c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x187c90: 0x0  nop
    ctx->pc = 0x187c90u;
    // NOP
    // 0x187c94: 0x0  nop
    ctx->pc = 0x187c94u;
    // NOP
    // 0x187c98: 0x0  nop
    ctx->pc = 0x187c98u;
    // NOP
    // 0x187c9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x187C9Cu;
    {
        const bool branch_taken_0x187c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187c9c) {
            ctx->pc = 0x187C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187c88;
        }
    }
    ctx->pc = 0x187CA4u;
    // 0x187ca4: 0x0  nop
    ctx->pc = 0x187ca4u;
    // NOP
    ctx->pc = 0x187ca8u;
}
