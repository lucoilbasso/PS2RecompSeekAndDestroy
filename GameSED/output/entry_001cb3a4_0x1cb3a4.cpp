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

// Function: entry_001cb3a4
// Address: 0x1cb3a4 - 0x1cb3b8
void entry_001cb3a4_0x1cb3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb3a4_0x1cb3a4");
#endif

    ctx->pc = 0x1cb3a4u;

    // 0x1cb3a4: 0x128102b  sltu        $v0, $t1, $t0
    ctx->pc = 0x1cb3a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1cb3a8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1CB3A8u;
    {
        const bool branch_taken_0x1cb3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb3a8) {
            ctx->pc = 0x1CB3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB3A8u;
            // 0x1cb3ac: 0x1281021  addu        $v0, $t1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB368u;
            return;
        }
    }
    ctx->pc = 0x1CB3B0u;
    // 0x1cb3b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CB3B0u;
    {
        const bool branch_taken_0x1cb3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3B0u;
        // 0x1cb3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb3b0) {
            ctx->pc = 0x1CB414u;
            return;
        }
    }
    ctx->pc = 0x1CB3B8u;
}
