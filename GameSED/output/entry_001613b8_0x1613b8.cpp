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

// Function: entry_001613b8
// Address: 0x1613b8 - 0x1613c8
void entry_001613b8_0x1613b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001613b8_0x1613b8");
#endif

    ctx->pc = 0x1613b8u;

    // 0x1613b8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1613b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1613bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1613bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1613c0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1613C0u;
    {
        const bool branch_taken_0x1613c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613C0u;
        // 0x1613c4: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613c0) {
            ctx->pc = 0x161468u;
            return;
        }
    }
    ctx->pc = 0x1613C8u;
}
