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

// Function: entry_00145ea8
// Address: 0x145ea8 - 0x145eb0
void entry_00145ea8_0x145ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145ea8_0x145ea8");
#endif

    ctx->pc = 0x145ea8u;

    // 0x145ea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145EA8u;
    {
        const bool branch_taken_0x145ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145EA8u;
        // 0x145eac: 0x8c900024  lw          $s0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ea8) {
            ctx->pc = 0x145EBCu;
            return;
        }
    }
    ctx->pc = 0x145EB0u;
}
