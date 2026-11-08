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

// Function: entry_001dc440
// Address: 0x1dc440 - 0x1dc458
void entry_001dc440_0x1dc440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc440_0x1dc440");
#endif

    ctx->pc = 0x1dc440u;

    // 0x1dc440: 0x54450009  bnel        $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DC440u;
    {
        const bool branch_taken_0x1dc440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dc440) {
            ctx->pc = 0x1DC444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC440u;
            // 0x1dc444: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC468u;
            return;
        }
    }
    ctx->pc = 0x1DC448u;
    // 0x1dc448: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC448u;
    {
        const bool branch_taken_0x1dc448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC448u;
        // 0x1dc44c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc448) {
            ctx->pc = 0x1DC458u;
            return;
        }
    }
    ctx->pc = 0x1DC450u;
    // 0x1dc450: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DC450u;
    {
        const bool branch_taken_0x1dc450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC450u;
        // 0x1dc454: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc450) {
            ctx->pc = 0x1DC45Cu;
            return;
        }
    }
    ctx->pc = 0x1DC458u;
}
