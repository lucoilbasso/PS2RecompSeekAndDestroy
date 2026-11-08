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

// Function: Cmd_LOAD_DATA_Entry__FP15BsSCDEntControl
// Address: 0x100c18 - 0x100cfc
void Cmd_LOAD_DATA_Entry__FP15BsSCDEntControl_0x100c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_DATA_Entry__FP15BsSCDEntControl_0x100c18");
#endif

    switch (ctx->pc) {
        case 0x100c44u: goto label_100c44;
        case 0x100c50u: goto label_100c50;
        case 0x100c5cu: goto label_100c5c;
        case 0x100cb4u: goto label_100cb4;
        case 0x100cc4u: goto label_100cc4;
        case 0x100cdcu: goto label_100cdc;
        default: break;
    }

    ctx->pc = 0x100c18u;

    // 0x100c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x100c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x100c28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x100c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x100c2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x100c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x100c30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x100c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x100c34: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x100c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x100c38: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x100c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x100c3c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x100C3Cu;
    SET_GPR_U32(ctx, 31, 0x100C44u);
    ctx->pc = 0x100C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C3Cu;
    // 0x100c40: 0x8c540044  lw          $s4, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x100C3Cu, 0x100C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C44u;
label_100c44:
    // 0x100c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c48: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x100C48u;
    SET_GPR_U32(ctx, 31, 0x100C50u);
    ctx->pc = 0x100C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C48u;
    // 0x100c4c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x100C48u, 0x100C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C50u;
label_100c50:
    // 0x100c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c54: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x100C54u;
    SET_GPR_U32(ctx, 31, 0x100C5Cu);
    ctx->pc = 0x100C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C54u;
    // 0x100c58: 0x28203  sra         $s0, $v0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x100C54u, 0x100C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C5Cu;
label_100c5c:
    // 0x100c5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x100c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100c64: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x100C64u;
    {
        const bool branch_taken_0x100c64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x100C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C64u;
        // 0x100c68: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c64) {
            ctx->pc = 0x100C80u;
            goto label_100c80;
        }
    }
    ctx->pc = 0x100C6Cu;
    // 0x100c6c: 0x12030008  beq         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x100C6Cu;
    {
        const bool branch_taken_0x100c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x100C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C6Cu;
        // 0x100c70: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c6c) {
            ctx->pc = 0x100C90u;
            goto label_100c90;
        }
    }
    ctx->pc = 0x100C74u;
    // 0x100c74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x100C74u;
    {
        const bool branch_taken_0x100c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C74u;
        // 0x100c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c74) {
            ctx->pc = 0x100CA0u;
            goto label_100ca0;
        }
    }
    ctx->pc = 0x100C7Cu;
    // 0x100c7c: 0x0  nop
    ctx->pc = 0x100c7cu;
    // NOP
label_100c80:
    // 0x100c80: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x100c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x100c84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x100C84u;
    {
        const bool branch_taken_0x100c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C84u;
        // 0x100c88: 0x8c510170  lw          $s1, 0x170($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c84) {
            ctx->pc = 0x100CB4u;
            goto label_100cb4;
        }
    }
    ctx->pc = 0x100C8Cu;
    // 0x100c8c: 0x0  nop
    ctx->pc = 0x100c8cu;
    // NOP
label_100c90:
    // 0x100c90: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x100c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x100c94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x100C94u;
    {
        const bool branch_taken_0x100c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C94u;
        // 0x100c98: 0x8c510374  lw          $s1, 0x374($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c94) {
            ctx->pc = 0x100CB4u;
            goto label_100cb4;
        }
    }
    ctx->pc = 0x100C9Cu;
    // 0x100c9c: 0x0  nop
    ctx->pc = 0x100c9cu;
    // NOP
label_100ca0:
    // 0x100ca0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x100ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x100ca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ca8: 0x24a51968  addiu       $a1, $a1, 0x1968
    ctx->pc = 0x100ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6504));
    // 0x100cac: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x100CACu;
    SET_GPR_U32(ctx, 31, 0x100CB4u);
    ctx->pc = 0x100CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100CACu;
    // 0x100cb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x100CACu, 0x100CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100CB4u;
label_100cb4:
    // 0x100cb4: 0x8e900020  lw          $s0, 0x20($s4)
    ctx->pc = 0x100cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x100cb8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x100cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x100cbc: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x100CBCu;
    SET_GPR_U32(ctx, 31, 0x100CC4u);
    ctx->pc = 0x100CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100CBCu;
    // 0x100cc0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x100CBCu, 0x100CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100CC4u;
label_100cc4:
    // 0x100cc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x100cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x100cc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x100cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ccc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x100cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100cd4: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x100CD4u;
    SET_GPR_U32(ctx, 31, 0x100CDCu);
    ctx->pc = 0x100CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100CD4u;
    // 0x100cd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x100CD4u, 0x100CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100CDCu;
label_100cdc:
    // 0x100cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100ce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x100ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100ce4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x100ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100ce8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x100ce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x100cec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x100cecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100cf0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x100cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x100cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x100CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CF4u;
        // 0x100cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100CFCu;
}
