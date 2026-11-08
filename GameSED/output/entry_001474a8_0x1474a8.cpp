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

// Function: entry_001474a8
// Address: 0x1474a8 - 0x1474b0
void entry_001474a8_0x1474a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001474a8_0x1474a8");
#endif

    ctx->pc = 0x1474a8u;

    // 0x1474a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1474A8u;
    {
        const bool branch_taken_0x1474a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1474ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1474A8u;
        // 0x1474ac: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1474a8) {
            ctx->pc = 0x1474C4u;
            return;
        }
    }
    ctx->pc = 0x1474B0u;
}
