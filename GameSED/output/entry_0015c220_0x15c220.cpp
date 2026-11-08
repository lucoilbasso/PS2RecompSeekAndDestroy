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

// Function: entry_0015c220
// Address: 0x15c220 - 0x15c238
void entry_0015c220_0x15c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c220_0x15c220");
#endif

    ctx->pc = 0x15c220u;

    // 0x15c220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c224: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x15c224u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15c228: 0x1012  mflo        $v0
    ctx->pc = 0x15c228u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x15c22c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15C22Cu;
    {
        const bool branch_taken_0x15c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C22Cu;
        // 0x15c230: 0xae620028  sw          $v0, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c22c) {
            ctx->pc = 0x15C240u;
            return;
        }
    }
    ctx->pc = 0x15C234u;
    // 0x15c234: 0x0  nop
    ctx->pc = 0x15c234u;
    // NOP
    ctx->pc = 0x15c238u;
}
