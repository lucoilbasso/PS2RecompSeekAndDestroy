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

// Function: entry_001c857c
// Address: 0x1c857c - 0x1c85cc
void entry_001c857c_0x1c857c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c857c_0x1c857c");
#endif

    ctx->pc = 0x1c857cu;

    // 0x1c857c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1c857cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1c8580: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1c8580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1c8584: 0x1012  mflo        $v0
    ctx->pc = 0x1c8584u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8588: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8588u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c858c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c858cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8590: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8594: 0xcd2818  mult        $a1, $a2, $t5
    ctx->pc = 0x1c8594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c8598: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c8598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c859c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c859cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c85a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C85A0u;
    {
        const bool branch_taken_0x1c85a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85A0u;
        // 0x1c85a4: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85a0) {
            ctx->pc = 0x1C85D0u;
            return;
        }
    }
    ctx->pc = 0x1C85A8u;
    // 0x1c85a8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c85a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c85ac: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c85acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c85b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C85B0u;
    {
        const bool branch_taken_0x1c85b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85B0u;
        // 0x1c85b4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85b0) {
            ctx->pc = 0x1C85CCu;
            return;
        }
    }
    ctx->pc = 0x1C85B8u;
    // 0x1c85b8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c85b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c85bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C85BCu;
    {
        const bool branch_taken_0x1c85bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C85C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85BCu;
        // 0x1c85c0: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85bc) {
            ctx->pc = 0x1C85D0u;
            return;
        }
    }
    ctx->pc = 0x1C85C4u;
    // 0x1c85c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c85c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c85c8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c85c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    ctx->pc = 0x1c85ccu;
}
