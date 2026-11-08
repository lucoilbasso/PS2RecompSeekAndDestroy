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

// Function: entry_001b48ec
// Address: 0x1b48ec - 0x1b48f8
void entry_001b48ec_0x1b48ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b48ec_0x1b48ec");
#endif

    ctx->pc = 0x1b48ecu;

    // 0x1b48ec: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1b48f0: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B48F0u;
    {
        const bool branch_taken_0x1b48f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b48f0) {
            ctx->pc = 0x1B48F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B48F0u;
            // 0x1b48f4: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B48F8u;
            return;
        }
    }
    ctx->pc = 0x1B48F8u;
}
