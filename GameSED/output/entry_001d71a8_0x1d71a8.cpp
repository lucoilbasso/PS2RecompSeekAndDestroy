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

// Function: entry_001d71a8
// Address: 0x1d71a8 - 0x1d71b8
void entry_001d71a8_0x1d71a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d71a8_0x1d71a8");
#endif

    ctx->pc = 0x1d71a8u;

    // 0x1d71a8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1d71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1d71ac: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D71ACu;
    {
        const bool branch_taken_0x1d71ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d71ac) {
            ctx->pc = 0x1D71B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D71ACu;
            // 0x1d71b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D71D8u;
            return;
        }
    }
    ctx->pc = 0x1D71B4u;
    // 0x1d71b4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1d71b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->pc = 0x1d71b8u;
}
