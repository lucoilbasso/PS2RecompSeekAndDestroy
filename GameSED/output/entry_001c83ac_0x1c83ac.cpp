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

// Function: entry_001c83ac
// Address: 0x1c83ac - 0x1c83f8
void entry_001c83ac_0x1c83ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c83ac_0x1c83ac");
#endif

    ctx->pc = 0x1c83acu;

    // 0x1c83ac: 0x1012  mflo        $v0
    ctx->pc = 0x1c83acu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c83b0: 0x1810  mfhi        $v1
    ctx->pc = 0x1c83b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c83b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c83b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83b8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c83b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c83bc: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x1c83bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c83c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c83c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c83c4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c83c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c83c8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C83C8u;
    {
        const bool branch_taken_0x1c83c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c83c8) {
            ctx->pc = 0x1C83CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C83C8u;
            // 0x1c83cc: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C83FCu;
            return;
        }
    }
    ctx->pc = 0x1C83D0u;
    // 0x1c83d0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c83d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c83d4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c83d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c83d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C83D8u;
    {
        const bool branch_taken_0x1c83d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C83DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83D8u;
        // 0x1c83dc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83d8) {
            ctx->pc = 0x1C83F8u;
            return;
        }
    }
    ctx->pc = 0x1C83E0u;
    // 0x1c83e0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c83e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c83e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C83E4u;
    {
        const bool branch_taken_0x1c83e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c83e4) {
            ctx->pc = 0x1C83E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C83E4u;
            // 0x1c83e8: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C83FCu;
            return;
        }
    }
    ctx->pc = 0x1C83ECu;
    // 0x1c83ec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c83ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c83f0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c83f4: 0x0  nop
    ctx->pc = 0x1c83f4u;
    // NOP
    ctx->pc = 0x1c83f8u;
}
