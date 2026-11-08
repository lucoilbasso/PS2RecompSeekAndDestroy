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

// Function: entry_0012ae48
// Address: 0x12ae48 - 0x12ae58
void entry_0012ae48_0x12ae48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ae48_0x12ae48");
#endif

    ctx->pc = 0x12ae48u;

    // 0x12ae48: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x12ae48u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12ae4c: 0x1012  mflo        $v0
    ctx->pc = 0x12ae4cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x12ae50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12AE50u;
    {
        const bool branch_taken_0x12ae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE50u;
        // 0x12ae54: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae50) {
            ctx->pc = 0x12AE5Cu;
            return;
        }
    }
    ctx->pc = 0x12AE58u;
}
