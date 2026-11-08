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

// Function: entry_001791b8
// Address: 0x1791b8 - 0x1791c4
void entry_001791b8_0x1791b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001791b8_0x1791b8");
#endif

    ctx->pc = 0x1791b8u;

    // 0x1791b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1791b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1791bc: 0x5440ffca  bnel        $v0, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1791BCu;
    {
        const bool branch_taken_0x1791bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1791bc) {
            ctx->pc = 0x1791C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1791BCu;
            // 0x1791c0: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1790E8u;
            return;
        }
    }
    ctx->pc = 0x1791C4u;
}
