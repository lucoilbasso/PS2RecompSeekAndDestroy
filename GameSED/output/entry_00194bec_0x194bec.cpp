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

// Function: entry_00194bec
// Address: 0x194bec - 0x194c58
void entry_00194bec_0x194bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194bec_0x194bec");
#endif

    ctx->pc = 0x194becu;

    // 0x194bec: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x194becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x194bf0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x194bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x194bf4: 0xfe230208  sd          $v1, 0x208($s1)
    ctx->pc = 0x194bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 520), GPR_U64(ctx, 3));
    // 0x194bf8: 0x264b0240  addiu       $t3, $s2, 0x240
    ctx->pc = 0x194bf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x194bfc: 0xfe220200  sd          $v0, 0x200($s1)
    ctx->pc = 0x194bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 512), GPR_U64(ctx, 2));
    // 0x194c00: 0xfe2201f0  sd          $v0, 0x1F0($s1)
    ctx->pc = 0x194c00u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 496), GPR_U64(ctx, 2));
    // 0x194c04: 0xfe2301f8  sd          $v1, 0x1F8($s1)
    ctx->pc = 0x194c04u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 504), GPR_U64(ctx, 3));
    // 0x194c08: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x194c08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x194c0c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x194c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x194c10: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x194C10u;
    {
        const bool branch_taken_0x194c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C10u;
        // 0x194c14: 0x264a0250  addiu       $t2, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c10) {
            ctx->pc = 0x194C58u;
            return;
        }
    }
    ctx->pc = 0x194C18u;
    // 0x194c18: 0x92c20007  lbu         $v0, 0x7($s6)
    ctx->pc = 0x194c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
    // 0x194c1c: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x194c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x194c20: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x194c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x194c24: 0x26430260  addiu       $v1, $s2, 0x260
    ctx->pc = 0x194c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x194c28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x194c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194c2c: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x194c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x194c30: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x194c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x194c34: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x194c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x194c38: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x194c38u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x194c3c: 0x26490270  addiu       $t1, $s2, 0x270
    ctx->pc = 0x194c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
    // 0x194c40: 0x92c20002  lbu         $v0, 0x2($s6)
    ctx->pc = 0x194c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x194c44: 0x92c40003  lbu         $a0, 0x3($s6)
    ctx->pc = 0x194c44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x194c48: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x194c48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x194c4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x194c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x194c50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x194C50u;
    {
        const bool branch_taken_0x194c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C50u;
        // 0x194c54: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c50) {
            ctx->pc = 0x194C88u;
            return;
        }
    }
    ctx->pc = 0x194C58u;
}
