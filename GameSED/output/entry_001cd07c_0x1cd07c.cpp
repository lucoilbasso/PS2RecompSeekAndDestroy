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

// Function: entry_001cd07c
// Address: 0x1cd07c - 0x1cd08c
void entry_001cd07c_0x1cd07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd07c_0x1cd07c");
#endif

    ctx->pc = 0x1cd07cu;

    // 0x1cd07c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD07Cu;
    {
        const bool branch_taken_0x1cd07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD07Cu;
        // 0x1cd080: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd07c) {
            ctx->pc = 0x1CD08Cu;
            return;
        }
    }
    ctx->pc = 0x1CD084u;
    // 0x1cd084: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1cd084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1cd088: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1cd088u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1cd08cu;
}
