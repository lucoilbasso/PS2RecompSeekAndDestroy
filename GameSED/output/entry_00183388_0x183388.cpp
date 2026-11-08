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

// Function: entry_00183388
// Address: 0x183388 - 0x1833a0
void entry_00183388_0x183388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183388_0x183388");
#endif

    ctx->pc = 0x183388u;

    // 0x183388: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x183388u;
    {
        const bool branch_taken_0x183388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183388u;
        // 0x18338c: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183388) {
            ctx->pc = 0x1833A8u;
            return;
        }
    }
    ctx->pc = 0x183390u;
    // 0x183390: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x183390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x183394: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x183394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x183398: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x183398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x18339c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x18339cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x1833a0u;
}
