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

// Function: entry_0016a470
// Address: 0x16a470 - 0x16a490
void entry_0016a470_0x16a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a470_0x16a470");
#endif

    ctx->pc = 0x16a470u;

    // 0x16a470: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16a470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16a474: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16a474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x16a478: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A478u;
    {
        const bool branch_taken_0x16a478 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A478u;
        // 0x16a47c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a478) {
            ctx->pc = 0x16A490u;
            return;
        }
    }
    ctx->pc = 0x16A480u;
    // 0x16a480: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16a480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x16a484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A484u;
    {
        const bool branch_taken_0x16a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A484u;
        // 0x16a488: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a484) {
            ctx->pc = 0x16A494u;
            return;
        }
    }
    ctx->pc = 0x16A48Cu;
    // 0x16a48c: 0x0  nop
    ctx->pc = 0x16a48cu;
    // NOP
    ctx->pc = 0x16a490u;
}
