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

// Function: caseD_3
// Address: 0x1a6140 - 0x1a615c
void caseD_3_0x1a6140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1a6140");
#endif

    ctx->pc = 0x1a6140u;

    // 0x1a6140: 0x50a00028  beql        $a1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A6140u;
    {
        const bool branch_taken_0x1a6140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6140) {
            ctx->pc = 0x1A6144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6140u;
            // 0x1a6144: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A61E4u;
            return;
        }
    }
    ctx->pc = 0x1A6148u;
    // 0x1a6148: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6148u;
    {
        const bool branch_taken_0x1a6148 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6148u;
        // 0x1a614c: 0x2051023  subu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6148) {
            ctx->pc = 0x1A6168u;
            return;
        }
    }
    ctx->pc = 0x1A6150u;
    // 0x1a6150: 0x205001a  div         $zero, $s0, $a1
    ctx->pc = 0x1a6150u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a6154: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A6154u;
    {
        const bool branch_taken_0x1a6154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6154) {
            ctx->pc = 0x1A6158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6154u;
            // 0x1a6158: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A615Cu;
            return;
        }
    }
    ctx->pc = 0x1A615Cu;
}
