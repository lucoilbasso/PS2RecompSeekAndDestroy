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

// Function: entry_001383f0
// Address: 0x1383f0 - 0x1383fc
void entry_001383f0_0x1383f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001383f0_0x1383f0");
#endif

    ctx->pc = 0x1383f0u;

    // 0x1383f0: 0x56490012  bnel        $s2, $t1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1383F0u;
    {
        const bool branch_taken_0x1383f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 9));
        if (branch_taken_0x1383f0) {
            ctx->pc = 0x1383F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1383F0u;
            // 0x1383f4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13843Cu;
            return;
        }
    }
    ctx->pc = 0x1383F8u;
    // 0x1383f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1383f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x1383fcu;
}
