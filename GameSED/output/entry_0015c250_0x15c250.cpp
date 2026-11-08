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

// Function: entry_0015c250
// Address: 0x15c250 - 0x15c268
void entry_0015c250_0x15c250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c250_0x15c250");
#endif

    ctx->pc = 0x15c250u;

    // 0x15c250: 0x34018000  ori         $at, $zero, 0x8000
    ctx->pc = 0x15c250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c254: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x15c254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x15c258: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x15c258u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15c25c: 0x1012  mflo        $v0
    ctx->pc = 0x15c25cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x15c260: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15C260u;
    {
        const bool branch_taken_0x15c260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C260u;
        // 0x15c264: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c260) {
            ctx->pc = 0x15C270u;
            return;
        }
    }
    ctx->pc = 0x15C268u;
}
