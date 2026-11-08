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

// Function: entry_0011e600
// Address: 0x11e600 - 0x11e610
void entry_0011e600_0x11e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e600_0x11e600");
#endif

    ctx->pc = 0x11e600u;

    // 0x11e600: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E600u;
    {
        const bool branch_taken_0x11e600 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E600u;
        // 0x11e604: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e600) {
            ctx->pc = 0x11E610u;
            return;
        }
    }
    ctx->pc = 0x11E608u;
    // 0x11e608: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11E608u;
    {
        const bool branch_taken_0x11e608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E608u;
        // 0x11e60c: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e608) {
            ctx->pc = 0x11E614u;
            return;
        }
    }
    ctx->pc = 0x11E610u;
}
