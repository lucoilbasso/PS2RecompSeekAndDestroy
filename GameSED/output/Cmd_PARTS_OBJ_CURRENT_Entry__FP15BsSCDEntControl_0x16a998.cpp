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

// Function: Cmd_PARTS_OBJ_CURRENT_Entry__FP15BsSCDEntControl
// Address: 0x16a998 - 0x16abc8
void Cmd_PARTS_OBJ_CURRENT_Entry__FP15BsSCDEntControl_0x16a998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARTS_OBJ_CURRENT_Entry__FP15BsSCDEntControl_0x16a998");
#endif

    switch (ctx->pc) {
        case 0x16a9d0u: goto label_16a9d0;
        case 0x16a9dcu: goto label_16a9dc;
        case 0x16aa7cu: goto label_16aa7c;
        case 0x16aa98u: goto label_16aa98;
        case 0x16ab98u: goto label_16ab98;
        default: break;
    }

    ctx->pc = 0x16a998u;

    // 0x16a998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16a998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16a99c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a9a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a9a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a9a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16a9a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16a9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16a9b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16a9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16a9b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16a9b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a9c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16a9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16a9c4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x16a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x16a9c8: 0xc04110c  jal         func_104430
    ctx->pc = 0x16A9C8u;
    SET_GPR_U32(ctx, 31, 0x16A9D0u);
    ctx->pc = 0x16A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9C8u;
    // 0x16a9cc: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x16A9C8u, 0x16A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9D0u;
label_16a9d0:
    // 0x16a9d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9d4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16A9D4u;
    SET_GPR_U32(ctx, 31, 0x16A9DCu);
    ctx->pc = 0x16A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9D4u;
    // 0x16a9d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16A9D4u, 0x16A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9DCu;
label_16a9dc:
    // 0x16a9dc: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x16a9dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16a9e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9e4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x16a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x16a9e8: 0x24022846  addiu       $v0, $zero, 0x2846
    ctx->pc = 0x16a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10310));
    // 0x16a9ec: 0x14820052  bne         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x16A9ECu;
    {
        const bool branch_taken_0x16a9ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9ECu;
        // 0x16a9f0: 0x8c73b830  lw          $s3, -0x47D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a9ec) {
            ctx->pc = 0x16AB38u;
            goto label_16ab38;
        }
    }
    ctx->pc = 0x16A9F4u;
    // 0x16a9f4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x16a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x16a9f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16a9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9fc: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16A9FCu;
    {
        const bool branch_taken_0x16a9fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9FCu;
        // 0x16aa00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a9fc) {
            ctx->pc = 0x16AA40u;
            goto label_16aa40;
        }
    }
    ctx->pc = 0x16AA04u;
    // 0x16aa04: 0x28a20016  slti        $v0, $a1, 0x16
    ctx->pc = 0x16aa04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x16aa08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16AA08u;
    {
        const bool branch_taken_0x16aa08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA08u;
        // 0x16aa0c: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa08) {
            ctx->pc = 0x16AA28u;
            goto label_16aa28;
        }
    }
    ctx->pc = 0x16AA10u;
    // 0x16aa10: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x16aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16aa14: 0x50a2000d  beql        $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16AA14u;
    {
        const bool branch_taken_0x16aa14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x16aa14) {
            ctx->pc = 0x16AA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AA14u;
            // 0x16aa18: 0x26301200  addiu       $s0, $s1, 0x1200 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4608));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AA4Cu;
            goto label_16aa4c;
        }
    }
    ctx->pc = 0x16AA1Cu;
    // 0x16aa1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16AA1Cu;
    {
        const bool branch_taken_0x16aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa1c) {
            ctx->pc = 0x16AA4Cu;
            goto label_16aa4c;
        }
    }
    ctx->pc = 0x16AA24u;
    // 0x16aa24: 0x0  nop
    ctx->pc = 0x16aa24u;
    // NOP
label_16aa28:
    // 0x16aa28: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16AA28u;
    {
        const bool branch_taken_0x16aa28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA28u;
        // 0x16aa2c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa28) {
            ctx->pc = 0x16AA48u;
            goto label_16aa48;
        }
    }
    ctx->pc = 0x16AA30u;
    // 0x16aa30: 0x50a20006  beql        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AA30u;
    {
        const bool branch_taken_0x16aa30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x16aa30) {
            ctx->pc = 0x16AA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AA30u;
            // 0x16aa34: 0x26301224  addiu       $s0, $s1, 0x1224 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4644));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AA4Cu;
            goto label_16aa4c;
        }
    }
    ctx->pc = 0x16AA38u;
    // 0x16aa38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AA38u;
    {
        const bool branch_taken_0x16aa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa38) {
            ctx->pc = 0x16AA4Cu;
            goto label_16aa4c;
        }
    }
    ctx->pc = 0x16AA40u;
label_16aa40:
    // 0x16aa40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16AA40u;
    {
        const bool branch_taken_0x16aa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA40u;
        // 0x16aa44: 0x26301218  addiu       $s0, $s1, 0x1218 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa40) {
            ctx->pc = 0x16AA4Cu;
            goto label_16aa4c;
        }
    }
    ctx->pc = 0x16AA48u;
label_16aa48:
    // 0x16aa48: 0x2630120c  addiu       $s0, $s1, 0x120C
    ctx->pc = 0x16aa48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4620));
label_16aa4c:
    // 0x16aa4c: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x16AA4Cu;
    {
        const bool branch_taken_0x16aa4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA4Cu;
        // 0x16aa50: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa4c) {
            ctx->pc = 0x16AADCu;
            goto label_16aadc;
        }
    }
    ctx->pc = 0x16AA54u;
    // 0x16aa54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16aa58: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x16aa58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x16aa5c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16AA5Cu;
    {
        const bool branch_taken_0x16aa5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA5Cu;
        // 0x16aa60: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa5c) {
            ctx->pc = 0x16AAD8u;
            goto label_16aad8;
        }
    }
    ctx->pc = 0x16AA64u;
    // 0x16aa64: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x16aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x16aa68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16aa6c: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16AA6Cu;
    {
        const bool branch_taken_0x16aa6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x16AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA6Cu;
        // 0x16aa70: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa6c) {
            ctx->pc = 0x16AABCu;
            goto label_16aabc;
        }
    }
    ctx->pc = 0x16AA74u;
    // 0x16aa74: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16AA74u;
    SET_GPR_U32(ctx, 31, 0x16AA7Cu);
    ctx->pc = 0x16AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA74u;
    // 0x16aa78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16AA74u, 0x16AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA7Cu;
label_16aa7c:
    // 0x16aa7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16aa7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16aa84: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x16aa84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16aa88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16AA88u;
    {
        const bool branch_taken_0x16aa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA88u;
        // 0x16aa8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa88) {
            ctx->pc = 0x16AAB8u;
            goto label_16aab8;
        }
    }
    ctx->pc = 0x16AA90u;
    // 0x16aa90: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16AA90u;
    {
        const bool branch_taken_0x16aa90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA90u;
        // 0x16aa94: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa90) {
            ctx->pc = 0x16AAB4u;
            goto label_16aab4;
        }
    }
    ctx->pc = 0x16AA98u;
label_16aa98:
    // 0x16aa98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16aa9c: 0x0  nop
    ctx->pc = 0x16aa9cu;
    // NOP
    // 0x16aaa0: 0x0  nop
    ctx->pc = 0x16aaa0u;
    // NOP
    // 0x16aaa4: 0x0  nop
    ctx->pc = 0x16aaa4u;
    // NOP
    // 0x16aaa8: 0x0  nop
    ctx->pc = 0x16aaa8u;
    // NOP
    // 0x16aaac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16AAACu;
    {
        const bool branch_taken_0x16aaac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAACu;
        // 0x16aab0: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aaac) {
            ctx->pc = 0x16AA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16aa98;
        }
    }
    ctx->pc = 0x16AAB4u;
label_16aab4:
    // 0x16aab4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16aab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16aab8:
    // 0x16aab8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16aab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16aabc:
    // 0x16aabc: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x16AABCu;
    {
        const bool branch_taken_0x16aabc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AABCu;
        // 0x16aac0: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aabc) {
            ctx->pc = 0x16AB3Cu;
            goto label_16ab3c;
        }
    }
    ctx->pc = 0x16AAC4u;
    // 0x16aac4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x16aac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16aac8: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x16aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x16aacc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16AACCu;
    {
        const bool branch_taken_0x16aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AACCu;
        // 0x16aad0: 0x8cb40014  lw          $s4, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aacc) {
            ctx->pc = 0x16AB38u;
            goto label_16ab38;
        }
    }
    ctx->pc = 0x16AAD4u;
    // 0x16aad4: 0x0  nop
    ctx->pc = 0x16aad4u;
    // NOP
label_16aad8:
    // 0x16aad8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x16aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16aadc:
    // 0x16aadc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16aae0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16aae4: 0x8c420c0c  lw          $v0, 0xC0C($v0)
    ctx->pc = 0x16aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3084)));
    // 0x16aae8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AAE8u;
    {
        const bool branch_taken_0x16aae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAE8u;
        // 0x16aaec: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aae8) {
            ctx->pc = 0x16AB00u;
            goto label_16ab00;
        }
    }
    ctx->pc = 0x16AAF0u;
    // 0x16aaf0: 0x8cc301b4  lw          $v1, 0x1B4($a2)
    ctx->pc = 0x16aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 436)));
    // 0x16aaf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16AAF4u;
    {
        const bool branch_taken_0x16aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAF4u;
        // 0x16aaf8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aaf4) {
            ctx->pc = 0x16AB04u;
            goto label_16ab04;
        }
    }
    ctx->pc = 0x16AAFCu;
    // 0x16aafc: 0x0  nop
    ctx->pc = 0x16aafcu;
    // NOP
label_16ab00:
    // 0x16ab00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16ab00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ab04:
    // 0x16ab04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ab08: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x16ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x16ab0c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16ab0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ab10: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x16ab10u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x16ab14: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x16ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x16ab18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AB18u;
    {
        const bool branch_taken_0x16ab18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB18u;
        // 0x16ab1c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab18) {
            ctx->pc = 0x16AB30u;
            goto label_16ab30;
        }
    }
    ctx->pc = 0x16AB20u;
    // 0x16ab20: 0x8cc301b4  lw          $v1, 0x1B4($a2)
    ctx->pc = 0x16ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 436)));
    // 0x16ab24: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16ab28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16AB28u;
    {
        const bool branch_taken_0x16ab28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB28u;
        // 0x16ab2c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab28) {
            ctx->pc = 0x16AB34u;
            goto label_16ab34;
        }
    }
    ctx->pc = 0x16AB30u;
label_16ab30:
    // 0x16ab30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16ab30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ab34:
    // 0x16ab34: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x16ab34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ab38:
    // 0x16ab38: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x16ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_16ab3c:
    // 0x16ab3c: 0x2463a430  addiu       $v1, $v1, -0x5BD0
    ctx->pc = 0x16ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943792));
    // 0x16ab40: 0x8c621400  lw          $v0, 0x1400($v1)
    ctx->pc = 0x16ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5120)));
    // 0x16ab44: 0x24701400  addiu       $s0, $v1, 0x1400
    ctx->pc = 0x16ab44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x16ab48: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x16ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x16ab4c: 0x1450000e  bne         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x16AB4Cu;
    {
        const bool branch_taken_0x16ab4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x16AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB4Cu;
        // 0x16ab50: 0xac621400  sw          $v0, 0x1400($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab4c) {
            ctx->pc = 0x16AB88u;
            goto label_16ab88;
        }
    }
    ctx->pc = 0x16AB54u;
    // 0x16ab54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ab54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ab58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ab5c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16ab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16ab60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ab60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ab64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16ab64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ab68: 0x24a573b8  addiu       $a1, $a1, 0x73B8
    ctx->pc = 0x16ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29624));
    // 0x16ab6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16ab6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ab70: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x16ab70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x16ab74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16ab74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ab78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16ab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ab7c: 0x8068186  j           func_1A0618
    ctx->pc = 0x16AB7Cu;
    ctx->pc = 0x16AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB7Cu;
    // 0x16ab80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    OMTSuperError__FP5BcObjPci_0x1a0618(rdram, ctx, runtime); return;
    ctx->pc = 0x16AB84u;
    // 0x16ab84: 0x0  nop
    ctx->pc = 0x16ab84u;
    // NOP
label_16ab88:
    // 0x16ab88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16ab8c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x16ab8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x16ab90: 0xc067232  jal         func_19C8C8
    ctx->pc = 0x16AB90u;
    SET_GPR_U32(ctx, 31, 0x16AB98u);
    ctx->pc = 0x16AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB90u;
    // 0x16ab94: 0x2485ffb0  addiu       $a1, $a0, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8C8u, 0x16AB90u, 0x16AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB98u;
label_16ab98:
    // 0x16ab98: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AB98u;
    {
        const bool branch_taken_0x16ab98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab98) {
            ctx->pc = 0x16AB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AB98u;
            // 0x16ab9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ABACu;
            goto label_16abac;
        }
    }
    ctx->pc = 0x16ABA0u;
    // 0x16aba0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16aba4: 0xac540044  sw          $s4, 0x44($v0)
    ctx->pc = 0x16aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 20));
    // 0x16aba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16aba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16abac:
    // 0x16abac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16abacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16abb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16abb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16abb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16abb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16abb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16abb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16abbc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16abbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16abc0: 0x3e00008  jr          $ra
    ctx->pc = 0x16ABC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABC0u;
        // 0x16abc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ABC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ABC8u;
}
