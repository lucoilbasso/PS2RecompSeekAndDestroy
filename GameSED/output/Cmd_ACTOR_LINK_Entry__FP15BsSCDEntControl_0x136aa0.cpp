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

// Function: Cmd_ACTOR_LINK_Entry__FP15BsSCDEntControl
// Address: 0x136aa0 - 0x136b98
void Cmd_ACTOR_LINK_Entry__FP15BsSCDEntControl_0x136aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_LINK_Entry__FP15BsSCDEntControl_0x136aa0");
#endif

    switch (ctx->pc) {
        case 0x136aa0u: goto label_136aa0;
        case 0x136aa4u: goto label_136aa4;
        case 0x136aa8u: goto label_136aa8;
        case 0x136aacu: goto label_136aac;
        case 0x136ab0u: goto label_136ab0;
        case 0x136ab4u: goto label_136ab4;
        case 0x136ab8u: goto label_136ab8;
        case 0x136abcu: goto label_136abc;
        case 0x136ac0u: goto label_136ac0;
        case 0x136ac4u: goto label_136ac4;
        case 0x136ac8u: goto label_136ac8;
        case 0x136accu: goto label_136acc;
        case 0x136ad0u: goto label_136ad0;
        case 0x136ad4u: goto label_136ad4;
        case 0x136ad8u: goto label_136ad8;
        case 0x136adcu: goto label_136adc;
        case 0x136ae0u: goto label_136ae0;
        case 0x136ae4u: goto label_136ae4;
        case 0x136ae8u: goto label_136ae8;
        case 0x136aecu: goto label_136aec;
        case 0x136af0u: goto label_136af0;
        case 0x136af4u: goto label_136af4;
        case 0x136af8u: goto label_136af8;
        case 0x136afcu: goto label_136afc;
        case 0x136b00u: goto label_136b00;
        case 0x136b04u: goto label_136b04;
        case 0x136b08u: goto label_136b08;
        case 0x136b0cu: goto label_136b0c;
        case 0x136b10u: goto label_136b10;
        case 0x136b14u: goto label_136b14;
        case 0x136b18u: goto label_136b18;
        case 0x136b1cu: goto label_136b1c;
        case 0x136b20u: goto label_136b20;
        case 0x136b24u: goto label_136b24;
        case 0x136b28u: goto label_136b28;
        case 0x136b2cu: goto label_136b2c;
        case 0x136b30u: goto label_136b30;
        case 0x136b34u: goto label_136b34;
        case 0x136b38u: goto label_136b38;
        case 0x136b3cu: goto label_136b3c;
        case 0x136b40u: goto label_136b40;
        case 0x136b44u: goto label_136b44;
        case 0x136b48u: goto label_136b48;
        case 0x136b4cu: goto label_136b4c;
        case 0x136b50u: goto label_136b50;
        case 0x136b54u: goto label_136b54;
        case 0x136b58u: goto label_136b58;
        case 0x136b5cu: goto label_136b5c;
        case 0x136b60u: goto label_136b60;
        case 0x136b64u: goto label_136b64;
        case 0x136b68u: goto label_136b68;
        case 0x136b6cu: goto label_136b6c;
        case 0x136b70u: goto label_136b70;
        case 0x136b74u: goto label_136b74;
        case 0x136b78u: goto label_136b78;
        case 0x136b7cu: goto label_136b7c;
        case 0x136b80u: goto label_136b80;
        case 0x136b84u: goto label_136b84;
        case 0x136b88u: goto label_136b88;
        case 0x136b8cu: goto label_136b8c;
        case 0x136b90u: goto label_136b90;
        case 0x136b94u: goto label_136b94;
        default: break;
    }

    ctx->pc = 0x136aa0u;

label_136aa0:
    // 0x136aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_136aa4:
    // 0x136aa4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x136aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_136aa8:
    // 0x136aa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_136aac:
    // 0x136aac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_136ab0:
    // 0x136ab0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x136ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136ab4:
    // 0x136ab4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_136ab8:
    // 0x136ab8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x136ab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136abc:
    // 0x136abc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_136ac0:
    // 0x136ac0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_136ac4:
    // 0x136ac4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_136ac8:
    // 0x136ac8: 0xc06a26e  jal         func_1A89B8
label_136acc:
    if (ctx->pc == 0x136ACCu) {
        ctx->pc = 0x136ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AC8u;
        // 0x136acc: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AD0u;
        goto label_136ad0;
    }
    ctx->pc = 0x136AC8u;
    SET_GPR_U32(ctx, 31, 0x136AD0u);
    ctx->pc = 0x136ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AC8u;
    // 0x136acc: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x136AC8u, 0x136AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AD0u;
label_136ad0:
    // 0x136ad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x136ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136ad4:
    // 0x136ad4: 0xc04ca86  jal         func_132A18
label_136ad8:
    if (ctx->pc == 0x136AD8u) {
        ctx->pc = 0x136AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AD4u;
        // 0x136ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136ADCu;
        goto label_136adc;
    }
    ctx->pc = 0x136AD4u;
    SET_GPR_U32(ctx, 31, 0x136ADCu);
    ctx->pc = 0x136AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AD4u;
    // 0x136ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A18u, 0x136AD4u, 0x136ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136ADCu;
label_136adc:
    // 0x136adc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x136adcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_136ae0:
    // 0x136ae0: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_136ae4:
    if (ctx->pc == 0x136AE4u) {
        ctx->pc = 0x136AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AE0u;
        // 0x136ae4: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AE8u;
        goto label_136ae8;
    }
    ctx->pc = 0x136AE0u;
    {
        const bool branch_taken_0x136ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x136AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AE0u;
        // 0x136ae4: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ae0) {
            ctx->pc = 0x136B7Cu;
            goto label_136b7c;
        }
    }
    ctx->pc = 0x136AE8u;
label_136ae8:
    // 0x136ae8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x136ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_136aec:
    // 0x136aec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x136aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_136af0:
    // 0x136af0: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
label_136af4:
    if (ctx->pc == 0x136AF4u) {
        ctx->pc = 0x136AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AF0u;
        // 0x136af4: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AF8u;
        goto label_136af8;
    }
    ctx->pc = 0x136AF0u;
    {
        const bool branch_taken_0x136af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x136af0) {
            ctx->pc = 0x136AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136AF0u;
            // 0x136af4: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x136B08u;
            goto label_136b08;
        }
    }
    ctx->pc = 0x136AF8u;
label_136af8:
    // 0x136af8: 0xc06a26e  jal         func_1A89B8
label_136afc:
    if (ctx->pc == 0x136AFCu) {
        ctx->pc = 0x136AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AF8u;
        // 0x136afc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B00u;
        goto label_136b00;
    }
    ctx->pc = 0x136AF8u;
    SET_GPR_U32(ctx, 31, 0x136B00u);
    ctx->pc = 0x136AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AF8u;
    // 0x136afc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x136AF8u, 0x136B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B00u;
label_136b00:
    // 0x136b00: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x136b00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_136b04:
    // 0x136b04: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x136b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_136b08:
    // 0x136b08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_136b0c:
    if (ctx->pc == 0x136B0Cu) {
        ctx->pc = 0x136B10u;
        goto label_136b10;
    }
    ctx->pc = 0x136B08u;
    {
        const bool branch_taken_0x136b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b08) {
            ctx->pc = 0x136B40u;
            goto label_136b40;
        }
    }
    ctx->pc = 0x136B10u;
label_136b10:
    // 0x136b10: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x136b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_136b14:
    // 0x136b14: 0xc0684de  jal         func_1A1378
label_136b18:
    if (ctx->pc == 0x136B18u) {
        ctx->pc = 0x136B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B14u;
        // 0x136b18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B1Cu;
        goto label_136b1c;
    }
    ctx->pc = 0x136B14u;
    SET_GPR_U32(ctx, 31, 0x136B1Cu);
    ctx->pc = 0x136B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B14u;
    // 0x136b18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1378u, 0x136B14u, 0x136B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B1Cu;
label_136b1c:
    // 0x136b1c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_136b20:
    if (ctx->pc == 0x136B20u) {
        ctx->pc = 0x136B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B1Cu;
        // 0x136b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B24u;
        goto label_136b24;
    }
    ctx->pc = 0x136B1Cu;
    {
        const bool branch_taken_0x136b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B1Cu;
        // 0x136b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b1c) {
            ctx->pc = 0x136B40u;
            goto label_136b40;
        }
    }
    ctx->pc = 0x136B24u;
label_136b24:
    // 0x136b24: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x136b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_136b28:
    // 0x136b28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136b2c:
    // 0x136b2c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x136b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_136b30:
    // 0x136b30: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x136b30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_136b34:
    // 0x136b34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x136b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136b38:
    // 0x136b38: 0x60f809  jalr        $v1
label_136b3c:
    if (ctx->pc == 0x136B3Cu) {
        ctx->pc = 0x136B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B38u;
        // 0x136b3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B40u;
        goto label_136b40;
    }
    ctx->pc = 0x136B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136B40u);
        ctx->pc = 0x136B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B38u;
        // 0x136b3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136B38u, 0x136B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136B40u;
label_136b40:
    // 0x136b40: 0x5a60000f  blezl       $s3, . + 4 + (0xF << 2)
label_136b44:
    if (ctx->pc == 0x136B44u) {
        ctx->pc = 0x136B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B40u;
        // 0x136b44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B48u;
        goto label_136b48;
    }
    ctx->pc = 0x136B40u;
    {
        const bool branch_taken_0x136b40 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x136b40) {
            ctx->pc = 0x136B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136B40u;
            // 0x136b44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136B80u;
            goto label_136b80;
        }
    }
    ctx->pc = 0x136B48u;
label_136b48:
    // 0x136b48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x136b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_136b4c:
    // 0x136b4c: 0xc0684de  jal         func_1A1378
label_136b50:
    if (ctx->pc == 0x136B50u) {
        ctx->pc = 0x136B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B4Cu;
        // 0x136b50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B54u;
        goto label_136b54;
    }
    ctx->pc = 0x136B4Cu;
    SET_GPR_U32(ctx, 31, 0x136B54u);
    ctx->pc = 0x136B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B4Cu;
    // 0x136b50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1378u, 0x136B4Cu, 0x136B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B54u;
label_136b54:
    // 0x136b54: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_136b58:
    if (ctx->pc == 0x136B58u) {
        ctx->pc = 0x136B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B54u;
        // 0x136b58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B5Cu;
        goto label_136b5c;
    }
    ctx->pc = 0x136B54u;
    {
        const bool branch_taken_0x136b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136b54) {
            ctx->pc = 0x136B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136B54u;
            // 0x136b58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136B80u;
            goto label_136b80;
        }
    }
    ctx->pc = 0x136B5Cu;
label_136b5c:
    // 0x136b5c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x136b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_136b60:
    // 0x136b60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x136b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136b64:
    // 0x136b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136b68:
    // 0x136b68: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x136b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_136b6c:
    // 0x136b6c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x136b6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_136b70:
    // 0x136b70: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x136b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136b74:
    // 0x136b74: 0x60f809  jalr        $v1
label_136b78:
    if (ctx->pc == 0x136B78u) {
        ctx->pc = 0x136B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B74u;
        // 0x136b78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B7Cu;
        goto label_136b7c;
    }
    ctx->pc = 0x136B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136B7Cu);
        ctx->pc = 0x136B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B74u;
        // 0x136b78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136B74u, 0x136B7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136B7Cu;
label_136b7c:
    // 0x136b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_136b80:
    // 0x136b80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_136b84:
    // 0x136b84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x136b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_136b88:
    // 0x136b88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x136b88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_136b8c:
    // 0x136b8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_136b90:
    // 0x136b90: 0x3e00008  jr          $ra
label_136b94:
    if (ctx->pc == 0x136B94u) {
        ctx->pc = 0x136B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B90u;
        // 0x136b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B98u;
        goto label_fallthrough_0x136b90;
    }
    ctx->pc = 0x136B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B90u;
        // 0x136b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x136b90:
    ctx->pc = 0x136B98u;
}
