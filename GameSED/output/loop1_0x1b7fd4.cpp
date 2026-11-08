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

// Function: loop1
// Address: 0x1b7fd4 - 0x1b7ff0
void loop1_0x1b7fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loop1_0x1b7fd4");
#endif

    ctx->pc = 0x1b7fd4u;

label_1b7fd4:
    // 0x1b7fd4: 0xf  sync
    ctx->pc = 0x1b7fd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b7fd8: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x1b7fd8u;
    // CACHE instruction (ignored)
    // 0x1b7fdc: 0xf  sync
    ctx->pc = 0x1b7fdcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b7fe0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1b7fe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1b7fe4: 0x0  nop
    ctx->pc = 0x1b7fe4u;
    // NOP
    // 0x1b7fe8: 0x1d20fffa  bgtz        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B7FE8u;
    {
        const bool branch_taken_0x1b7fe8 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x1B7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FE8u;
        // 0x1b7fec: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fe8) {
            ctx->pc = 0x1B7FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7fd4;
        }
    }
    ctx->pc = 0x1B7FF0u;
}
