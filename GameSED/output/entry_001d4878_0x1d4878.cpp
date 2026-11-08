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

// Function: entry_001d4878
// Address: 0x1d4878 - 0x1d4884
void entry_001d4878_0x1d4878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4878_0x1d4878");
#endif

    ctx->pc = 0x1d4878u;

    // 0x1d4878: 0x50c70009  beql        $a2, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4878u;
    {
        const bool branch_taken_0x1d4878 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x1d4878) {
            ctx->pc = 0x1D487Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4878u;
            // 0x1d487c: 0x8cc7000c  lw          $a3, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D48A0u;
            return;
        }
    }
    ctx->pc = 0x1D4880u;
    // 0x1d4880: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1d4880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->pc = 0x1d4884u;
}
