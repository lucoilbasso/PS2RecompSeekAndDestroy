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

// Function: entry_001dfcc0
// Address: 0x1dfcc0 - 0x1dfcd0
void entry_001dfcc0_0x1dfcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfcc0_0x1dfcc0");
#endif

    ctx->pc = 0x1dfcc0u;

    // 0x1dfcc0: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1dfcc0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dfcc4: 0xa483017e  sh          $v1, 0x17E($a0)
    ctx->pc = 0x1dfcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 382), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dfcc8: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DFCC8u;
    {
        const bool branch_taken_0x1dfcc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfcc8) {
            ctx->pc = 0x1DFCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFCC8u;
            // 0x1dfccc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFCD0u;
            return;
        }
    }
    ctx->pc = 0x1DFCD0u;
}
