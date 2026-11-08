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

// Function: entry_001c9004
// Address: 0x1c9004 - 0x1c9050
void entry_001c9004_0x1c9004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9004_0x1c9004");
#endif

    ctx->pc = 0x1c9004u;

    // 0x1c9004: 0x1012  mflo        $v0
    ctx->pc = 0x1c9004u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9008: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9008u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c900c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c900cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9010: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c9014: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x1c9014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c9018: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c9018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c901c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c901cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c9020: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C9020u;
    {
        const bool branch_taken_0x1c9020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9020) {
            ctx->pc = 0x1C9024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9020u;
            // 0x1c9024: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9054u;
            return;
        }
    }
    ctx->pc = 0x1C9028u;
    // 0x1c9028: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c9028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c902c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c902cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9030: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9030u;
    {
        const bool branch_taken_0x1c9030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9030u;
        // 0x1c9034: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9030) {
            ctx->pc = 0x1C9050u;
            return;
        }
    }
    ctx->pc = 0x1C9038u;
    // 0x1c9038: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c9038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c903c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C903Cu;
    {
        const bool branch_taken_0x1c903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c903c) {
            ctx->pc = 0x1C9040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C903Cu;
            // 0x1c9040: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9054u;
            return;
        }
    }
    ctx->pc = 0x1C9044u;
    // 0x1c9044: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c9044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c9048: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c9048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c904c: 0x0  nop
    ctx->pc = 0x1c904cu;
    // NOP
    ctx->pc = 0x1c9050u;
}
