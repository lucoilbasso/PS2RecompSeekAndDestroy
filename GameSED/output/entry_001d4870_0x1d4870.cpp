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

// Function: entry_001d4870
// Address: 0x1d4870 - 0x1d4878
void entry_001d4870_0x1d4870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4870_0x1d4870");
#endif

    ctx->pc = 0x1d4870u;

    // 0x1d4870: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4870u;
    {
        const bool branch_taken_0x1d4870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4870u;
        // 0x1d4874: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4870) {
            ctx->pc = 0x1D4884u;
            return;
        }
    }
    ctx->pc = 0x1D4878u;
}
