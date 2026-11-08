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

// Function: entry_0017138c
// Address: 0x17138c - 0x1713b8
void entry_0017138c_0x17138c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017138c_0x17138c");
#endif

    ctx->pc = 0x17138cu;

    // 0x17138c: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x17138cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x171390: 0x6a2823  subu        $a1, $v1, $t2
    ctx->pc = 0x171390u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x171394: 0x2529fc00  addiu       $t1, $t1, -0x400
    ctx->pc = 0x171394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966272));
    // 0x171398: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x171398u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17139c: 0x1010  mfhi        $v0
    ctx->pc = 0x17139cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1713a0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1713a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713a4: 0x252403ff  addiu       $a0, $t1, 0x3FF
    ctx->pc = 0x1713a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1023));
    // 0x1713a8: 0x29220000  slti        $v0, $t1, 0x0
    ctx->pc = 0x1713a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1713ac: 0x82480b  movn        $t1, $a0, $v0
    ctx->pc = 0x1713acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 4));
    // 0x1713b0: 0x91a83  sra         $v1, $t1, 10
    ctx->pc = 0x1713b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 10));
    // 0x1713b4: 0x34a80  sll         $t1, $v1, 10
    ctx->pc = 0x1713b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    ctx->pc = 0x1713b8u;
}
