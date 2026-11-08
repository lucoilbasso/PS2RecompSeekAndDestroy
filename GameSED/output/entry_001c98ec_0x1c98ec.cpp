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

// Function: entry_001c98ec
// Address: 0x1c98ec - 0x1c9938
void entry_001c98ec_0x1c98ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c98ec_0x1c98ec");
#endif

    ctx->pc = 0x1c98ecu;

    // 0x1c98ec: 0x1012  mflo        $v0
    ctx->pc = 0x1c98ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c98f0: 0x1810  mfhi        $v1
    ctx->pc = 0x1c98f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c98f4: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1c98f4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c98f8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c98f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c98fc: 0x1c54018  mult        $t0, $t6, $a1
    ctx->pc = 0x1c98fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c9900: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c9900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9904: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c9904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9908: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C9908u;
    {
        const bool branch_taken_0x1c9908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9908) {
            ctx->pc = 0x1C990Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9908u;
            // 0x1c990c: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C993Cu;
            return;
        }
    }
    ctx->pc = 0x1C9910u;
    // 0x1c9910: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c9910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c9914: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c9914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9918: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9918u;
    {
        const bool branch_taken_0x1c9918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9918u;
        // 0x1c991c: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9918) {
            ctx->pc = 0x1C9938u;
            return;
        }
    }
    ctx->pc = 0x1C9920u;
    // 0x1c9920: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c9920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9924: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9924u;
    {
        const bool branch_taken_0x1c9924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9924) {
            ctx->pc = 0x1C9928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9924u;
            // 0x1c9928: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C993Cu;
            return;
        }
    }
    ctx->pc = 0x1C992Cu;
    // 0x1c992c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1c992cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1c9930: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c9930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c9934: 0x0  nop
    ctx->pc = 0x1c9934u;
    // NOP
    ctx->pc = 0x1c9938u;
}
