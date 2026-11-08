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

// Function: Cmd_SET_ANGLE_Entry__FP15BsSCDEntControl
// Address: 0x111d58 - 0x11243c
void Cmd_SET_ANGLE_Entry__FP15BsSCDEntControl_0x111d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SET_ANGLE_Entry__FP15BsSCDEntControl_0x111d58");
#endif

    switch (ctx->pc) {
        case 0x111d98u: goto label_111d98;
        case 0x111de4u: goto label_111de4;
        case 0x111e08u: goto label_111e08;
        case 0x111e38u: goto label_111e38;
        case 0x111e44u: goto label_111e44;
        case 0x111e5cu: goto label_111e5c;
        case 0x111eacu: goto label_111eac;
        case 0x111eccu: goto label_111ecc;
        case 0x111ef8u: goto label_111ef8;
        case 0x111f1cu: goto label_111f1c;
        case 0x111f28u: goto label_111f28;
        case 0x111f60u: goto label_111f60;
        case 0x111f68u: goto label_111f68;
        case 0x111facu: goto label_111fac;
        case 0x111fb4u: goto label_111fb4;
        case 0x111fd8u: goto label_111fd8;
        case 0x112000u: goto label_112000;
        case 0x112028u: goto label_112028;
        case 0x112050u: goto label_112050;
        case 0x112054u: goto label_112054;
        case 0x112070u: goto label_112070;
        case 0x1120a0u: goto label_1120a0;
        case 0x1120a4u: goto label_1120a4;
        case 0x1120b0u: goto label_1120b0;
        case 0x1120b4u: goto label_1120b4;
        case 0x1120c4u: goto label_1120c4;
        case 0x1120ccu: goto label_1120cc;
        case 0x112128u: goto label_112128;
        case 0x112184u: goto label_112184;
        case 0x11218cu: goto label_11218c;
        case 0x1121e0u: goto label_1121e0;
        case 0x1121e8u: goto label_1121e8;
        case 0x112244u: goto label_112244;
        case 0x11224cu: goto label_11224c;
        case 0x11228cu: goto label_11228c;
        case 0x11229cu: goto label_11229c;
        case 0x1122c0u: goto label_1122c0;
        case 0x1122d0u: goto label_1122d0;
        case 0x1122ecu: goto label_1122ec;
        case 0x112300u: goto label_112300;
        case 0x112328u: goto label_112328;
        case 0x112348u: goto label_112348;
        case 0x112364u: goto label_112364;
        case 0x11238cu: goto label_11238c;
        case 0x112398u: goto label_112398;
        case 0x11240cu: goto label_11240c;
        default: break;
    }

    ctx->pc = 0x111d58u;

    // 0x111d58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x111d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x111d5c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x111d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x111d60: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x111d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x111d64: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x111d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x111d68: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x111d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x111d6c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x111d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x111d70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x111d70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d74: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x111d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x111d78: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x111d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x111d7c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x111d7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d80: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x111d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x111d84: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x111d84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d88: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x111d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x111d8c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x111d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x111d90: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111D90u;
    SET_GPR_U32(ctx, 31, 0x111D98u);
    ctx->pc = 0x111D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111D90u;
    // 0x111d94: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111D90u, 0x111D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D98u;
label_111d98:
    // 0x111d98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x111d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d9c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x111d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x111da0: 0x8c52b830  lw          $s2, -0x47D0($v0)
    ctx->pc = 0x111da0u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x1FB830u));
    // 0x111da4: 0x2e23001a  sltiu       $v1, $s1, 0x1A
    ctx->pc = 0x111da4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x111da8: 0x8f908d10  lw          $s0, -0x72F0($gp)
    ctx->pc = 0x111da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x111dac: 0x26550020  addiu       $s5, $s2, 0x20
    ctx->pc = 0x111dacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x111db0: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x111DB0u;
    {
        const bool branch_taken_0x111db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DB0u;
        // 0x111db4: 0x8e530040  lw          $s3, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111db0) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x111DB8u;
    // 0x111db8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x111db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x111dbc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x111dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x111dc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x111dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111dc4: 0x8c634090  lw          $v1, 0x4090($v1)
    ctx->pc = 0x111dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16528)));
    // 0x111dc8: 0x600008  jr          $v1
    ctx->pc = 0x111DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111DD0u: goto label_111dd0;
            case 0x111DF0u: goto label_111df0;
            case 0x111E10u: goto label_111e10;
            case 0x111E20u: goto label_111e20;
            case 0x111E68u: goto label_111e68;
            case 0x111E78u: goto label_111e78;
            case 0x111E88u: goto label_111e88;
            case 0x111E90u: goto label_111e90;
            case 0x111EA0u: goto label_111ea0;
            case 0x111EC0u: goto label_111ec0;
            case 0x111EE0u: goto label_111ee0;
            case 0x111EF0u: goto label_111ef0;
            case 0x111F30u: goto label_111f30;
            case 0x111F38u: goto label_111f38;
            case 0x111F88u: goto label_111f88;
            case 0x111FD0u: goto label_111fd0;
            case 0x111FF8u: goto label_111ff8;
            case 0x112020u: goto label_112020;
            case 0x112068u: goto label_112068;
            case 0x1120C0u: goto label_1120c0;
            case 0x1120E0u: goto label_1120e0;
            case 0x1120F8u: goto label_1120f8;
            case 0x112100u: goto label_112100;
            case 0x112108u: goto label_112108;
            case 0x112124u: goto label_112124;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111DC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x111DD0u;
label_111dd0:
    // 0x111dd0: 0x7ea00000  sq          $zero, 0x0($s5)
    ctx->pc = 0x111dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 0));
    // 0x111dd4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x111dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x111dd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ddc: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x111DDCu;
    SET_GPR_U32(ctx, 31, 0x111DE4u);
    ctx->pc = 0x111DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111DDCu;
    // 0x111de0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x111DDCu, 0x111DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111DE4u;
label_111de4:
    // 0x111de4: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x111DE4u;
    {
        const bool branch_taken_0x111de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DE4u;
        // 0x111de8: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111de4) {
            ctx->pc = 0x112128u;
            goto label_112128;
        }
    }
    ctx->pc = 0x111DECu;
    // 0x111dec: 0x0  nop
    ctx->pc = 0x111decu;
    // NOP
label_111df0:
    // 0x111df0: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x111df0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111df4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x111df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x111df8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111dfc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e00: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x111E00u;
    SET_GPR_U32(ctx, 31, 0x111E08u);
    ctx->pc = 0x111E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E00u;
    // 0x111e04: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x111E00u, 0x111E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E08u;
label_111e08:
    // 0x111e08: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x111E08u;
    {
        const bool branch_taken_0x111e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E08u;
        // 0x111e0c: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e08) {
            ctx->pc = 0x112128u;
            goto label_112128;
        }
    }
    ctx->pc = 0x111E10u;
label_111e10:
    // 0x111e10: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x111e10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e14: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x111E14u;
    {
        const bool branch_taken_0x111e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E14u;
        // 0x111e18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e14) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x111E1Cu;
    // 0x111e1c: 0x0  nop
    ctx->pc = 0x111e1cu;
    // NOP
label_111e20:
    // 0x111e20: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x111e20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x111e24: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x111e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x111e28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111E28u;
    {
        const bool branch_taken_0x111e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x111E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E28u;
        // 0x111e2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e28) {
            ctx->pc = 0x111E38u;
            goto label_111e38;
        }
    }
    ctx->pc = 0x111E30u;
    // 0x111e30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111E30u;
    {
        const bool branch_taken_0x111e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E30u;
        // 0x111e34: 0x8e700260  lw          $s0, 0x260($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e30) {
            ctx->pc = 0x111E44u;
            goto label_111e44;
        }
    }
    ctx->pc = 0x111E38u;
label_111e38:
    // 0x111e38: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x111e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x111e3c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x111e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x111e40: 0x8c70fff0  lw          $s0, -0x10($v1)
    ctx->pc = 0x111e40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_111e44:
    // 0x111e44: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x111E44u;
    {
        const bool branch_taken_0x111e44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E44u;
        // 0x111e48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e44) {
            ctx->pc = 0x111E60u;
            goto label_111e60;
        }
    }
    ctx->pc = 0x111E4Cu;
    // 0x111e4c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x111e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x111e50: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x111e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x111e54: 0xc068186  jal         func_1A0618
    ctx->pc = 0x111E54u;
    SET_GPR_U32(ctx, 31, 0x111E5Cu);
    ctx->pc = 0x111E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E54u;
    // 0x111e58: 0x24a53e88  addiu       $a1, $a1, 0x3E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x111E54u, 0x111E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E5Cu;
label_111e5c:
    // 0x111e5c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x111e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111e60:
    // 0x111e60: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x111E60u;
    {
        const bool branch_taken_0x111e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E60u;
        // 0x111e64: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e60) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x111E68u;
label_111e68:
    // 0x111e68: 0x8e133630  lw          $s3, 0x3630($s0)
    ctx->pc = 0x111e68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13872)));
    // 0x111e6c: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x111E6Cu;
    {
        const bool branch_taken_0x111e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E6Cu;
        // 0x111e70: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e6c) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x111E74u;
    // 0x111e74: 0x0  nop
    ctx->pc = 0x111e74u;
    // NOP
label_111e78:
    // 0x111e78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e7c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x111E7Cu;
    {
        const bool branch_taken_0x111e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E7Cu;
        // 0x111e80: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e7c) {
            ctx->pc = 0x1120C4u;
            goto label_1120c4;
        }
    }
    ctx->pc = 0x111E84u;
    // 0x111e84: 0x0  nop
    ctx->pc = 0x111e84u;
    // NOP
label_111e88:
    // 0x111e88: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x111E88u;
    {
        const bool branch_taken_0x111e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E88u;
        // 0x111e8c: 0x8e173630  lw          $s7, 0x3630($s0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e88) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x111E90u;
label_111e90:
    // 0x111e90: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x111e90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e94: 0x8e133630  lw          $s3, 0x3630($s0)
    ctx->pc = 0x111e94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13872)));
    // 0x111e98: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x111E98u;
    {
        const bool branch_taken_0x111e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E98u;
        // 0x111e9c: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e98) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x111EA0u;
label_111ea0:
    // 0x111ea0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ea4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111EA4u;
    SET_GPR_U32(ctx, 31, 0x111EACu);
    ctx->pc = 0x111EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EA4u;
    // 0x111ea8: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111EA4u, 0x111EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EACu;
label_111eac:
    // 0x111eac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111eb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x111eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x111eb4: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x111EB4u;
    {
        const bool branch_taken_0x111eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111EB4u;
        // 0x111eb8: 0x8c573630  lw          $s7, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111eb4) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x111EBCu;
    // 0x111ebc: 0x0  nop
    ctx->pc = 0x111ebcu;
    // NOP
label_111ec0:
    // 0x111ec0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ec4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111EC4u;
    SET_GPR_U32(ctx, 31, 0x111ECCu);
    ctx->pc = 0x111EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EC4u;
    // 0x111ec8: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111EC4u, 0x111ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111ECCu;
label_111ecc:
    // 0x111ecc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111ed0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x111ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x111ed4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x111ED4u;
    {
        const bool branch_taken_0x111ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111ED4u;
        // 0x111ed8: 0x8c533630  lw          $s3, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ed4) {
            ctx->pc = 0x111EF8u;
            goto label_111ef8;
        }
    }
    ctx->pc = 0x111EDCu;
    // 0x111edc: 0x0  nop
    ctx->pc = 0x111edcu;
    // NOP
label_111ee0:
    // 0x111ee0: 0x8f978a30  lw          $s7, -0x75D0($gp)
    ctx->pc = 0x111ee0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x111ee4: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x111EE4u;
    {
        const bool branch_taken_0x111ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111EE4u;
        // 0x111ee8: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ee4) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x111EECu;
    // 0x111eec: 0x0  nop
    ctx->pc = 0x111eecu;
    // NOP
label_111ef0:
    // 0x111ef0: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x111ef0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ef4: 0x8f938a30  lw          $s3, -0x75D0($gp)
    ctx->pc = 0x111ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
label_111ef8:
    // 0x111ef8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x111ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x111efc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x111efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111f00: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x111f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x111f04: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x111f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x111f08: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x111f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x111f0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111F0Cu;
    {
        const bool branch_taken_0x111f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F0Cu;
        // 0x111f10: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f0c) {
            ctx->pc = 0x111F1Cu;
            goto label_111f1c;
        }
    }
    ctx->pc = 0x111F14u;
    // 0x111f14: 0xc061920  jal         func_186480
    ctx->pc = 0x111F14u;
    SET_GPR_U32(ctx, 31, 0x111F1Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x111F14u, 0x111F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F1Cu;
label_111f1c:
    // 0x111f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f20: 0xc061422  jal         func_185088
    ctx->pc = 0x111F20u;
    SET_GPR_U32(ctx, 31, 0x111F28u);
    ctx->pc = 0x111F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F20u;
    // 0x111f24: 0x26360110  addiu       $s6, $s1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x111F20u, 0x111F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F28u;
label_111f28:
    // 0x111f28: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x111F28u;
    {
        const bool branch_taken_0x111f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F28u;
        // 0x111f2c: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f28) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x111F30u;
label_111f30:
    // 0x111f30: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x111F30u;
    {
        const bool branch_taken_0x111f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F30u;
        // 0x111f34: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f30) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x111F38u;
label_111f38:
    // 0x111f38: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x111f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x111f3c: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x111f3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x111f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111f44: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x111f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x111f48: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x111f48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x111f4c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x111f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x111f50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111F50u;
    {
        const bool branch_taken_0x111f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F50u;
        // 0x111f54: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f50) {
            ctx->pc = 0x111F60u;
            goto label_111f60;
        }
    }
    ctx->pc = 0x111F58u;
    // 0x111f58: 0xc061920  jal         func_186480
    ctx->pc = 0x111F58u;
    SET_GPR_U32(ctx, 31, 0x111F60u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x111F58u, 0x111F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F60u;
label_111f60:
    // 0x111f60: 0xc061422  jal         func_185088
    ctx->pc = 0x111F60u;
    SET_GPR_U32(ctx, 31, 0x111F68u);
    ctx->pc = 0x111F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F60u;
    // 0x111f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x111F60u, 0x111F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F68u;
label_111f68:
    // 0x111f68: 0x26220110  addiu       $v0, $s1, 0x110
    ctx->pc = 0x111f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x111f6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x111f6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111f70: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x111f70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x111f74: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x111f74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x111f78: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x111f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x111f7c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x111F7Cu;
    {
        const bool branch_taken_0x111f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F7Cu;
        // 0x111f80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f7c) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x111F84u;
    // 0x111f84: 0x0  nop
    ctx->pc = 0x111f84u;
    // NOP
label_111f88:
    // 0x111f88: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x111f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x111f8c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x111f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111f90: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x111f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x111f94: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x111f94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x111f98: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x111f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x111f9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111F9Cu;
    {
        const bool branch_taken_0x111f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F9Cu;
        // 0x111fa0: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f9c) {
            ctx->pc = 0x111FACu;
            goto label_111fac;
        }
    }
    ctx->pc = 0x111FA4u;
    // 0x111fa4: 0xc061920  jal         func_186480
    ctx->pc = 0x111FA4u;
    SET_GPR_U32(ctx, 31, 0x111FACu);
    ctx->pc = 0x111FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FA4u;
    // 0x111fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x111FA4u, 0x111FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FACu;
label_111fac:
    // 0x111fac: 0xc061422  jal         func_185088
    ctx->pc = 0x111FACu;
    SET_GPR_U32(ctx, 31, 0x111FB4u);
    ctx->pc = 0x111FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FACu;
    // 0x111fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x111FACu, 0x111FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FB4u;
label_111fb4:
    // 0x111fb4: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x111fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x111fb8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x111fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x111fbc: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x111fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x111fc0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x111fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111fc4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x111FC4u;
    {
        const bool branch_taken_0x111fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FC4u;
        // 0x111fc8: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fc4) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x111FCCu;
    // 0x111fcc: 0x0  nop
    ctx->pc = 0x111fccu;
    // NOP
label_111fd0:
    // 0x111fd0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111FD0u;
    SET_GPR_U32(ctx, 31, 0x111FD8u);
    ctx->pc = 0x111FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FD0u;
    // 0x111fd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111FD0u, 0x111FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FD8u;
label_111fd8:
    // 0x111fd8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x111fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x111fdc: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x111fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x111fe0: 0x2421ff30  addiu       $at, $at, -0xD0
    ctx->pc = 0x111fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294967088));
    // 0x111fe4: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x111fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x111fe8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x111fe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111fec: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x111fecu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x111ff0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x111FF0u;
    {
        const bool branch_taken_0x111ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FF0u;
        // 0x111ff4: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ff0) {
            ctx->pc = 0x112128u;
            goto label_112128;
        }
    }
    ctx->pc = 0x111FF8u;
label_111ff8:
    // 0x111ff8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111FF8u;
    SET_GPR_U32(ctx, 31, 0x112000u);
    ctx->pc = 0x111FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FF8u;
    // 0x111ffc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111FF8u, 0x112000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112000u;
label_112000:
    // 0x112000: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x112000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x112004: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x112004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x112008: 0x2421ff30  addiu       $at, $at, -0xD0
    ctx->pc = 0x112008u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294967088));
    // 0x11200c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x11200cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x112010: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x112010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x112014: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x112014u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x112018: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x112018u;
    {
        const bool branch_taken_0x112018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112018u;
        // 0x11201c: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112018) {
            ctx->pc = 0x112128u;
            goto label_112128;
        }
    }
    ctx->pc = 0x112020u;
label_112020:
    // 0x112020: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x112020u;
    SET_GPR_U32(ctx, 31, 0x112028u);
    ctx->pc = 0x112024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112020u;
    // 0x112024: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x112020u, 0x112028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112028u;
label_112028:
    // 0x112028: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x112028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x11202c: 0x30500fff  andi        $s0, $v0, 0xFFF
    ctx->pc = 0x11202cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x112030: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x112030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112034: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x112034u;
    {
        const bool branch_taken_0x112034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112034) {
            ctx->pc = 0x112038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112034u;
            // 0x112038: 0x8e63001c  lw          $v1, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112054u;
            goto label_112054;
        }
    }
    ctx->pc = 0x11203Cu;
    // 0x11203c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11203cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x112040: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x112040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112044: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0
    ctx->pc = 0x112044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
    // 0x112048: 0xc068186  jal         func_1A0618
    ctx->pc = 0x112048u;
    SET_GPR_U32(ctx, 31, 0x112050u);
    ctx->pc = 0x11204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112048u;
    // 0x11204c: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x112048u, 0x112050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112050u;
label_112050:
    // 0x112050: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x112050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_112054:
    // 0x112054: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x112054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x112058: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x112058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x11205c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11205cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112060: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x112060u;
    {
        const bool branch_taken_0x112060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112060u;
        // 0x112064: 0x8c5e0000  lw          $fp, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112060) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x112068u;
label_112068:
    // 0x112068: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x112068u;
    SET_GPR_U32(ctx, 31, 0x112070u);
    ctx->pc = 0x11206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112068u;
    // 0x11206c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x112068u, 0x112070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112070u;
label_112070:
    // 0x112070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112074: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x112074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x112078: 0x8c503630  lw          $s0, 0x3630($v0)
    ctx->pc = 0x112078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x11207c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11207Cu;
    {
        const bool branch_taken_0x11207c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x112080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11207Cu;
        // 0x112080: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11207c) {
            ctx->pc = 0x1120A0u;
            goto label_1120a0;
        }
    }
    ctx->pc = 0x112084u;
    // 0x112084: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x112084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x112088: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x112088u;
    {
        const bool branch_taken_0x112088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112088) {
            ctx->pc = 0x11208Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112088u;
            // 0x11208c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1120A4u;
            goto label_1120a4;
        }
    }
    ctx->pc = 0x112090u;
    // 0x112090: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x112090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x112094: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x112094u;
    {
        const bool branch_taken_0x112094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112094) {
            ctx->pc = 0x112098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112094u;
            // 0x112098: 0x8e0201ac  lw          $v0, 0x1AC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1120B4u;
            goto label_1120b4;
        }
    }
    ctx->pc = 0x11209Cu;
    // 0x11209c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11209cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1120a0:
    // 0x1120a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1120a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1120a4:
    // 0x1120a4: 0x24a53eb8  addiu       $a1, $a1, 0x3EB8
    ctx->pc = 0x1120a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16056));
    // 0x1120a8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1120A8u;
    SET_GPR_U32(ctx, 31, 0x1120B0u);
    ctx->pc = 0x1120ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1120A8u;
    // 0x1120ac: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1120A8u, 0x1120B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1120B0u;
label_1120b0:
    // 0x1120b0: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x1120b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_1120b4:
    // 0x1120b4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1120B4u;
    {
        const bool branch_taken_0x1120b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120B4u;
        // 0x1120b8: 0x8c5e0020  lw          $fp, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120b4) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x1120BCu;
    // 0x1120bc: 0x0  nop
    ctx->pc = 0x1120bcu;
    // NOP
label_1120c0:
    // 0x1120c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1120c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1120c4:
    // 0x1120c4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1120C4u;
    SET_GPR_U32(ctx, 31, 0x1120CCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1120C4u, 0x1120CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1120CCu;
label_1120cc:
    // 0x1120cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1120ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1120d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1120d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1120d4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1120D4u;
    {
        const bool branch_taken_0x1120d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120D4u;
        // 0x1120d8: 0x8c533630  lw          $s3, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120d4) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x1120DCu;
    // 0x1120dc: 0x0  nop
    ctx->pc = 0x1120dcu;
    // NOP
label_1120e0:
    // 0x1120e0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1120e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1120e4: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x1120e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1120e8: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x1120e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1120ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1120ECu;
    {
        const bool branch_taken_0x1120ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120ECu;
        // 0x1120f0: 0x8c5e0044  lw          $fp, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120ec) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x1120F4u;
    // 0x1120f4: 0x0  nop
    ctx->pc = 0x1120f4u;
    // NOP
label_1120f8:
    // 0x1120f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1120F8u;
    {
        const bool branch_taken_0x1120f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120F8u;
        // 0x1120fc: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120f8) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x112100u;
label_112100:
    // 0x112100: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x112100u;
    {
        const bool branch_taken_0x112100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112100u;
        // 0x112104: 0x24110015  addiu       $s1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112100) {
            ctx->pc = 0x112124u;
            goto label_112124;
        }
    }
    ctx->pc = 0x112108u;
label_112108:
    // 0x112108: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x112108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x11210c: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x11210cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112110: 0x8c82b830  lw          $v0, -0x47D0($a0)
    ctx->pc = 0x112110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112114: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x112114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x112118: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x112118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x11211c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x11211cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x112120: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x112120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_112124:
    // 0x112124: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x112124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_112128:
    // 0x112128: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x112128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x11212c: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x11212Cu;
    {
        const bool branch_taken_0x11212c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11212Cu;
        // 0x112130: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11212c) {
            ctx->pc = 0x1123F8u;
            goto label_1123f8;
        }
    }
    ctx->pc = 0x112134u;
    // 0x112134: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x112134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x112138: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x112138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11213c: 0x8c634100  lw          $v1, 0x4100($v1)
    ctx->pc = 0x11213cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16640)));
    // 0x112140: 0x600008  jr          $v1
    ctx->pc = 0x112140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112148u: goto label_112148;
            case 0x112158u: goto label_112158;
            case 0x112220u: goto label_112220;
            case 0x112298u: goto label_112298;
            case 0x1122C8u: goto label_1122c8;
            case 0x112340u: goto label_112340;
            case 0x1123F8u: goto label_1123f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112140u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x112148u;
label_112148:
    // 0x112148: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x112148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x11214c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112150: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x112150u;
    {
        const bool branch_taken_0x112150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112150u;
        // 0x112154: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112150) {
            ctx->pc = 0x11229Cu;
            goto label_11229c;
        }
    }
    ctx->pc = 0x112158u;
label_112158:
    // 0x112158: 0x8ee2001c  lw          $v0, 0x1C($s7)
    ctx->pc = 0x112158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x11215c: 0x3414e000  ori         $s4, $zero, 0xE000
    ctx->pc = 0x11215cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x112160: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x112160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112164: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x112164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112168: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x112168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x11216c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x11216cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x112170: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x112170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x112174: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112174u;
    {
        const bool branch_taken_0x112174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112174u;
        // 0x112178: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112174) {
            ctx->pc = 0x112184u;
            goto label_112184;
        }
    }
    ctx->pc = 0x11217Cu;
    // 0x11217c: 0xc061920  jal         func_186480
    ctx->pc = 0x11217Cu;
    SET_GPR_U32(ctx, 31, 0x112184u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x11217Cu, 0x112184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112184u;
label_112184:
    // 0x112184: 0xc061422  jal         func_185088
    ctx->pc = 0x112184u;
    SET_GPR_U32(ctx, 31, 0x11218Cu);
    ctx->pc = 0x112188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112184u;
    // 0x112188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x112184u, 0x11218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11218Cu;
label_11218c:
    // 0x11218c: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x11218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x112190: 0x26e200a0  addiu       $v0, $s7, 0xA0
    ctx->pc = 0x112190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 160));
    // 0x112194: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x112194u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112198: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x112198u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11219c: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x11219cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1121a0: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1121a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1121a4: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1121a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1121a8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1121a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1121ac: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1121acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1121b0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1121b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1121b4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1121b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1121b8: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x1121b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1121bc: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1121bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1121c0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1121c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1121c4: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x1121c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1121c8: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x1121c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1121cc: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x1121ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x1121d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1121D0u;
    {
        const bool branch_taken_0x1121d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121d0) {
            ctx->pc = 0x1121E0u;
            goto label_1121e0;
        }
    }
    ctx->pc = 0x1121D8u;
    // 0x1121d8: 0xc061920  jal         func_186480
    ctx->pc = 0x1121D8u;
    SET_GPR_U32(ctx, 31, 0x1121E0u);
    ctx->pc = 0x1121DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1121D8u;
    // 0x1121dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1121D8u, 0x1121E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1121E0u;
label_1121e0:
    // 0x1121e0: 0xc061422  jal         func_185088
    ctx->pc = 0x1121E0u;
    SET_GPR_U32(ctx, 31, 0x1121E8u);
    ctx->pc = 0x1121E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1121E0u;
    // 0x1121e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1121E0u, 0x1121E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1121E8u;
label_1121e8:
    // 0x1121e8: 0x26020110  addiu       $v0, $s0, 0x110
    ctx->pc = 0x1121e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1121ec: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1121ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1121f0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1121f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1121f4: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1121f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1121f8: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1121f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1121fc: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1121fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x112200: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x112200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x112204: 0x2463f720  addiu       $v1, $v1, -0x8E0
    ctx->pc = 0x112204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965024));
    // 0x112208: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x112208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11220c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x11220cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112210: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x112210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112214: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x112214u;
    {
        const bool branch_taken_0x112214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112214u;
        // 0x112218: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112214) {
            ctx->pc = 0x11227Cu;
            goto label_11227c;
        }
    }
    ctx->pc = 0x11221Cu;
    // 0x11221c: 0x0  nop
    ctx->pc = 0x11221cu;
    // NOP
label_112220:
    // 0x112220: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x112220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x112224: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x112224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112228: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x112228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x11222c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x11222cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x112230: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x112230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x112234: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112234u;
    {
        const bool branch_taken_0x112234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112234u;
        // 0x112238: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112234) {
            ctx->pc = 0x112244u;
            goto label_112244;
        }
    }
    ctx->pc = 0x11223Cu;
    // 0x11223c: 0xc061920  jal         func_186480
    ctx->pc = 0x11223Cu;
    SET_GPR_U32(ctx, 31, 0x112244u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x11223Cu, 0x112244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112244u;
label_112244:
    // 0x112244: 0xc061422  jal         func_185088
    ctx->pc = 0x112244u;
    SET_GPR_U32(ctx, 31, 0x11224Cu);
    ctx->pc = 0x112248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112244u;
    // 0x112248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x112244u, 0x11224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11224Cu;
label_11224c:
    // 0x11224c: 0x26220110  addiu       $v0, $s1, 0x110
    ctx->pc = 0x11224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x112250: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x112250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x112254: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x112254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x112258: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x112258u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11225c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x11225cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x112260: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x112260u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x112264: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x112264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x112268: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x112268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x11226c: 0x2442f720  addiu       $v0, $v0, -0x8E0
    ctx->pc = 0x11226cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965024));
    // 0x112270: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x112270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112274: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x112274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x112278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11227c:
    // 0x11227c: 0x3c160026  lui         $s6, 0x26
    ctx->pc = 0x11227cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)38 << 16));
    // 0x112280: 0x26d6f720  addiu       $s6, $s6, -0x8E0
    ctx->pc = 0x112280u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965024));
    // 0x112284: 0xc061468  jal         func_1851A0
    ctx->pc = 0x112284u;
    SET_GPR_U32(ctx, 31, 0x11228Cu);
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x112284u, 0x11228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11228Cu;
label_11228c:
    // 0x11228c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x11228Cu;
    {
        const bool branch_taken_0x11228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11228c) {
            ctx->pc = 0x1123F8u;
            goto label_1123f8;
        }
    }
    ctx->pc = 0x112294u;
    // 0x112294: 0x0  nop
    ctx->pc = 0x112294u;
    // NOP
label_112298:
    // 0x112298: 0x27c30030  addiu       $v1, $fp, 0x30
    ctx->pc = 0x112298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
label_11229c:
    // 0x11229c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11229cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1122a0: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x1122a0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x1122a4: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x1122a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1122a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1122a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1122ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1122acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1122b0: 0x10430051  beq         $v0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1122B0u;
    {
        const bool branch_taken_0x1122b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1122B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122B0u;
        // 0x1122b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122b0) {
            ctx->pc = 0x1123F8u;
            goto label_1123f8;
        }
    }
    ctx->pc = 0x1122B8u;
    // 0x1122b8: 0xc044722  jal         func_111C88
    ctx->pc = 0x1122B8u;
    SET_GPR_U32(ctx, 31, 0x1122C0u);
    ctx->pc = 0x1122BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1122B8u;
    // 0x1122bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C88u, 0x1122B8u, 0x1122C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122C0u;
label_1122c0:
    // 0x1122c0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1122C0u;
    {
        const bool branch_taken_0x1122c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1122c0) {
            ctx->pc = 0x1123F8u;
            goto label_1123f8;
        }
    }
    ctx->pc = 0x1122C8u;
label_1122c8:
    // 0x1122c8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1122C8u;
    SET_GPR_U32(ctx, 31, 0x1122D0u);
    ctx->pc = 0x1122CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1122C8u;
    // 0x1122cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1122C8u, 0x1122D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122D0u;
label_1122d0:
    // 0x1122d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1122d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1122d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122d8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1122d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1122dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1122dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1122e0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1122e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1122e4: 0xc0592d6  jal         func_164B58
    ctx->pc = 0x1122E4u;
    SET_GPR_U32(ctx, 31, 0x1122ECu);
    ctx->pc = 0x1122E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1122E4u;
    // 0x1122e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B58u, 0x1122E4u, 0x1122ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1122ECu;
label_1122ec:
    // 0x1122ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1122ECu;
    {
        const bool branch_taken_0x1122ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1122ec) {
            ctx->pc = 0x1122F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1122ECu;
            // 0x1122f0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112300u;
            goto label_112300;
        }
    }
    ctx->pc = 0x1122F4u;
    // 0x1122f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1122f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1122f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1122F8u;
    {
        const bool branch_taken_0x1122f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122F8u;
        // 0x1122fc: 0x8c430014  lw          $v1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122f8) {
            ctx->pc = 0x112328u;
            goto label_112328;
        }
    }
    ctx->pc = 0x112300u;
label_112300:
    // 0x112300: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x112300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x112304: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x112304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x112308: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112308u;
    {
        const bool branch_taken_0x112308 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112308u;
        // 0x11230c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112308) {
            ctx->pc = 0x112320u;
            goto label_112320;
        }
    }
    ctx->pc = 0x112310u;
    // 0x112310: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x112310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x112314: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112314u;
    {
        const bool branch_taken_0x112314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112314u;
        // 0x112318: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112314) {
            ctx->pc = 0x112324u;
            goto label_112324;
        }
    }
    ctx->pc = 0x11231Cu;
    // 0x11231c: 0x0  nop
    ctx->pc = 0x11231cu;
    // NOP
label_112320:
    // 0x112320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x112320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112324:
    // 0x112324: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x112324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_112328:
    // 0x112328: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x112328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x11232c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11232cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112330: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x112330u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x112334: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x112334u;
    {
        const bool branch_taken_0x112334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112334) {
            ctx->pc = 0x1123F8u;
            goto label_1123f8;
        }
    }
    ctx->pc = 0x11233Cu;
    // 0x11233c: 0x0  nop
    ctx->pc = 0x11233cu;
    // NOP
label_112340:
    // 0x112340: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x112340u;
    SET_GPR_U32(ctx, 31, 0x112348u);
    ctx->pc = 0x112344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112340u;
    // 0x112344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x112340u, 0x112348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112348u;
label_112348:
    // 0x112348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11234c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11234cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112350: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x112350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x112354: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112358: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x112358u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11235c: 0xc0592d6  jal         func_164B58
    ctx->pc = 0x11235Cu;
    SET_GPR_U32(ctx, 31, 0x112364u);
    ctx->pc = 0x112360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11235Cu;
    // 0x112360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B58u, 0x11235Cu, 0x112364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112364u;
label_112364:
    // 0x112364: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x112364u;
    {
        const bool branch_taken_0x112364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112364u;
        // 0x112368: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112364) {
            ctx->pc = 0x112398u;
            goto label_112398;
        }
    }
    ctx->pc = 0x11236Cu;
    // 0x11236c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x11236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x112370: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x112370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x112374: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x112374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x112378: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x112378u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11237c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x11237cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x112380: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x112380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112384: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x112384u;
    SET_GPR_U32(ctx, 31, 0x11238Cu);
    ctx->pc = 0x112388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112384u;
    // 0x112388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x112384u, 0x11238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11238Cu;
label_11238c:
    // 0x11238c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11238Cu;
    {
        const bool branch_taken_0x11238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11238c) {
            ctx->pc = 0x1123F8u;
            goto label_1123f8;
        }
    }
    ctx->pc = 0x112394u;
    // 0x112394: 0x0  nop
    ctx->pc = 0x112394u;
    // NOP
label_112398:
    // 0x112398: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112398u;
    {
        const bool branch_taken_0x112398 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x112398) {
            ctx->pc = 0x1123A8u;
            goto label_1123a8;
        }
    }
    ctx->pc = 0x1123A0u;
    // 0x1123a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1123A0u;
    {
        const bool branch_taken_0x1123a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123A0u;
        // 0x1123a4: 0x8e2201b4  lw          $v0, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123a0) {
            ctx->pc = 0x1123E4u;
            goto label_1123e4;
        }
    }
    ctx->pc = 0x1123A8u;
label_1123a8:
    // 0x1123a8: 0x6030005  bgezl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1123A8u;
    {
        const bool branch_taken_0x1123a8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1123a8) {
            ctx->pc = 0x1123ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1123A8u;
            // 0x1123ac: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1123C0u;
            goto label_1123c0;
        }
    }
    ctx->pc = 0x1123B0u;
    // 0x1123b0: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x1123b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1123b4: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1123b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1123b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1123B8u;
    {
        const bool branch_taken_0x1123b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123B8u;
        // 0x1123bc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123b8) {
            ctx->pc = 0x1123E4u;
            goto label_1123e4;
        }
    }
    ctx->pc = 0x1123C0u;
label_1123c0:
    // 0x1123c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1123c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1123c4: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x1123c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x1123c8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1123C8u;
    {
        const bool branch_taken_0x1123c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1123CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123C8u;
        // 0x1123cc: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123c8) {
            ctx->pc = 0x1123E0u;
            goto label_1123e0;
        }
    }
    ctx->pc = 0x1123D0u;
    // 0x1123d0: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x1123d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1123d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1123D4u;
    {
        const bool branch_taken_0x1123d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123D4u;
        // 0x1123d8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123d4) {
            ctx->pc = 0x1123E4u;
            goto label_1123e4;
        }
    }
    ctx->pc = 0x1123DCu;
    // 0x1123dc: 0x0  nop
    ctx->pc = 0x1123dcu;
    // NOP
label_1123e0:
    // 0x1123e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1123e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1123e4:
    // 0x1123e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1123e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1123e8: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x1123e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1123ec: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1123ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1123f0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1123f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1123f4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1123f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1123f8:
    // 0x1123f8: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1123F8u;
    {
        const bool branch_taken_0x1123f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123F8u;
        // 0x1123fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123f8) {
            ctx->pc = 0x11240Cu;
            goto label_11240c;
        }
    }
    ctx->pc = 0x112400u;
    // 0x112400: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x112400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112404: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x112404u;
    SET_GPR_U32(ctx, 31, 0x11240Cu);
    ctx->pc = 0x112408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112404u;
    // 0x112408: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x112404u, 0x11240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11240Cu;
label_11240c:
    // 0x11240c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11240cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112410: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x112410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x112414: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x112414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112418: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x112418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11241c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x11241cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x112420: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x112420u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x112424: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x112424u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112428: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x112428u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x11242c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x11242cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112430: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x112430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x112434: 0x3e00008  jr          $ra
    ctx->pc = 0x112434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112434u;
        // 0x112438: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11243Cu;
}
