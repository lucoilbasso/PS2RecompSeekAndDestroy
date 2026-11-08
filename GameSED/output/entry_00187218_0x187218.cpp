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

// Function: entry_00187218
// Address: 0x187218 - 0x187238
void entry_00187218_0x187218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187218_0x187218");
#endif

    ctx->pc = 0x187218u;

label_187218:
    // 0x187218: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18721c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18721cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x187220: 0x0  nop
    ctx->pc = 0x187220u;
    // NOP
    // 0x187224: 0x0  nop
    ctx->pc = 0x187224u;
    // NOP
    // 0x187228: 0x0  nop
    ctx->pc = 0x187228u;
    // NOP
    // 0x18722c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18722Cu;
    {
        const bool branch_taken_0x18722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18722c) {
            ctx->pc = 0x187218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187218;
        }
    }
    ctx->pc = 0x187234u;
    // 0x187234: 0x0  nop
    ctx->pc = 0x187234u;
    // NOP
    ctx->pc = 0x187238u;
}
