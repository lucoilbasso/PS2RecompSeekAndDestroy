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

// Function: entry_00171228
// Address: 0x171228 - 0x171250
void entry_00171228_0x171228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171228_0x171228");
#endif

    ctx->pc = 0x171228u;

    // 0x171228: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x171228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17122c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x17122cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x171230: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x171230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171234: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x171234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x171238: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x171238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x17123c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x17123cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x171240: 0x2810  mfhi        $a1
    ctx->pc = 0x171240u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x171244: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x171244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x171248: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x171248u;
    {
        const bool branch_taken_0x171248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171248u;
        // 0x17124c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171248) {
            ctx->pc = 0x17128Cu;
            return;
        }
    }
    ctx->pc = 0x171250u;
}
