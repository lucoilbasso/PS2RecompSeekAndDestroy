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

// Function: entry_001332b8
// Address: 0x1332b8 - 0x1332c8
void entry_001332b8_0x1332b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001332b8_0x1332b8");
#endif

    ctx->pc = 0x1332b8u;

    // 0x1332b8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1332B8u;
    {
        const bool branch_taken_0x1332b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1332b8) {
            ctx->pc = 0x1332BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1332B8u;
            // 0x1332bc: 0x8e02079c  lw          $v0, 0x79C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1332C8u;
            return;
        }
    }
    ctx->pc = 0x1332C0u;
    // 0x1332c0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1332C0u;
    {
        const bool branch_taken_0x1332c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1332c0) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x1332C8u;
}
