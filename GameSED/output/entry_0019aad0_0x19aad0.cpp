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

// Function: entry_0019aad0
// Address: 0x19aad0 - 0x19aaec
void entry_0019aad0_0x19aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aad0_0x19aad0");
#endif

    ctx->pc = 0x19aad0u;

    // 0x19aad0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19aad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19aad4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x19aad4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19aad8: 0x1010  mfhi        $v0
    ctx->pc = 0x19aad8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19aadc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19aae0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19aae0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19aae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19aae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19aae8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19aae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x19aaecu;
}
