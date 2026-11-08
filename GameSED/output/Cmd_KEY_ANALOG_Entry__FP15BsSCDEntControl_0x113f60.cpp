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

// Function: Cmd_KEY_ANALOG_Entry__FP15BsSCDEntControl
// Address: 0x113f60 - 0x114064
void Cmd_KEY_ANALOG_Entry__FP15BsSCDEntControl_0x113f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_KEY_ANALOG_Entry__FP15BsSCDEntControl_0x113f60");
#endif

    switch (ctx->pc) {
        case 0x113f84u: goto label_113f84;
        case 0x113f90u: goto label_113f90;
        case 0x113facu: goto label_113fac;
        default: break;
    }

    ctx->pc = 0x113f60u;

    // 0x113f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x113f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x113f70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x113f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x113f74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x113f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x113f78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113f7c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x113F7Cu;
    SET_GPR_U32(ctx, 31, 0x113F84u);
    ctx->pc = 0x113F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F7Cu;
    // 0x113f80: 0x3c128000  lui         $s2, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x113F7Cu, 0x113F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F84u;
label_113f84:
    // 0x113f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f88: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x113F88u;
    SET_GPR_U32(ctx, 31, 0x113F90u);
    ctx->pc = 0x113F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F88u;
    // 0x113f8c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x113F88u, 0x113F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F90u;
label_113f90:
    // 0x113f90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f94: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x113f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x113f98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x113f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113f9c: 0x10720004  beq         $v1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x113F9Cu;
    {
        const bool branch_taken_0x113f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x113FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F9Cu;
        // 0x113fa0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f9c) {
            ctx->pc = 0x113FB0u;
            goto label_113fb0;
        }
    }
    ctx->pc = 0x113FA4u;
    // 0x113fa4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x113FA4u;
    SET_GPR_U32(ctx, 31, 0x113FACu);
    ctx->pc = 0x113FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FA4u;
    // 0x113fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x113FA4u, 0x113FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FACu;
label_113fac:
    // 0x113fac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x113facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_113fb0:
    // 0x113fb0: 0x62027  nor         $a0, $zero, $a2
    ctx->pc = 0x113fb0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x113fb4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x113fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113fb8: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x113fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x113fbc: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x113fbcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x113fc0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x113fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x113fc4: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x113fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x113fc8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x113fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x113fcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x113fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x113fd0: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x113fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x113fd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x113fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113fd8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x113fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x113fdc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x113FDCu;
    {
        const bool branch_taken_0x113fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FDCu;
        // 0x113fe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fdc) {
            ctx->pc = 0x114044u;
            goto label_114044;
        }
    }
    ctx->pc = 0x113FE4u;
    // 0x113fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113fe8: 0x1222000f  beq         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x113FE8u;
    {
        const bool branch_taken_0x113fe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x113FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FE8u;
        // 0x113fec: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fe8) {
            ctx->pc = 0x114028u;
            goto label_114028;
        }
    }
    ctx->pc = 0x113FF0u;
    // 0x113ff0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113FF0u;
    {
        const bool branch_taken_0x113ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FF0u;
        // 0x113ff4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ff0) {
            ctx->pc = 0x114008u;
            goto label_114008;
        }
    }
    ctx->pc = 0x113FF8u;
    // 0x113ff8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x113FF8u;
    {
        const bool branch_taken_0x113ff8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FF8u;
        // 0x113ffc: 0x61200  sll         $v0, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ff8) {
            ctx->pc = 0x114020u;
            goto label_114020;
        }
    }
    ctx->pc = 0x114000u;
    // 0x114000: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x114000u;
    {
        const bool branch_taken_0x114000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114000u;
        // 0x114004: 0x24468000  addiu       $a2, $v0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114000) {
            ctx->pc = 0x114044u;
            goto label_114044;
        }
    }
    ctx->pc = 0x114008u;
label_114008:
    // 0x114008: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x114008u;
    {
        const bool branch_taken_0x114008 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114008u;
        // 0x11400c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114008) {
            ctx->pc = 0x114030u;
            goto label_114030;
        }
    }
    ctx->pc = 0x114010u;
    // 0x114010: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x114010u;
    {
        const bool branch_taken_0x114010 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x114014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114010u;
        // 0x114014: 0x61200  sll         $v0, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114010) {
            ctx->pc = 0x114038u;
            goto label_114038;
        }
    }
    ctx->pc = 0x114018u;
    // 0x114018: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x114018u;
    {
        const bool branch_taken_0x114018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114018u;
        // 0x11401c: 0x24468000  addiu       $a2, $v0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114018) {
            ctx->pc = 0x114044u;
            goto label_114044;
        }
    }
    ctx->pc = 0x114020u;
label_114020:
    // 0x114020: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114020u;
    {
        const bool branch_taken_0x114020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114020u;
        // 0x114024: 0x90660010  lbu         $a2, 0x10($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114020) {
            ctx->pc = 0x11403Cu;
            goto label_11403c;
        }
    }
    ctx->pc = 0x114028u;
label_114028:
    // 0x114028: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x114028u;
    {
        const bool branch_taken_0x114028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114028u;
        // 0x11402c: 0x90660011  lbu         $a2, 0x11($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114028) {
            ctx->pc = 0x11403Cu;
            goto label_11403c;
        }
    }
    ctx->pc = 0x114030u;
label_114030:
    // 0x114030: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x114030u;
    {
        const bool branch_taken_0x114030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114030u;
        // 0x114034: 0x90660012  lbu         $a2, 0x12($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114030) {
            ctx->pc = 0x11403Cu;
            goto label_11403c;
        }
    }
    ctx->pc = 0x114038u;
label_114038:
    // 0x114038: 0x90660013  lbu         $a2, 0x13($v1)
    ctx->pc = 0x114038u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
label_11403c:
    // 0x11403c: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x11403cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x114040: 0x24468000  addiu       $a2, $v0, -0x8000
    ctx->pc = 0x114040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
label_114044:
    // 0x114044: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x114044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x114048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11404c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11404cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114050: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x114050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114054: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x114054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x114058: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11405c: 0x3e00008  jr          $ra
    ctx->pc = 0x11405Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11405Cu;
        // 0x114060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11405Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114064u;
}
