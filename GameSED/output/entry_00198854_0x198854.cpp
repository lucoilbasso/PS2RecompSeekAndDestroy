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

// Function: entry_00198854
// Address: 0x198854 - 0x1988a8
void entry_00198854_0x198854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198854_0x198854");
#endif

    ctx->pc = 0x198854u;

    // 0x198854: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x198854u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198858: 0x260b0240  addiu       $t3, $s0, 0x240
    ctx->pc = 0x198858u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x19885c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x19885cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x198860: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x198860u;
    {
        const bool branch_taken_0x198860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198860u;
        // 0x198864: 0x26070250  addiu       $a3, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198860) {
            ctx->pc = 0x1988A8u;
            return;
        }
    }
    ctx->pc = 0x198868u;
    // 0x198868: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x198868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x19886c: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x19886cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x198870: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x198870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x198874: 0x26030260  addiu       $v1, $s0, 0x260
    ctx->pc = 0x198874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x198878: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x198878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19887c: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x19887cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x198880: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x198880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x198884: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x198884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x198888: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x198888u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x19888c: 0x26070270  addiu       $a3, $s0, 0x270
    ctx->pc = 0x19888cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x198890: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x198890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x198894: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x198894u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x198898: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x198898u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x19889c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19889cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1988a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1988A0u;
    {
        const bool branch_taken_0x1988a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1988A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988A0u;
        // 0x1988a4: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1988a0) {
            ctx->pc = 0x1988D8u;
            return;
        }
    }
    ctx->pc = 0x1988A8u;
}
