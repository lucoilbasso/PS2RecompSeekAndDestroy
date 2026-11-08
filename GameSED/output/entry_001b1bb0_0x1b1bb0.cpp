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

// Function: entry_001b1bb0
// Address: 0x1b1bb0 - 0x1b1bd0
void entry_001b1bb0_0x1b1bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1bb0_0x1b1bb0");
#endif

    ctx->pc = 0x1b1bb0u;

label_1b1bb0:
    // 0x1b1bb0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1b1bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bb4: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1b1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1b1bb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b1bb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bbc: 0x0  nop
    ctx->pc = 0x1b1bbcu;
    // NOP
    // 0x1b1bc0: 0x0  nop
    ctx->pc = 0x1b1bc0u;
    // NOP
    // 0x1b1bc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B1BC4u;
    {
        const bool branch_taken_0x1b1bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1bc4) {
            ctx->pc = 0x1B1BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1bb0;
        }
    }
    ctx->pc = 0x1B1BCCu;
    // 0x1b1bcc: 0xac950038  sw          $s5, 0x38($a0)
    ctx->pc = 0x1b1bccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 21));
    ctx->pc = 0x1b1bd0u;
}
