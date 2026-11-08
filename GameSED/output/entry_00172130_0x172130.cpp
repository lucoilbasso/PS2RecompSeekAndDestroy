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

// Function: entry_00172130
// Address: 0x172130 - 0x172158
void entry_00172130_0x172130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172130_0x172130");
#endif

    ctx->pc = 0x172130u;

    // 0x172130: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x172130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x172134: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x172134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x172138: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x172138u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17213c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17213cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172140: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x172140u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x172144: 0x2010  mfhi        $a0
    ctx->pc = 0x172144u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x172148: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x172148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x17214c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17214cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172150: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x172150u;
    {
        const bool branch_taken_0x172150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172150) {
            ctx->pc = 0x172154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172150u;
            // 0x172154: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x172158u;
            return;
        }
    }
    ctx->pc = 0x172158u;
}
