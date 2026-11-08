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

// Function: entry_001c9468
// Address: 0x1c9468 - 0x1c94a0
void entry_001c9468_0x1c9468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9468_0x1c9468");
#endif

    ctx->pc = 0x1c9468u;

    // 0x1c9468: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1c9468u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c946c: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x1c946cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c9470: 0xc90019  multu       $a2, $t1
    ctx->pc = 0x1c9470u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 6) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1c9474: 0x3810  mfhi        $a3
    ctx->pc = 0x1c9474u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1c9478: 0x2012  mflo        $a0
    ctx->pc = 0x1c9478u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1c947c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1c947cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c9480: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9480u;
    {
        const bool branch_taken_0x1c9480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9480) {
            ctx->pc = 0x1C9484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9480u;
            // 0x1c9484: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C94A0u;
            return;
        }
    }
    ctx->pc = 0x1C9488u;
    // 0x1c9488: 0x14e30006  bne         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9488u;
    {
        const bool branch_taken_0x1c9488 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9488u;
        // 0x1c948c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9488) {
            ctx->pc = 0x1C94A4u;
            return;
        }
    }
    ctx->pc = 0x1C9490u;
    // 0x1c9490: 0x164102b  sltu        $v0, $t3, $a0
    ctx->pc = 0x1c9490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c9494: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9494u;
    {
        const bool branch_taken_0x1c9494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9494) {
            ctx->pc = 0x1C94A4u;
            return;
        }
    }
    ctx->pc = 0x1C949Cu;
    // 0x1c949c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c949cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x1c94a0u;
}
