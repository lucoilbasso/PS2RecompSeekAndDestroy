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

// Function: entry_00152860
// Address: 0x152860 - 0x152870
void entry_00152860_0x152860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152860_0x152860");
#endif

    ctx->pc = 0x152860u;

    // 0x152860: 0x12820053  beq         $s4, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x152860u;
    {
        const bool branch_taken_0x152860 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x152860) {
            ctx->pc = 0x1529B0u;
            return;
        }
    }
    ctx->pc = 0x152868u;
    // 0x152868: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x152868u;
    {
        const bool branch_taken_0x152868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152868u;
        // 0x15286c: 0x8e430690  lw          $v1, 0x690($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152868) {
            ctx->pc = 0x152884u;
            return;
        }
    }
    ctx->pc = 0x152870u;
}
