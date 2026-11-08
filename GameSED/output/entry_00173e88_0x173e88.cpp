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

// Function: entry_00173e88
// Address: 0x173e88 - 0x173ea4
void entry_00173e88_0x173e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173e88_0x173e88");
#endif

    ctx->pc = 0x173e88u;

    // 0x173e88: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x173e88u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x173e8c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x173e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x173e90: 0x2010  mfhi        $a0
    ctx->pc = 0x173e90u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x173e94: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x173e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x173e98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x173e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173e9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x173ea0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x173ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x173ea4u;
}
