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

// Function: entry_0018da64
// Address: 0x18da64 - 0x18da78
void entry_0018da64_0x18da64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018da64_0x18da64");
#endif

    ctx->pc = 0x18da64u;

    // 0x18da64: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x18da64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x18da68: 0x5040005f  beql        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x18DA68u;
    {
        const bool branch_taken_0x18da68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da68) {
            ctx->pc = 0x18DA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DA68u;
            // 0x18da6c: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DBE8u;
            return;
        }
    }
    ctx->pc = 0x18DA70u;
    // 0x18da70: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x18DA70u;
    {
        const bool branch_taken_0x18da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA70u;
        // 0x18da74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da70) {
            ctx->pc = 0x18DBD8u;
            return;
        }
    }
    ctx->pc = 0x18DA78u;
}
