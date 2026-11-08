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

// Function: entry_001c929c
// Address: 0x1c929c - 0x1c92e8
void entry_001c929c_0x1c929c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c929c_0x1c929c");
#endif

    ctx->pc = 0x1c929cu;

    // 0x1c929c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1c929cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1c92a0: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x1c92a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1c92a4: 0x1012  mflo        $v0
    ctx->pc = 0x1c92a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c92a8: 0x1810  mfhi        $v1
    ctx->pc = 0x1c92a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c92ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c92acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c92b0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c92b4: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x1c92b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c92b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c92b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c92bc: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c92bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c92c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C92C0u;
    {
        const bool branch_taken_0x1c92c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92C0u;
        // 0x1c92c4: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92c0) {
            ctx->pc = 0x1C92ECu;
            return;
        }
    }
    ctx->pc = 0x1C92C8u;
    // 0x1c92c8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c92c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c92cc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c92ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c92d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C92D0u;
    {
        const bool branch_taken_0x1c92d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C92D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92D0u;
        // 0x1c92d4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92d0) {
            ctx->pc = 0x1C92E8u;
            return;
        }
    }
    ctx->pc = 0x1C92D8u;
    // 0x1c92d8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c92d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c92dc: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1c92dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c92e0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c92e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c92e4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1c92e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->pc = 0x1c92e8u;
}
