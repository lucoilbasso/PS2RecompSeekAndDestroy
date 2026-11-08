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

// Function: entry_00137334
// Address: 0x137334 - 0x13733c
void entry_00137334_0x137334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137334_0x137334");
#endif

    ctx->pc = 0x137334u;

    // 0x137334: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x137334u;
    {
        const bool branch_taken_0x137334 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x137334) {
            ctx->pc = 0x137338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137334u;
            // 0x137338: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13733Cu;
            return;
        }
    }
    ctx->pc = 0x13733Cu;
}
