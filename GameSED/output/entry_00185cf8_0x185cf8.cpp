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

// Function: entry_00185cf8
// Address: 0x185cf8 - 0x185d00
void entry_00185cf8_0x185cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185cf8_0x185cf8");
#endif

    ctx->pc = 0x185cf8u;

    // 0x185cf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x185CF8u;
    {
        const bool branch_taken_0x185cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CF8u;
        // 0x185cfc: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cf8) {
            ctx->pc = 0x185D14u;
            return;
        }
    }
    ctx->pc = 0x185D00u;
}
