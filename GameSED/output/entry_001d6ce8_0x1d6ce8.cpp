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

// Function: entry_001d6ce8
// Address: 0x1d6ce8 - 0x1d6cf8
void entry_001d6ce8_0x1d6ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6ce8_0x1d6ce8");
#endif

    ctx->pc = 0x1d6ce8u;

    // 0x1d6ce8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1d6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d6cec: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D6CECu;
    {
        const bool branch_taken_0x1d6cec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d6cec) {
            ctx->pc = 0x1D6CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6CECu;
            // 0x1d6cf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6D18u;
            return;
        }
    }
    ctx->pc = 0x1D6CF4u;
    // 0x1d6cf4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d6cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->pc = 0x1d6cf8u;
}
