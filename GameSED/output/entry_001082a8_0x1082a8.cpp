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

// Function: entry_001082a8
// Address: 0x1082a8 - 0x1082d0
void entry_001082a8_0x1082a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001082a8_0x1082a8");
#endif

    ctx->pc = 0x1082a8u;

    // 0x1082a8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1082a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1082ac: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x1082acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1082b0: 0x14830092  bne         $a0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x1082B0u;
    {
        const bool branch_taken_0x1082b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1082B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082B0u;
        // 0x1082b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082b0) {
            ctx->pc = 0x1084FCu;
            return;
        }
    }
    ctx->pc = 0x1082B8u;
    // 0x1082b8: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x1082b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x1082bc: 0x26040154  addiu       $a0, $s0, 0x154
    ctx->pc = 0x1082bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
    // 0x1082c0: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x1082c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x1082c4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1082C4u;
    {
        const bool branch_taken_0x1082c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082C4u;
        // 0x1082c8: 0x244573e0  addiu       $a1, $v0, 0x73E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082c4) {
            ctx->pc = 0x108484u;
            return;
        }
    }
    ctx->pc = 0x1082CCu;
    // 0x1082cc: 0x0  nop
    ctx->pc = 0x1082ccu;
    // NOP
    ctx->pc = 0x1082d0u;
}
