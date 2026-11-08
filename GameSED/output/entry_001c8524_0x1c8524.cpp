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

// Function: entry_001c8524
// Address: 0x1c8524 - 0x1c8570
void entry_001c8524_0x1c8524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8524_0x1c8524");
#endif

    ctx->pc = 0x1c8524u;

    // 0x1c8524: 0x1012  mflo        $v0
    ctx->pc = 0x1c8524u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c8528: 0x1810  mfhi        $v1
    ctx->pc = 0x1c8528u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c852c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c852cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8530: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c8530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8534: 0xec2818  mult        $a1, $a3, $t4
    ctx->pc = 0x1c8534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c8538: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c8538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c853c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c853cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c8540: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C8540u;
    {
        const bool branch_taken_0x1c8540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8540u;
        // 0x1c8544: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8540) {
            ctx->pc = 0x1C8570u;
            return;
        }
    }
    ctx->pc = 0x1C8548u;
    // 0x1c8548: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c8548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c854c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c854cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8550: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8550u;
    {
        const bool branch_taken_0x1c8550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8550u;
        // 0x1c8554: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8550) {
            ctx->pc = 0x1C8570u;
            return;
        }
    }
    ctx->pc = 0x1C8558u;
    // 0x1c8558: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c8558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c855c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C855Cu;
    {
        const bool branch_taken_0x1c855c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c855c) {
            ctx->pc = 0x1C8560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C855Cu;
            // 0x1c8560: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8574u;
            return;
        }
    }
    ctx->pc = 0x1C8564u;
    // 0x1c8564: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c8564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c8568: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c8568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c856c: 0x0  nop
    ctx->pc = 0x1c856cu;
    // NOP
    ctx->pc = 0x1c8570u;
}
