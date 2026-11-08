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

// Function: entry_0016dc38
// Address: 0x16dc38 - 0x16dc58
void entry_0016dc38_0x16dc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dc38_0x16dc38");
#endif

    ctx->pc = 0x16dc38u;

    // 0x16dc38: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16dc3c: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x16dc40: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DC40u;
    {
        const bool branch_taken_0x16dc40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC40u;
        // 0x16dc44: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc40) {
            ctx->pc = 0x16DC58u;
            return;
        }
    }
    ctx->pc = 0x16DC48u;
    // 0x16dc48: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x16dc4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16DC4Cu;
    {
        const bool branch_taken_0x16dc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC4Cu;
        // 0x16dc50: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc4c) {
            ctx->pc = 0x16DC5Cu;
            return;
        }
    }
    ctx->pc = 0x16DC54u;
    // 0x16dc54: 0x0  nop
    ctx->pc = 0x16dc54u;
    // NOP
    ctx->pc = 0x16dc58u;
}
