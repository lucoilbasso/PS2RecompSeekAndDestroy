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

// Function: entry_0015b880
// Address: 0x15b880 - 0x15b898
void entry_0015b880_0x15b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b880_0x15b880");
#endif

    ctx->pc = 0x15b880u;

    // 0x15b880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b884: 0x57001a  div         $zero, $v0, $s7
    ctx->pc = 0x15b884u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15b888: 0x1012  mflo        $v0
    ctx->pc = 0x15b888u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x15b88c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B88Cu;
    {
        const bool branch_taken_0x15b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B88Cu;
        // 0x15b890: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b88c) {
            ctx->pc = 0x15B89Cu;
            return;
        }
    }
    ctx->pc = 0x15B894u;
    // 0x15b894: 0x0  nop
    ctx->pc = 0x15b894u;
    // NOP
    ctx->pc = 0x15b898u;
}
