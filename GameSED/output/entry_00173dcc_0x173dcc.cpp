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

// Function: entry_00173dcc
// Address: 0x173dcc - 0x173de4
void entry_00173dcc_0x173dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173dcc_0x173dcc");
#endif

    ctx->pc = 0x173dccu;

    // 0x173dcc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x173dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x173dd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173dd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x173dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x173dd8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x173dd8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x173ddc: 0x1810  mfhi        $v1
    ctx->pc = 0x173ddcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x173de0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x173de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x173de4u;
}
