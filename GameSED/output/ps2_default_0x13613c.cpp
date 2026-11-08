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
// Address: 0x13613c - 0x136158
void ps2_default_0x13613c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x13613c");
#endif

    ctx->pc = 0x13613cu;

    // 0x13613c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x13613Cu;
    {
        const bool branch_taken_0x13613c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13613c) {
            ctx->pc = 0x136168u;
            return;
        }
    }
    ctx->pc = 0x136144u;
    // 0x136144: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x136144u;
    {
        const bool branch_taken_0x136144 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x136148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136144u;
        // 0x136148: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136144) {
            ctx->pc = 0x136158u;
            return;
        }
    }
    ctx->pc = 0x13614Cu;
    // 0x13614c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x136150: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x136150u;
    {
        const bool branch_taken_0x136150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136150u;
        // 0x136154: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136150) {
            ctx->pc = 0x13619Cu;
            return;
        }
    }
    ctx->pc = 0x136158u;
}
