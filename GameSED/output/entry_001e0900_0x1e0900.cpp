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

// Function: entry_001e0900
// Address: 0x1e0900 - 0x1e090c
void entry_001e0900_0x1e0900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0900_0x1e0900");
#endif

    ctx->pc = 0x1e0900u;

    // 0x1e0900: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1e0900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e0904: 0x5460ffec  bnel        $v1, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1E0904u;
    {
        const bool branch_taken_0x1e0904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0904) {
            ctx->pc = 0x1E0908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0904u;
            // 0x1e0908: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E08B8u;
            return;
        }
    }
    ctx->pc = 0x1E090Cu;
}
