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

// Function: entry_00170db0
// Address: 0x170db0 - 0x170dcc
void entry_00170db0_0x170db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170db0_0x170db0");
#endif

    ctx->pc = 0x170db0u;

    // 0x170db0: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x170db0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x170db4: 0x1010  mfhi        $v0
    ctx->pc = 0x170db4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x170db8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x170db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x170dbc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x170dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x170dc0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x170dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x170dc4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x170dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x170dc8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x170dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x170dccu;
}
