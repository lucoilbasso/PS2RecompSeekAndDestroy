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

// Function: entry_001b76c0
// Address: 0x1b76c0 - 0x1b76d4
void entry_001b76c0_0x1b76c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b76c0_0x1b76c0");
#endif

    ctx->pc = 0x1b76c0u;

    // 0x1b76c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B76C0u;
    {
        const bool branch_taken_0x1b76c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76C0u;
        // 0x1b76c4: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76c0) {
            ctx->pc = 0x1B76D4u;
            return;
        }
    }
    ctx->pc = 0x1B76C8u;
    // 0x1b76c8: 0x8c43b9b8  lw          $v1, -0x4648($v0)
    ctx->pc = 0x1b76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949304)));
    // 0x1b76cc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B76CCu;
    {
        const bool branch_taken_0x1b76cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76CCu;
        // 0x1b76d0: 0x3c030041  lui         $v1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76cc) {
            ctx->pc = 0x1B76DCu;
            return;
        }
    }
    ctx->pc = 0x1B76D4u;
}
