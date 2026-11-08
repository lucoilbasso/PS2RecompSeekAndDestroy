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

// Function: entry_00125a10
// Address: 0x125a10 - 0x125a34
void entry_00125a10_0x125a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125a10_0x125a10");
#endif

    ctx->pc = 0x125a10u;

    // 0x125a10: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x125a10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x125a14: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x125a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x125a18: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x125a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x125a1c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x125a1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125a20: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x125a20u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x125a24: 0x232001a  div         $zero, $s1, $s2
    ctx->pc = 0x125a24u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x125a28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x125a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x125a2c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x125A2Cu;
    {
        const bool branch_taken_0x125a2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a2c) {
            ctx->pc = 0x125A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125A2Cu;
            // 0x125a30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x125A34u;
            return;
        }
    }
    ctx->pc = 0x125A34u;
}
