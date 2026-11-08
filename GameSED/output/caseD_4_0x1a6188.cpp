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

// Function: caseD_4
// Address: 0x1a6188 - 0x1a619c
void caseD_4_0x1a6188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1a6188");
#endif

    ctx->pc = 0x1a6188u;

    // 0x1a6188: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A6188u;
    {
        const bool branch_taken_0x1a6188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6188) {
            ctx->pc = 0x1A618Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6188u;
            // 0x1a618c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A61E4u;
            return;
        }
    }
    ctx->pc = 0x1A6190u;
    // 0x1a6190: 0x205001a  div         $zero, $s0, $a1
    ctx->pc = 0x1a6190u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a6194: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A6194u;
    {
        const bool branch_taken_0x1a6194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6194) {
            ctx->pc = 0x1A6198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6194u;
            // 0x1a6198: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A619Cu;
            return;
        }
    }
    ctx->pc = 0x1A619Cu;
}
