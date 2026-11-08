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

// Function: Cmd_EXT_DATA_REGIST_Entry__FP15BsSCDEntControl
// Address: 0x104c00 - 0x104d1c
void Cmd_EXT_DATA_REGIST_Entry__FP15BsSCDEntControl_0x104c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_EXT_DATA_REGIST_Entry__FP15BsSCDEntControl_0x104c00");
#endif

    switch (ctx->pc) {
        case 0x104c30u: goto label_104c30;
        case 0x104c4cu: goto label_104c4c;
        case 0x104c60u: goto label_104c60;
        case 0x104c6cu: goto label_104c6c;
        case 0x104ca0u: goto label_104ca0;
        case 0x104cd8u: goto label_104cd8;
        case 0x104cecu: goto label_104cec;
        default: break;
    }

    ctx->pc = 0x104c00u;

    // 0x104c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x104c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x104c04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104c08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x104c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x104c10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104c14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104c18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x104c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x104c1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x104c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x104c20: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x104c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x104c24: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x104c24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x104c28: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x104C28u;
    SET_GPR_U32(ctx, 31, 0x104C30u);
    ctx->pc = 0x104C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C28u;
    // 0x104c2c: 0x8e34002c  lw          $s4, 0x2C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x104C28u, 0x104C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C30u;
label_104c30:
    // 0x104c30: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x104c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x104c34: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x104c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x104c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104c3c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104C3Cu;
    {
        const bool branch_taken_0x104c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x104C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C3Cu;
        // 0x104c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c3c) {
            ctx->pc = 0x104C58u;
            goto label_104c58;
        }
    }
    ctx->pc = 0x104C44u;
    // 0x104c44: 0xc06a3ac  jal         func_1A8EB0
    ctx->pc = 0x104C44u;
    SET_GPR_U32(ctx, 31, 0x104C4Cu);
    ctx->pc = 0x1A8EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EB0u, 0x104C44u, 0x104C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C4Cu;
label_104c4c:
    // 0x104c4c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x104C4Cu;
    {
        const bool branch_taken_0x104c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C4Cu;
        // 0x104c50: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c4c) {
            ctx->pc = 0x104CA4u;
            goto label_104ca4;
        }
    }
    ctx->pc = 0x104C54u;
    // 0x104c54: 0x0  nop
    ctx->pc = 0x104c54u;
    // NOP
label_104c58:
    // 0x104c58: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x104C58u;
    SET_GPR_U32(ctx, 31, 0x104C60u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x104C58u, 0x104C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C60u;
label_104c60:
    // 0x104c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c64: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x104C64u;
    SET_GPR_U32(ctx, 31, 0x104C6Cu);
    ctx->pc = 0x104C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C64u;
    // 0x104c68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x104C64u, 0x104C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C6Cu;
label_104c6c:
    // 0x104c6c: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x104c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x104c70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x104c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c74: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x104c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x104c78: 0x2421ef80  addiu       $at, $at, -0x1080
    ctx->pc = 0x104c78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294963072));
    // 0x104c7c: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x104c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x104c80: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x104c80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104c84: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x104c84u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104c88: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x104c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x104c8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x104c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c90: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x104c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x104c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104c98: 0xc06a19a  jal         func_1A8668
    ctx->pc = 0x104C98u;
    SET_GPR_U32(ctx, 31, 0x104CA0u);
    ctx->pc = 0x104C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C98u;
    // 0x104c9c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8668u, 0x104C98u, 0x104CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CA0u;
label_104ca0:
    // 0x104ca0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x104ca0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104ca4:
    // 0x104ca4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x104ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x104ca8: 0x2e630020  sltiu       $v1, $s3, 0x20
    ctx->pc = 0x104ca8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x104cac: 0x3c110026  lui         $s1, 0x26
    ctx->pc = 0x104cacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)38 << 16));
    // 0x104cb0: 0x2631ef80  addiu       $s1, $s1, -0x1080
    ctx->pc = 0x104cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963072));
    // 0x104cb4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x104cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x104cb8: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x104CB8u;
    {
        const bool branch_taken_0x104cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x104cb8) {
            ctx->pc = 0x104CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104CB8u;
            // 0x104cbc: 0xae35000c  sw          $s5, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104CF0u;
            goto label_104cf0;
        }
    }
    ctx->pc = 0x104CC0u;
    // 0x104cc0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x104cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x104cc4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x104cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x104cc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x104cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ccc: 0x24843818  addiu       $a0, $a0, 0x3818
    ctx->pc = 0x104cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14360));
    // 0x104cd0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x104CD0u;
    SET_GPR_U32(ctx, 31, 0x104CD8u);
    ctx->pc = 0x104CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CD0u;
    // 0x104cd4: 0x8c50038c  lw          $s0, 0x38C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x104CD0u, 0x104CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CD8u;
label_104cd8:
    // 0x104cd8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104cdc: 0x2406003d  addiu       $a2, $zero, 0x3D
    ctx->pc = 0x104cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x104ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ce4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x104CE4u;
    SET_GPR_U32(ctx, 31, 0x104CECu);
    ctx->pc = 0x104CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CE4u;
    // 0x104ce8: 0x24a53890  addiu       $a1, $a1, 0x3890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x104CE4u, 0x104CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CECu;
label_104cec:
    // 0x104cec: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x104cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
label_104cf0:
    // 0x104cf0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x104cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x104cf4: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x104cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x104cf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104cfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104d00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104d04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x104d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104d08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x104d08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104d0c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x104d0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x104d10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x104d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104d14: 0x3e00008  jr          $ra
    ctx->pc = 0x104D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D14u;
        // 0x104d18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104D1Cu;
}
