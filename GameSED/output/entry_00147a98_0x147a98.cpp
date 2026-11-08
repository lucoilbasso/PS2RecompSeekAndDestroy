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

// Function: entry_00147a98
// Address: 0x147a98 - 0x147ab8
void entry_00147a98_0x147a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147a98_0x147a98");
#endif

    ctx->pc = 0x147a98u;

label_147a98:
    // 0x147a98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x147a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147a9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x147a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x147aa0: 0x0  nop
    ctx->pc = 0x147aa0u;
    // NOP
    // 0x147aa4: 0x0  nop
    ctx->pc = 0x147aa4u;
    // NOP
    // 0x147aa8: 0x0  nop
    ctx->pc = 0x147aa8u;
    // NOP
    // 0x147aac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x147AACu;
    {
        const bool branch_taken_0x147aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147aac) {
            ctx->pc = 0x147A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147a98;
        }
    }
    ctx->pc = 0x147AB4u;
    // 0x147ab4: 0x0  nop
    ctx->pc = 0x147ab4u;
    // NOP
    ctx->pc = 0x147ab8u;
}
