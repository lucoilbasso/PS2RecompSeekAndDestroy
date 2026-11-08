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

// Function: entry_001c8404
// Address: 0x1c8404 - 0x1c8450
void entry_001c8404_0x1c8404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8404_0x1c8404");
#endif

    ctx->pc = 0x1c8404u;

    // 0x1c8404: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1c8404u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1c8408: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x1c8408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1c840c: 0x1012  mflo        $v0
    ctx->pc = 0x1c840cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8410: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8410u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c8414: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c8414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8418: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c841c: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x1c841cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c8420: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c8420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8424: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c8424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c8428: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8428u;
    {
        const bool branch_taken_0x1c8428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8428u;
        // 0x1c842c: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8428) {
            ctx->pc = 0x1C8454u;
            return;
        }
    }
    ctx->pc = 0x1C8430u;
    // 0x1c8430: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c8430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c8434: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c8434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8438: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8438u;
    {
        const bool branch_taken_0x1c8438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8438u;
        // 0x1c843c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8438) {
            ctx->pc = 0x1C8450u;
            return;
        }
    }
    ctx->pc = 0x1C8440u;
    // 0x1c8440: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c8440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c8444: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1c8444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c8448: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c8448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c844c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1c844cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->pc = 0x1c8450u;
}
