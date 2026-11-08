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

// Function: entry_0010084c
// Address: 0x10084c - 0x100868
void entry_0010084c_0x10084c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010084c_0x10084c");
#endif

    ctx->pc = 0x10084cu;

    // 0x10084c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x10084cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x100850: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x100850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x100854: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x100854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x100858: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x100858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x10085c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x10085cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100860: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x100860u;
    {
        const bool branch_taken_0x100860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100860u;
        // 0x100864: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100860) {
            ctx->pc = 0x1007F0u;
            return;
        }
    }
    ctx->pc = 0x100868u;
}
