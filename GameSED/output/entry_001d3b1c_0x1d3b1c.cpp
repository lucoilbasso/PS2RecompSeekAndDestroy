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

// Function: entry_001d3b1c
// Address: 0x1d3b1c - 0x1d3b34
void entry_001d3b1c_0x1d3b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3b1c_0x1d3b1c");
#endif

    ctx->pc = 0x1d3b1cu;

    // 0x1d3b1c: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x1d3b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3b20: 0x6610005  bgez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3B20u;
    {
        const bool branch_taken_0x1d3b20 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1D3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B20u;
        // 0x1d3b24: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b20) {
            ctx->pc = 0x1D3B38u;
            return;
        }
    }
    ctx->pc = 0x1D3B28u;
    // 0x1d3b28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1d3b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3b2c: 0x938823  subu        $s1, $a0, $s3
    ctx->pc = 0x1d3b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1d3b30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d3b30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d3b34u;
}
