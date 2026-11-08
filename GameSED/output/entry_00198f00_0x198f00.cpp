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

// Function: entry_00198f00
// Address: 0x198f00 - 0x198f20
void entry_00198f00_0x198f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198f00_0x198f00");
#endif

    ctx->pc = 0x198f00u;

label_198f00:
    // 0x198f00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198f04: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x198f08: 0x0  nop
    ctx->pc = 0x198f08u;
    // NOP
    // 0x198f0c: 0x0  nop
    ctx->pc = 0x198f0cu;
    // NOP
    // 0x198f10: 0x0  nop
    ctx->pc = 0x198f10u;
    // NOP
    // 0x198f14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198F14u;
    {
        const bool branch_taken_0x198f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198f14) {
            ctx->pc = 0x198F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198f00;
        }
    }
    ctx->pc = 0x198F1Cu;
    // 0x198f1c: 0x0  nop
    ctx->pc = 0x198f1cu;
    // NOP
    ctx->pc = 0x198f20u;
}
