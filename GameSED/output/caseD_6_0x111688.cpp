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

// Function: caseD_6
// Address: 0x111688 - 0x111690
void caseD_6_0x111688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x111688");
#endif

    ctx->pc = 0x111688u;

    // 0x111688: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x111688u;
    {
        const bool branch_taken_0x111688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111688u;
        // 0x11168c: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111688) {
            ctx->pc = 0x1117A4u;
            return;
        }
    }
    ctx->pc = 0x111690u;
}
