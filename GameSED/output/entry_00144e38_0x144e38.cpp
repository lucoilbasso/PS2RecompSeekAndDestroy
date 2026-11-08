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

// Function: entry_00144e38
// Address: 0x144e38 - 0x144e40
void entry_00144e38_0x144e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144e38_0x144e38");
#endif

    ctx->pc = 0x144e38u;

    // 0x144e38: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x144E38u;
    {
        const bool branch_taken_0x144e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E38u;
        // 0x144e3c: 0xa0514019  sb          $s1, 0x4019($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 16409), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e38) {
            ctx->pc = 0x1450BCu;
            return;
        }
    }
    ctx->pc = 0x144E40u;
}
