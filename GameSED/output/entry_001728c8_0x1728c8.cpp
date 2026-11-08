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

// Function: entry_001728c8
// Address: 0x1728c8 - 0x1728fc
void entry_001728c8_0x1728c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001728c8_0x1728c8");
#endif

    ctx->pc = 0x1728c8u;

    // 0x1728c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1728c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1728cc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1728ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1728d0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1728d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1728d4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1728d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1728d8: 0x2442d5c0  addiu       $v0, $v0, -0x2A40
    ctx->pc = 0x1728d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956480));
    // 0x1728dc: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x1728dcu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1728e0: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x1728e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1728e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1728e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728e8: 0x2010  mfhi        $a0
    ctx->pc = 0x1728e8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1728ec: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x1728ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x1728f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1728f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728f4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1728F4u;
    {
        const bool branch_taken_0x1728f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1728f4) {
            ctx->pc = 0x1728F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1728F4u;
            // 0x1728f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1728FCu;
            return;
        }
    }
    ctx->pc = 0x1728FCu;
}
