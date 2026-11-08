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

// Function: entry_001557ec
// Address: 0x1557ec - 0x1557f4
void entry_001557ec_0x1557ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001557ec_0x1557ec");
#endif

    ctx->pc = 0x1557ecu;

    // 0x1557ec: 0x521ffe8  bgez        $t1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1557ECu;
    {
        const bool branch_taken_0x1557ec = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1557F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557ECu;
        // 0x1557f0: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557ec) {
            ctx->pc = 0x155790u;
            return;
        }
    }
    ctx->pc = 0x1557F4u;
}
