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

// Function: entry_00160c34
// Address: 0x160c34 - 0x160c48
void entry_00160c34_0x160c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160c34_0x160c34");
#endif

    ctx->pc = 0x160c34u;

    // 0x160c34: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x160C34u;
    {
        const bool branch_taken_0x160c34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C34u;
        // 0x160c38: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c34) {
            ctx->pc = 0x160C50u;
            return;
        }
    }
    ctx->pc = 0x160C3Cu;
    // 0x160c3c: 0xb3001a  div         $zero, $a1, $s3
    ctx->pc = 0x160c3cu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x160c40: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x160C40u;
    {
        const bool branch_taken_0x160c40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x160c40) {
            ctx->pc = 0x160C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160C40u;
            // 0x160c44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x160C48u;
            return;
        }
    }
    ctx->pc = 0x160C48u;
}
