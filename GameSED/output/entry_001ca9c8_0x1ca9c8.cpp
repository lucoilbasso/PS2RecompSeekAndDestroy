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

// Function: entry_001ca9c8
// Address: 0x1ca9c8 - 0x1ca9d8
void entry_001ca9c8_0x1ca9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca9c8_0x1ca9c8");
#endif

    ctx->pc = 0x1ca9c8u;

    // 0x1ca9c8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1ca9c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1ca9cc: 0x1ee102b  sltu        $v0, $t7, $t6
    ctx->pc = 0x1ca9ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1ca9d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1CA9D0u;
    {
        const bool branch_taken_0x1ca9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9D0u;
        // 0x1ca9d4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9d0) {
            ctx->pc = 0x1CA998u;
            return;
        }
    }
    ctx->pc = 0x1CA9D8u;
}
