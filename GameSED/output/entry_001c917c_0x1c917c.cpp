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

// Function: entry_001c917c
// Address: 0x1c917c - 0x1c91c8
void entry_001c917c_0x1c917c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c917c_0x1c917c");
#endif

    ctx->pc = 0x1c917cu;

    // 0x1c917c: 0x1012  mflo        $v0
    ctx->pc = 0x1c917cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9180: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9180u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c9184: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c9184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9188: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c918c: 0xec2818  mult        $a1, $a3, $t4
    ctx->pc = 0x1c918cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c9190: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c9190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9194: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c9194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c9198: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9198u;
    {
        const bool branch_taken_0x1c9198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9198u;
        // 0x1c919c: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9198) {
            ctx->pc = 0x1C91C8u;
            return;
        }
    }
    ctx->pc = 0x1C91A0u;
    // 0x1c91a0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c91a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c91a4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c91a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c91a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C91A8u;
    {
        const bool branch_taken_0x1c91a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91A8u;
        // 0x1c91ac: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91a8) {
            ctx->pc = 0x1C91C8u;
            return;
        }
    }
    ctx->pc = 0x1C91B0u;
    // 0x1c91b0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c91b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c91b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C91B4u;
    {
        const bool branch_taken_0x1c91b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c91b4) {
            ctx->pc = 0x1C91B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C91B4u;
            // 0x1c91b8: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C91CCu;
            return;
        }
    }
    ctx->pc = 0x1C91BCu;
    // 0x1c91bc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c91bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c91c0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c91c4: 0x0  nop
    ctx->pc = 0x1c91c4u;
    // NOP
    ctx->pc = 0x1c91c8u;
}
