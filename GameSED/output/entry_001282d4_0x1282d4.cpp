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

// Function: entry_001282d4
// Address: 0x1282d4 - 0x1282e0
void entry_001282d4_0x1282d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001282d4_0x1282d4");
#endif

    ctx->pc = 0x1282d4u;

    // 0x1282d4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1282d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1282d8: 0x1012  mflo        $v0
    ctx->pc = 0x1282d8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1282dc: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1282dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    ctx->pc = 0x1282e0u;
}
