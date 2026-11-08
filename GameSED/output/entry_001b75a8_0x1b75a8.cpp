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

// Function: entry_001b75a8
// Address: 0x1b75a8 - 0x1b75bc
void entry_001b75a8_0x1b75a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b75a8_0x1b75a8");
#endif

    ctx->pc = 0x1b75a8u;

    // 0x1b75a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B75A8u;
    {
        const bool branch_taken_0x1b75a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B75ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75A8u;
        // 0x1b75ac: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75a8) {
            ctx->pc = 0x1B75BCu;
            return;
        }
    }
    ctx->pc = 0x1B75B0u;
    // 0x1b75b0: 0x8c43b9b8  lw          $v1, -0x4648($v0)
    ctx->pc = 0x1b75b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949304)));
    // 0x1b75b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B75B4u;
    {
        const bool branch_taken_0x1b75b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B75B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75B4u;
        // 0x1b75b8: 0x3c030041  lui         $v1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75b4) {
            ctx->pc = 0x1B75C4u;
            return;
        }
    }
    ctx->pc = 0x1B75BCu;
}
