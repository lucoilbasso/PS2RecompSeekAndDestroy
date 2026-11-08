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

// Function: entry_001a2c88
// Address: 0x1a2c88 - 0x1a2c94
void entry_001a2c88_0x1a2c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2c88_0x1a2c88");
#endif

    ctx->pc = 0x1a2c88u;

    // 0x1a2c88: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a2c8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2C8Cu;
    {
        const bool branch_taken_0x1a2c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C8Cu;
        // 0x1a2c90: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c8c) {
            ctx->pc = 0x1A2CA0u;
            return;
        }
    }
    ctx->pc = 0x1A2C94u;
}
