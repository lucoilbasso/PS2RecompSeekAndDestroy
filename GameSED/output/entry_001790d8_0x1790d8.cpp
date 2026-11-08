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

// Function: entry_001790d8
// Address: 0x1790d8 - 0x1790e8
void entry_001790d8_0x1790d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001790d8_0x1790d8");
#endif

    ctx->pc = 0x1790d8u;

    // 0x1790d8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1790D8u;
    {
        const bool branch_taken_0x1790d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1790DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790D8u;
        // 0x1790dc: 0x3c140026  lui         $s4, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790d8) {
            ctx->pc = 0x1791C4u;
            return;
        }
    }
    ctx->pc = 0x1790E0u;
    // 0x1790e0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1790e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1790e4: 0x0  nop
    ctx->pc = 0x1790e4u;
    // NOP
    ctx->pc = 0x1790e8u;
}
