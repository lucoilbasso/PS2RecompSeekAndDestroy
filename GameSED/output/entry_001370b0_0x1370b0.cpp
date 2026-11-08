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

// Function: entry_001370b0
// Address: 0x1370b0 - 0x1370c8
void entry_001370b0_0x1370b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001370b0_0x1370b0");
#endif

    ctx->pc = 0x1370b0u;

    // 0x1370b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1370b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1370b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1370B4u;
    {
        const bool branch_taken_0x1370b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370B4u;
        // 0x1370b8: 0x34c20010  ori         $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370b4) {
            ctx->pc = 0x1370C8u;
            return;
        }
    }
    ctx->pc = 0x1370BCu;
    // 0x1370bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1370BCu;
    {
        const bool branch_taken_0x1370bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370BCu;
        // 0x1370c0: 0x34c60010  ori         $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370bc) {
            ctx->pc = 0x1370CCu;
            return;
        }
    }
    ctx->pc = 0x1370C4u;
    // 0x1370c4: 0x0  nop
    ctx->pc = 0x1370c4u;
    // NOP
    ctx->pc = 0x1370c8u;
}
