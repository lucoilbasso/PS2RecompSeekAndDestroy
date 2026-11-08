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

// Function: entry_001c91d4
// Address: 0x1c91d4 - 0x1c9224
void entry_001c91d4_0x1c91d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c91d4_0x1c91d4");
#endif

    ctx->pc = 0x1c91d4u;

    // 0x1c91d4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1c91d4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1c91d8: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1c91d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1c91dc: 0x1012  mflo        $v0
    ctx->pc = 0x1c91dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c91e0: 0x1810  mfhi        $v1
    ctx->pc = 0x1c91e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c91e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c91e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c91e8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c91ec: 0xcd2818  mult        $a1, $a2, $t5
    ctx->pc = 0x1c91ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c91f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c91f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c91f4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c91f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c91f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C91F8u;
    {
        const bool branch_taken_0x1c91f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91F8u;
        // 0x1c91fc: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91f8) {
            ctx->pc = 0x1C9228u;
            return;
        }
    }
    ctx->pc = 0x1C9200u;
    // 0x1c9200: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c9200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c9204: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c9204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9208: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9208u;
    {
        const bool branch_taken_0x1c9208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9208u;
        // 0x1c920c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9208) {
            ctx->pc = 0x1C9224u;
            return;
        }
    }
    ctx->pc = 0x1C9210u;
    // 0x1c9210: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c9210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c9214: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9214u;
    {
        const bool branch_taken_0x1c9214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9214u;
        // 0x1c9218: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9214) {
            ctx->pc = 0x1C9228u;
            return;
        }
    }
    ctx->pc = 0x1C921Cu;
    // 0x1c921c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c921cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c9220: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c9220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    ctx->pc = 0x1c9224u;
}
