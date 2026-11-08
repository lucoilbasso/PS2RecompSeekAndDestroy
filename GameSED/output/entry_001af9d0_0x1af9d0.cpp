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

// Function: entry_001af9d0
// Address: 0x1af9d0 - 0x1af9ec
void entry_001af9d0_0x1af9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af9d0_0x1af9d0");
#endif

    ctx->pc = 0x1af9d0u;

label_1af9d0:
    // 0x1af9d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1af9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af9d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1af9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1af9d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF9D8u;
    {
        const bool branch_taken_0x1af9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af9d8) {
            ctx->pc = 0x1AF9ECu;
            return;
        }
    }
    ctx->pc = 0x1AF9E0u;
    // 0x1af9e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1af9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af9e4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AF9E4u;
    {
        const bool branch_taken_0x1af9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af9e4) {
            ctx->pc = 0x1AF9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af9d0;
        }
    }
    ctx->pc = 0x1AF9ECu;
}
