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

// Function: entry_00175c1c
// Address: 0x175c1c - 0x175c5c
void entry_00175c1c_0x175c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175c1c_0x175c1c");
#endif

    ctx->pc = 0x175c1cu;

    // 0x175c1c: 0x8dc30010  lw          $v1, 0x10($t6)
    ctx->pc = 0x175c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x175c20: 0xcc2021  addu        $a0, $a2, $t4
    ctx->pc = 0x175c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x175c24: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x175c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x175c28: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x175c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x175c2c: 0x8c001a  div         $zero, $a0, $t4
    ctx->pc = 0x175c2cu;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175c30: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x175c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x175c34: 0x102182a  slt         $v1, $t0, $v0
    ctx->pc = 0x175c34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175c38: 0x103100b  movn        $v0, $t0, $v1
    ctx->pc = 0x175c38u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x175c3c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x175c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x175c40: 0x2810  mfhi        $a1
    ctx->pc = 0x175c40u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x175c44: 0xa9282a  slt         $a1, $a1, $t1
    ctx->pc = 0x175c44u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x175c48: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x175C48u;
    {
        const bool branch_taken_0x175c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C48u;
        // 0x175c4c: 0x1021823  subu        $v1, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c48) {
            ctx->pc = 0x175CA8u;
            return;
        }
    }
    ctx->pc = 0x175C50u;
    // 0x175c50: 0xcc001a  div         $zero, $a2, $t4
    ctx->pc = 0x175c50u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175c54: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175C54u;
    {
        const bool branch_taken_0x175c54 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c54) {
            ctx->pc = 0x175C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175C54u;
            // 0x175c58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175C5Cu;
            return;
        }
    }
    ctx->pc = 0x175C5Cu;
}
