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

// Function: entry_0012a060
// Address: 0x12a060 - 0x12a068
void entry_0012a060_0x12a060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a060_0x12a060");
#endif

    ctx->pc = 0x12a060u;

    // 0x12a060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12A060u;
    {
        const bool branch_taken_0x12a060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A060u;
        // 0x12a064: 0x2482fc18  addiu       $v0, $a0, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a060) {
            ctx->pc = 0x12A06Cu;
            return;
        }
    }
    ctx->pc = 0x12A068u;
}
