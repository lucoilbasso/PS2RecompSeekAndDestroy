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

// Function: entry_001a02b0
// Address: 0x1a02b0 - 0x1a02c0
void entry_001a02b0_0x1a02b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a02b0_0x1a02b0");
#endif

    ctx->pc = 0x1a02b0u;

    // 0x1a02b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A02B0u;
    {
        const bool branch_taken_0x1a02b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A02B0u;
        // 0x1a02b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a02b0) {
            ctx->pc = 0x1A02C0u;
            return;
        }
    }
    ctx->pc = 0x1A02B8u;
    // 0x1a02b8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a02bc: 0x8c42f640  lw          $v0, -0x9C0($v0)
    ctx->pc = 0x1a02bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x23F640u));
    ctx->pc = 0x1a02c0u;
}
