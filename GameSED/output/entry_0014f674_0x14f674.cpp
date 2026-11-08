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

// Function: entry_0014f674
// Address: 0x14f674 - 0x14f67c
void entry_0014f674_0x14f674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f674_0x14f674");
#endif

    ctx->pc = 0x14f674u;

    // 0x14f674: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14F674u;
    {
        const bool branch_taken_0x14f674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f674) {
            ctx->pc = 0x14F678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F674u;
            // 0x14f678: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F67Cu;
            return;
        }
    }
    ctx->pc = 0x14F67Cu;
}
