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

// Function: entry_001a7178
// Address: 0x1a7178 - 0x1a7184
void entry_001a7178_0x1a7178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7178_0x1a7178");
#endif

    ctx->pc = 0x1a7178u;

    // 0x1a7178: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a7178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a717c: 0x1600ffd6  bnez        $s0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1A717Cu;
    {
        const bool branch_taken_0x1a717c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A717Cu;
        // 0x1a7180: 0x262a00b  movn        $s4, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a717c) {
            ctx->pc = 0x1A70D8u;
            return;
        }
    }
    ctx->pc = 0x1A7184u;
}
