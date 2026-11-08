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

// Function: entry_0013b84c
// Address: 0x13b84c - 0x13b87c
void entry_0013b84c_0x13b84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b84c_0x13b84c");
#endif

    ctx->pc = 0x13b84cu;

    // 0x13b84c: 0x5660000c  bnel        $s3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x13B84Cu;
    {
        const bool branch_taken_0x13b84c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b84c) {
            ctx->pc = 0x13B850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B84Cu;
            // 0x13b850: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B880u;
            return;
        }
    }
    ctx->pc = 0x13B854u;
    // 0x13b854: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13b854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13b858: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x13b858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x13b85c: 0x481825  or          $v1, $v0, $t0
    ctx->pc = 0x13b85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x13b860: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x13b860u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x13b864: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x13b864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x13b868: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B868u;
    {
        const bool branch_taken_0x13b868 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B868u;
        // 0x13b86c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b868) {
            ctx->pc = 0x13B87Cu;
            return;
        }
    }
    ctx->pc = 0x13B870u;
    // 0x13b870: 0x8e8201c8  lw          $v0, 0x1C8($s4)
    ctx->pc = 0x13b870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
    // 0x13b874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13b874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13b878: 0xae8201c8  sw          $v0, 0x1C8($s4)
    ctx->pc = 0x13b878u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 456), GPR_U32(ctx, 2));
    ctx->pc = 0x13b87cu;
}
