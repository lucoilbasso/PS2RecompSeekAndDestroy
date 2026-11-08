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

// Function: entry_001b5394
// Address: 0x1b5394 - 0x1b53a0
void entry_001b5394_0x1b5394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5394_0x1b5394");
#endif

    ctx->pc = 0x1b5394u;

    // 0x1b5394: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b5394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1b5398: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5398u;
    {
        const bool branch_taken_0x1b5398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5398) {
            ctx->pc = 0x1B539Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5398u;
            // 0x1b539c: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B53A0u;
            return;
        }
    }
    ctx->pc = 0x1B53A0u;
}
