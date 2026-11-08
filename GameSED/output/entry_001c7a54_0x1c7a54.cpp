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

// Function: entry_001c7a54
// Address: 0x1c7a54 - 0x1c7a78
void entry_001c7a54_0x1c7a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7a54_0x1c7a54");
#endif

    ctx->pc = 0x1c7a54u;

    // 0x1c7a54: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7A54u;
    {
        const bool branch_taken_0x1c7a54 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A54u;
        // 0x1c7a58: 0x8fa40234  lw          $a0, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a54) {
            ctx->pc = 0x1C7A78u;
            return;
        }
    }
    ctx->pc = 0x1C7A5Cu;
    // 0x1c7a5c: 0xdfa200f0  ld          $v0, 0xF0($sp)
    ctx->pc = 0x1c7a5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c7a60: 0xdfa300f8  ld          $v1, 0xF8($sp)
    ctx->pc = 0x1c7a60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1c7a64: 0xfc940010  sd          $s4, 0x10($a0)
    ctx->pc = 0x1c7a64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 20));
    // 0x1c7a68: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1c7a68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1c7a6c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1c7a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1c7a70: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C7A70u;
    {
        const bool branch_taken_0x1c7a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A70u;
        // 0x1c7a74: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a70) {
            ctx->pc = 0x1C7AC8u;
            return;
        }
    }
    ctx->pc = 0x1C7A78u;
}
