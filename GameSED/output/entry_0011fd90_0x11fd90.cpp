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

// Function: entry_0011fd90
// Address: 0x11fd90 - 0x11fda0
void entry_0011fd90_0x11fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd90_0x11fd90");
#endif

    ctx->pc = 0x11fd90u;

    // 0x11fd90: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x11fd90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x11fd94: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x11fd94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11fd98: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11FD98u;
    {
        const bool branch_taken_0x11fd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD98u;
        // 0x11fd9c: 0x46031080  add.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd98) {
            ctx->pc = 0x11FD50u;
            return;
        }
    }
    ctx->pc = 0x11FDA0u;
}
