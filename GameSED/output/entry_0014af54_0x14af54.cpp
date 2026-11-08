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

// Function: entry_0014af54
// Address: 0x14af54 - 0x14af70
void entry_0014af54_0x14af54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014af54_0x14af54");
#endif

    ctx->pc = 0x14af54u;

    // 0x14af54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14af54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14af58: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x14af58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x14af5c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x14af5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x14af60: 0xae74024c  sw          $s4, 0x24C($s3)
    ctx->pc = 0x14af60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 588), GPR_U32(ctx, 20));
    // 0x14af64: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14AF64u;
    {
        const bool branch_taken_0x14af64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF64u;
        // 0x14af68: 0xae650194  sw          $a1, 0x194($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af64) {
            ctx->pc = 0x14B01Cu;
            return;
        }
    }
    ctx->pc = 0x14AF6Cu;
    // 0x14af6c: 0x0  nop
    ctx->pc = 0x14af6cu;
    // NOP
    ctx->pc = 0x14af70u;
}
