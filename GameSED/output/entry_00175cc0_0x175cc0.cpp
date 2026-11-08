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

// Function: entry_00175cc0
// Address: 0x175cc0 - 0x175ce4
void entry_00175cc0_0x175cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175cc0_0x175cc0");
#endif

    ctx->pc = 0x175cc0u;

    // 0x175cc0: 0x6b001a  div         $zero, $v1, $t3
    ctx->pc = 0x175cc0u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175cc4: 0x1010  mfhi        $v0
    ctx->pc = 0x175cc4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175cc8: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x175cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x175ccc: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x175cccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175cd0: 0x1300000a  beqz        $t8, . + 4 + (0xA << 2)
    ctx->pc = 0x175CD0u;
    {
        const bool branch_taken_0x175cd0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CD0u;
        // 0x175cd4: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cd0) {
            ctx->pc = 0x175CFCu;
            return;
        }
    }
    ctx->pc = 0x175CD8u;
    // 0x175cd8: 0x8d420050  lw          $v0, 0x50($t2)
    ctx->pc = 0x175cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x175cdc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x175cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x175ce0: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x175ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x175ce4u;
}
