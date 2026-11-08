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

// Function: entry_00171324
// Address: 0x171324 - 0x171348
void entry_00171324_0x171324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171324_0x171324");
#endif

    ctx->pc = 0x171324u;

    // 0x171324: 0x1913823  subu        $a3, $t4, $s1
    ctx->pc = 0x171324u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x171328: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x171328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17132c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17132cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171330: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x171330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x171334: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x171334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x171338: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x171338u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17133c: 0xae070038  sw          $a3, 0x38($s0)
    ctx->pc = 0x17133cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 7));
    // 0x171340: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x171340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x171344: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x171344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->pc = 0x171348u;
}
