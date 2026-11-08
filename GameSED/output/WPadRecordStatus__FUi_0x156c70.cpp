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

// Function: WPadRecordStatus__FUi
// Address: 0x156c70 - 0x156d30
void WPadRecordStatus__FUi_0x156c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadRecordStatus__FUi_0x156c70");
#endif

    switch (ctx->pc) {
        case 0x156c74u: goto label_156c74;
        default: break;
    }

    ctx->pc = 0x156c70u;

    // 0x156c70: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x156c70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156c74:
    // 0x156c74: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x156c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x156c78: 0x246735e0  addiu       $a3, $v1, 0x35E0
    ctx->pc = 0x156c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 13792));
    // 0x156c7c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x156c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x2635ECu));
    // 0x156c80: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x156c80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2635E4u));
    // 0x156c84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x156c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156c88: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x156c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x156c8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x156c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x156c90: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x156c90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x156c94: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x156C94u;
    {
        const bool branch_taken_0x156c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C94u;
        // 0x156c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c94) {
            ctx->pc = 0x156D28u;
            goto label_156d28;
        }
    }
    ctx->pc = 0x156C9Cu;
    // 0x156c9c: 0x90a60003  lbu         $a2, 0x3($a1)
    ctx->pc = 0x156c9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x156ca0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x156ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x156ca4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x156CA4u;
    {
        const bool branch_taken_0x156ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CA4u;
        // 0x156ca8: 0x2c4400fa  sltiu       $a0, $v0, 0xFA (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)250) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ca4) {
            ctx->pc = 0x156CE8u;
            goto label_156ce8;
        }
    }
    ctx->pc = 0x156CACu;
    // 0x156cac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x156cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x156cb0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x156cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x156cb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x156cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x156cb8: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x156cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x156cbc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x156cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x156cc0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x156cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x156cc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x156cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x156cc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156ccc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x156cccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x156cd0: 0xa0a00007  sb          $zero, 0x7($a1)
    ctx->pc = 0x156cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x156cd4: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x156cd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x156cd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x156cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x156CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CDCu;
        // 0x156ce0: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156CE4u;
    // 0x156ce4: 0x0  nop
    ctx->pc = 0x156ce4u;
    // NOP
label_156ce8:
    // 0x156ce8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x156ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x156cec: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x156cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x156cf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x156cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x156cf4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x156cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x156cf8: 0x54680007  bnel        $v1, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x156CF8u;
    {
        const bool branch_taken_0x156cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x156cf8) {
            ctx->pc = 0x156CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156CF8u;
            // 0x156cfc: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156D18u;
            goto label_156d18;
        }
    }
    ctx->pc = 0x156D00u;
    // 0x156d00: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x156D00u;
    {
        const bool branch_taken_0x156d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d00) {
            ctx->pc = 0x156D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156D00u;
            // 0x156d04: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156D18u;
            goto label_156d18;
        }
    }
    ctx->pc = 0x156D08u;
    // 0x156d08: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x156d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x156d0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x156d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156d10: 0x3e00008  jr          $ra
    ctx->pc = 0x156D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D10u;
        // 0x156d14: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156D18u;
label_156d18:
    // 0x156d18: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x156d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x156d1c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x156d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x156d20: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x156D20u;
    {
        const bool branch_taken_0x156d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D20u;
        // 0x156d24: 0xa0400003  sb          $zero, 0x3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d20) {
            ctx->pc = 0x156C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156c74;
        }
    }
    ctx->pc = 0x156D28u;
label_156d28:
    // 0x156d28: 0x3e00008  jr          $ra
    ctx->pc = 0x156D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156D30u;
}
