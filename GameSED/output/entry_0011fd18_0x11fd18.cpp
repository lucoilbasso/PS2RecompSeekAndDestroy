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

// Function: entry_0011fd18
// Address: 0x11fd18 - 0x11fd28
void entry_0011fd18_0x11fd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd18_0x11fd18");
#endif

    ctx->pc = 0x11fd18u;

    // 0x11fd18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11fd1c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x11fd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11fd20: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11FD20u;
    {
        const bool branch_taken_0x11fd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD20u;
        // 0x11fd24: 0x46031080  add.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd20) {
            ctx->pc = 0x11FD00u;
            return;
        }
    }
    ctx->pc = 0x11FD28u;
}
