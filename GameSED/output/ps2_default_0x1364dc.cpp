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

// Function: default
// Address: 0x1364dc - 0x1364f8
void ps2_default_0x1364dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1364dc");
#endif

    ctx->pc = 0x1364dcu;

    // 0x1364dc: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1364DCu;
    {
        const bool branch_taken_0x1364dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364DCu;
        // 0x1364e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364dc) {
            ctx->pc = 0x136504u;
            return;
        }
    }
    ctx->pc = 0x1364E4u;
    // 0x1364e4: 0x16a20004  bne         $s5, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1364E4u;
    {
        const bool branch_taken_0x1364e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1364E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364E4u;
        // 0x1364e8: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364e4) {
            ctx->pc = 0x1364F8u;
            return;
        }
    }
    ctx->pc = 0x1364ECu;
    // 0x1364ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1364ECu;
    {
        const bool branch_taken_0x1364ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364ECu;
        // 0x1364f0: 0x531025  or          $v0, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364ec) {
            ctx->pc = 0x136500u;
            return;
        }
    }
    ctx->pc = 0x1364F4u;
    // 0x1364f4: 0x0  nop
    ctx->pc = 0x1364f4u;
    // NOP
    ctx->pc = 0x1364f8u;
}
