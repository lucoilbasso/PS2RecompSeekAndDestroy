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

// Function: entry_0010c450
// Address: 0x10c450 - 0x10c45c
void entry_0010c450_0x10c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c450_0x10c450");
#endif

    ctx->pc = 0x10c450u;

    // 0x10c450: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x10c450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x10c454: 0x1e00fff0  bgtz        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x10C454u;
    {
        const bool branch_taken_0x10c454 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x10C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C454u;
        // 0x10c458: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c454) {
            ctx->pc = 0x10C418u;
            return;
        }
    }
    ctx->pc = 0x10C45Cu;
}
