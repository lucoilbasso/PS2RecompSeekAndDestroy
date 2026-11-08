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

// Function: entry_00173160
// Address: 0x173160 - 0x173198
void entry_00173160_0x173160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173160_0x173160");
#endif

    ctx->pc = 0x173160u;

    // 0x173160: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x173160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x173164: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x173164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x173168: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x173168u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17316c: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x17316cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x173170: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x173170u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x173174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173178: 0xd61021  addu        $v0, $a2, $s6
    ctx->pc = 0x173178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x17317c: 0x2778021  addu        $s0, $s3, $s7
    ctx->pc = 0x17317cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x173180: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173184: 0x2010  mfhi        $a0
    ctx->pc = 0x173184u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x173188: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x173188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
    // 0x17318c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17318cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173190: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x173190u;
    {
        const bool branch_taken_0x173190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173190) {
            ctx->pc = 0x173194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173190u;
            // 0x173194: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x173198u;
            return;
        }
    }
    ctx->pc = 0x173198u;
}
