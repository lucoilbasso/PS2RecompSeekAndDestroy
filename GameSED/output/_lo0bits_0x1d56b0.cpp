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

// Function: _lo0bits
// Address: 0x1d56b0 - 0x1d576c
void _lo0bits_0x1d56b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lo0bits_0x1d56b0");
#endif

    ctx->pc = 0x1d56b0u;

    // 0x1d56b0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d56b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d56b4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1d56b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1d56b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D56B8u;
    {
        const bool branch_taken_0x1d56b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56B8u;
        // 0x1d56bc: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56b8) {
            ctx->pc = 0x1D56F0u;
            goto label_1d56f0;
        }
    }
    ctx->pc = 0x1D56C0u;
    // 0x1d56c0: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D56C0u;
    {
        const bool branch_taken_0x1d56c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56C0u;
        // 0x1d56c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56c0) {
            ctx->pc = 0x1D5764u;
            goto label_1d5764;
        }
    }
    ctx->pc = 0x1D56C8u;
    // 0x1d56c8: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x1d56c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1d56cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D56CCu;
    {
        const bool branch_taken_0x1d56cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56CCu;
        // 0x1d56d0: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56cc) {
            ctx->pc = 0x1D56E0u;
            goto label_1d56e0;
        }
    }
    ctx->pc = 0x1D56D4u;
    // 0x1d56d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d56d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D56D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56D8u;
        // 0x1d56dc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D56D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D56E0u;
label_1d56e0:
    // 0x1d56e0: 0x51882  srl         $v1, $a1, 2
    ctx->pc = 0x1d56e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x1d56e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d56e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D56E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56E8u;
        // 0x1d56ec: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D56E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D56F0u;
label_1d56f0:
    // 0x1d56f0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1d56f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d56f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D56F4u;
    {
        const bool branch_taken_0x1d56f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56F4u;
        // 0x1d56f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56f4) {
            ctx->pc = 0x1D5704u;
            goto label_1d5704;
        }
    }
    ctx->pc = 0x1D56FCu;
    // 0x1d56fc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1d56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d5700: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x1d5700u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_1d5704:
    // 0x1d5704: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1d5704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d5708: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5708u;
    {
        const bool branch_taken_0x1d5708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5708u;
        // 0x1d570c: 0x30a2000f  andi        $v0, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5708) {
            ctx->pc = 0x1D571Cu;
            goto label_1d571c;
        }
    }
    ctx->pc = 0x1D5710u;
    // 0x1d5710: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d5710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d5714: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x1d5714u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x1d5718: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x1d5718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_1d571c:
    // 0x1d571c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D571Cu;
    {
        const bool branch_taken_0x1d571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D571Cu;
        // 0x1d5720: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d571c) {
            ctx->pc = 0x1D5730u;
            goto label_1d5730;
        }
    }
    ctx->pc = 0x1D5724u;
    // 0x1d5724: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1d5724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1d5728: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x1d5728u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x1d572c: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x1d572cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_1d5730:
    // 0x1d5730: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5730u;
    {
        const bool branch_taken_0x1d5730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5730u;
        // 0x1d5734: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5730) {
            ctx->pc = 0x1D5744u;
            goto label_1d5744;
        }
    }
    ctx->pc = 0x1D5738u;
    // 0x1d5738: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1d5738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1d573c: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x1d573cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x1d5740: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1d5740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1d5744:
    // 0x1d5744: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5744u;
    {
        const bool branch_taken_0x1d5744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5744) {
            ctx->pc = 0x1D5748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5744u;
            // 0x1d5748: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5760u;
            goto label_1d5760;
        }
    }
    ctx->pc = 0x1D574Cu;
    // 0x1d574c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x1d574cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1d5750: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d5750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d5754: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5754u;
    {
        const bool branch_taken_0x1d5754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5754u;
        // 0x1d5758: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5754) {
            ctx->pc = 0x1D5764u;
            goto label_1d5764;
        }
    }
    ctx->pc = 0x1D575Cu;
    // 0x1d575c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d575cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1d5760:
    // 0x1d5760: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1d5760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d5764:
    // 0x1d5764: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D576Cu;
}
