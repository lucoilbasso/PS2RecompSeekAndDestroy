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

// Function: entry_001c8810
// Address: 0x1c8810 - 0x1c8848
void entry_001c8810_0x1c8810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8810_0x1c8810");
#endif

    ctx->pc = 0x1c8810u;

    // 0x1c8810: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1c8810u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c8814: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x1c8814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c8818: 0xc90019  multu       $a2, $t1
    ctx->pc = 0x1c8818u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 6) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1c881c: 0x3810  mfhi        $a3
    ctx->pc = 0x1c881cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1c8820: 0x2012  mflo        $a0
    ctx->pc = 0x1c8820u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1c8824: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1c8824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c8828: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8828u;
    {
        const bool branch_taken_0x1c8828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8828) {
            ctx->pc = 0x1C882Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8828u;
            // 0x1c882c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8848u;
            return;
        }
    }
    ctx->pc = 0x1C8830u;
    // 0x1c8830: 0x14e30006  bne         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8830u;
    {
        const bool branch_taken_0x1c8830 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8830u;
        // 0x1c8834: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8830) {
            ctx->pc = 0x1C884Cu;
            return;
        }
    }
    ctx->pc = 0x1C8838u;
    // 0x1c8838: 0x164102b  sltu        $v0, $t3, $a0
    ctx->pc = 0x1c8838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c883c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C883Cu;
    {
        const bool branch_taken_0x1c883c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C883Cu;
        // 0x1c8840: 0x6103c  dsll32      $v0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c883c) {
            ctx->pc = 0x1C8850u;
            return;
        }
    }
    ctx->pc = 0x1C8844u;
    // 0x1c8844: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c8844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x1c8848u;
}
