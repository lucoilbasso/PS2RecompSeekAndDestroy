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

// Function: entry_0014af3c
// Address: 0x14af3c - 0x14af50
void entry_0014af3c_0x14af3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014af3c_0x14af3c");
#endif

    ctx->pc = 0x14af3cu;

    // 0x14af3c: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x14af3cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14af40: 0x1012  mflo        $v0
    ctx->pc = 0x14af40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x14af44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14AF44u;
    {
        const bool branch_taken_0x14af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF44u;
        // 0x14af48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af44) {
            ctx->pc = 0x14AF54u;
            return;
        }
    }
    ctx->pc = 0x14AF4Cu;
    // 0x14af4c: 0x0  nop
    ctx->pc = 0x14af4cu;
    // NOP
    ctx->pc = 0x14af50u;
}
