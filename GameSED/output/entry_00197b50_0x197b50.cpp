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

// Function: entry_00197b50
// Address: 0x197b50 - 0x197b68
void entry_00197b50_0x197b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197b50_0x197b50");
#endif

    ctx->pc = 0x197b50u;

    // 0x197b50: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x197b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x197b54: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197B54u;
    {
        const bool branch_taken_0x197b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B54u;
        // 0x197b58: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b54) {
            ctx->pc = 0x197B68u;
            return;
        }
    }
    ctx->pc = 0x197B5Cu;
    // 0x197b5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x197B5Cu;
    {
        const bool branch_taken_0x197b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B5Cu;
        // 0x197b60: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b5c) {
            ctx->pc = 0x197B6Cu;
            return;
        }
    }
    ctx->pc = 0x197B64u;
    // 0x197b64: 0x0  nop
    ctx->pc = 0x197b64u;
    // NOP
    ctx->pc = 0x197b68u;
}
