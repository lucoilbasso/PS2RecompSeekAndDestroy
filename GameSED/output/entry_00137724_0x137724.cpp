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

// Function: entry_00137724
// Address: 0x137724 - 0x137780
void entry_00137724_0x137724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137724_0x137724");
#endif

    ctx->pc = 0x137724u;

    // 0x137724: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x137724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x137728: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x137728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x13772c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x137730: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x137730u;
    {
        const bool branch_taken_0x137730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137730u;
        // 0x137734: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137730) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x137738u;
    // 0x137738: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x137738u;
    {
        const bool branch_taken_0x137738 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137738u;
        // 0x13773c: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137738) {
            ctx->pc = 0x13779Cu;
            return;
        }
    }
    ctx->pc = 0x137740u;
    // 0x137740: 0x1085003e  beq         $a0, $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x137740u;
    {
        const bool branch_taken_0x137740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x137744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137740u;
        // 0x137744: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137740) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x137748u;
    // 0x137748: 0x10460014  beq         $v0, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x137748u;
    {
        const bool branch_taken_0x137748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x13774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137748u;
        // 0x13774c: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137748) {
            ctx->pc = 0x13779Cu;
            return;
        }
    }
    ctx->pc = 0x137750u;
    // 0x137750: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x137750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x137754: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x137754u;
    {
        const bool branch_taken_0x137754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137754) {
            ctx->pc = 0x137758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137754u;
            // 0x137758: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1377A0u;
            return;
        }
    }
    ctx->pc = 0x13775Cu;
    // 0x13775c: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x13775cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x137760: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x137760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137764: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x137764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x137768: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x137768u;
    {
        const bool branch_taken_0x137768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137768u;
        // 0x13776c: 0x661024  and         $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137768) {
            ctx->pc = 0x137780u;
            return;
        }
    }
    ctx->pc = 0x137770u;
    // 0x137770: 0x8ca200d4  lw          $v0, 0xD4($a1)
    ctx->pc = 0x137770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x137774: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x137774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x137778: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x137778u;
    {
        const bool branch_taken_0x137778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137778u;
        // 0x13777c: 0x661024  and         $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137778) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x137780u;
}
