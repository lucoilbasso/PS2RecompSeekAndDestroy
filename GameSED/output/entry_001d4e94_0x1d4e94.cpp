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

// Function: entry_001d4e94
// Address: 0x1d4e94 - 0x1d4ea0
void entry_001d4e94_0x1d4e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4e94_0x1d4e94");
#endif

    ctx->pc = 0x1d4e94u;

    // 0x1d4e94: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1d4e94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d4e98: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1D4E98u;
    {
        const bool branch_taken_0x1d4e98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e98) {
            ctx->pc = 0x1D4E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4E98u;
            // 0x1d4e9c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4E60u;
            return;
        }
    }
    ctx->pc = 0x1D4EA0u;
}
