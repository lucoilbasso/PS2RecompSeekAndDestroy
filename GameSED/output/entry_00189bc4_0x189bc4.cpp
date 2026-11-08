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

// Function: entry_00189bc4
// Address: 0x189bc4 - 0x189be0
void entry_00189bc4_0x189bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189bc4_0x189bc4");
#endif

    ctx->pc = 0x189bc4u;

    // 0x189bc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x189bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189bc8: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x189bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x189bcc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x189bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x189bd0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x189bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x189bd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189BD4u;
    {
        const bool branch_taken_0x189bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BD4u;
        // 0x189bd8: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189bd4) {
            ctx->pc = 0x189BE4u;
            return;
        }
    }
    ctx->pc = 0x189BDCu;
    // 0x189bdc: 0x0  nop
    ctx->pc = 0x189bdcu;
    // NOP
    ctx->pc = 0x189be0u;
}
