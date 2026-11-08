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

// Function: entry_00155148
// Address: 0x155148 - 0x155160
void entry_00155148_0x155148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155148_0x155148");
#endif

    ctx->pc = 0x155148u;

    // 0x155148: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155148u;
    {
        const bool branch_taken_0x155148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x15514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155148u;
        // 0x15514c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155148) {
            ctx->pc = 0x155168u;
            return;
        }
    }
    ctx->pc = 0x155150u;
    // 0x155150: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155150u;
    {
        const bool branch_taken_0x155150 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x155154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155150u;
        // 0x155154: 0x2603079c  addiu       $v1, $s0, 0x79C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155150) {
            ctx->pc = 0x155170u;
            return;
        }
    }
    ctx->pc = 0x155158u;
    // 0x155158: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x155158u;
    {
        const bool branch_taken_0x155158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155158) {
            ctx->pc = 0x155178u;
            return;
        }
    }
    ctx->pc = 0x155160u;
}
