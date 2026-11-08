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

// Function: Cmd_OBJ_POST_Entry__FP15BsSCDEntControl
// Address: 0x106f00 - 0x107034
void Cmd_OBJ_POST_Entry__FP15BsSCDEntControl_0x106f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_POST_Entry__FP15BsSCDEntControl_0x106f00");
#endif

    switch (ctx->pc) {
        case 0x106f00u: goto label_106f00;
        case 0x106f04u: goto label_106f04;
        case 0x106f08u: goto label_106f08;
        case 0x106f0cu: goto label_106f0c;
        case 0x106f10u: goto label_106f10;
        case 0x106f14u: goto label_106f14;
        case 0x106f18u: goto label_106f18;
        case 0x106f1cu: goto label_106f1c;
        case 0x106f20u: goto label_106f20;
        case 0x106f24u: goto label_106f24;
        case 0x106f28u: goto label_106f28;
        case 0x106f2cu: goto label_106f2c;
        case 0x106f30u: goto label_106f30;
        case 0x106f34u: goto label_106f34;
        case 0x106f38u: goto label_106f38;
        case 0x106f3cu: goto label_106f3c;
        case 0x106f40u: goto label_106f40;
        case 0x106f44u: goto label_106f44;
        case 0x106f48u: goto label_106f48;
        case 0x106f4cu: goto label_106f4c;
        case 0x106f50u: goto label_106f50;
        case 0x106f54u: goto label_106f54;
        case 0x106f58u: goto label_106f58;
        case 0x106f5cu: goto label_106f5c;
        case 0x106f60u: goto label_106f60;
        case 0x106f64u: goto label_106f64;
        case 0x106f68u: goto label_106f68;
        case 0x106f6cu: goto label_106f6c;
        case 0x106f70u: goto label_106f70;
        case 0x106f74u: goto label_106f74;
        case 0x106f78u: goto label_106f78;
        case 0x106f7cu: goto label_106f7c;
        case 0x106f80u: goto label_106f80;
        case 0x106f84u: goto label_106f84;
        case 0x106f88u: goto label_106f88;
        case 0x106f8cu: goto label_106f8c;
        case 0x106f90u: goto label_106f90;
        case 0x106f94u: goto label_106f94;
        case 0x106f98u: goto label_106f98;
        case 0x106f9cu: goto label_106f9c;
        case 0x106fa0u: goto label_106fa0;
        case 0x106fa4u: goto label_106fa4;
        case 0x106fa8u: goto label_106fa8;
        case 0x106facu: goto label_106fac;
        case 0x106fb0u: goto label_106fb0;
        case 0x106fb4u: goto label_106fb4;
        case 0x106fb8u: goto label_106fb8;
        case 0x106fbcu: goto label_106fbc;
        case 0x106fc0u: goto label_106fc0;
        case 0x106fc4u: goto label_106fc4;
        case 0x106fc8u: goto label_106fc8;
        case 0x106fccu: goto label_106fcc;
        case 0x106fd0u: goto label_106fd0;
        case 0x106fd4u: goto label_106fd4;
        case 0x106fd8u: goto label_106fd8;
        case 0x106fdcu: goto label_106fdc;
        case 0x106fe0u: goto label_106fe0;
        case 0x106fe4u: goto label_106fe4;
        case 0x106fe8u: goto label_106fe8;
        case 0x106fecu: goto label_106fec;
        case 0x106ff0u: goto label_106ff0;
        case 0x106ff4u: goto label_106ff4;
        case 0x106ff8u: goto label_106ff8;
        case 0x106ffcu: goto label_106ffc;
        case 0x107000u: goto label_107000;
        case 0x107004u: goto label_107004;
        case 0x107008u: goto label_107008;
        case 0x10700cu: goto label_10700c;
        case 0x107010u: goto label_107010;
        case 0x107014u: goto label_107014;
        case 0x107018u: goto label_107018;
        case 0x10701cu: goto label_10701c;
        case 0x107020u: goto label_107020;
        case 0x107024u: goto label_107024;
        case 0x107028u: goto label_107028;
        case 0x10702cu: goto label_10702c;
        case 0x107030u: goto label_107030;
        default: break;
    }

    ctx->pc = 0x106f00u;

label_106f00:
    // 0x106f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_106f04:
    // 0x106f04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x106f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_106f08:
    // 0x106f08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_106f0c:
    // 0x106f0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106f10:
    // 0x106f10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x106f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_106f14:
    // 0x106f14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106f18:
    // 0x106f18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x106f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_106f1c:
    // 0x106f1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x106f1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106f20:
    // 0x106f20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x106f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_106f24:
    // 0x106f24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x106f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_106f28:
    // 0x106f28: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x106f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_106f2c:
    // 0x106f2c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x106f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_106f30:
    // 0x106f30: 0x8c530044  lw          $s3, 0x44($v0)
    ctx->pc = 0x106f30u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_106f34:
    // 0x106f34: 0xc04110c  jal         func_104430
label_106f38:
    if (ctx->pc == 0x106F38u) {
        ctx->pc = 0x106F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F34u;
        // 0x106f38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F3Cu;
        goto label_106f3c;
    }
    ctx->pc = 0x106F34u;
    SET_GPR_U32(ctx, 31, 0x106F3Cu);
    ctx->pc = 0x106F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F34u;
    // 0x106f38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x106F34u, 0x106F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106F3Cu;
label_106f3c:
    // 0x106f3c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x106f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_106f40:
    // 0x106f40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x106f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106f44:
    // 0x106f44: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x106f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_106f48:
    // 0x106f48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_106f4c:
    if (ctx->pc == 0x106F4Cu) {
        ctx->pc = 0x106F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F48u;
        // 0x106f4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F50u;
        goto label_106f50;
    }
    ctx->pc = 0x106F48u;
    {
        const bool branch_taken_0x106f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x106F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F48u;
        // 0x106f4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f48) {
            ctx->pc = 0x106F58u;
            goto label_106f58;
        }
    }
    ctx->pc = 0x106F50u;
label_106f50:
    // 0x106f50: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_106f54:
    if (ctx->pc == 0x106F54u) {
        ctx->pc = 0x106F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F50u;
        // 0x106f54: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F58u;
        goto label_106f58;
    }
    ctx->pc = 0x106F50u;
    {
        const bool branch_taken_0x106f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x106f50) {
            ctx->pc = 0x106F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106F50u;
            // 0x106f54: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106F70u;
            goto label_106f70;
        }
    }
    ctx->pc = 0x106F58u;
label_106f58:
    // 0x106f58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x106f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_106f5c:
    // 0x106f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106f60:
    // 0x106f60: 0xc04110c  jal         func_104430
label_106f64:
    if (ctx->pc == 0x106F64u) {
        ctx->pc = 0x106F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F60u;
        // 0x106f64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F68u;
        goto label_106f68;
    }
    ctx->pc = 0x106F60u;
    SET_GPR_U32(ctx, 31, 0x106F68u);
    ctx->pc = 0x106F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F60u;
    // 0x106f64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x106F60u, 0x106F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106F68u;
label_106f68:
    // 0x106f68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x106f68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106f6c:
    // 0x106f6c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x106f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_106f70:
    // 0x106f70: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x106f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_106f74:
    // 0x106f74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_106f78:
    if (ctx->pc == 0x106F78u) {
        ctx->pc = 0x106F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F74u;
        // 0x106f78: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F7Cu;
        goto label_106f7c;
    }
    ctx->pc = 0x106F74u;
    {
        const bool branch_taken_0x106f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F74u;
        // 0x106f78: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f74) {
            ctx->pc = 0x106F88u;
            goto label_106f88;
        }
    }
    ctx->pc = 0x106F7Cu;
label_106f7c:
    // 0x106f7c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x106f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_106f80:
    // 0x106f80: 0x10000007  b           . + 4 + (0x7 << 2)
label_106f84:
    if (ctx->pc == 0x106F84u) {
        ctx->pc = 0x106F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F80u;
        // 0x106f84: 0x8c51b830  lw          $s1, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F88u;
        goto label_106f88;
    }
    ctx->pc = 0x106F80u;
    {
        const bool branch_taken_0x106f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F80u;
        // 0x106f84: 0x8c51b830  lw          $s1, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f80) {
            ctx->pc = 0x106FA0u;
            goto label_106fa0;
        }
    }
    ctx->pc = 0x106F88u;
label_106f88:
    // 0x106f88: 0x2451f270  addiu       $s1, $v0, -0xD90
    ctx->pc = 0x106f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963824));
label_106f8c:
    // 0x106f8c: 0xfa200000  sqc2        $vf0, 0x0($s1)
    ctx->pc = 0x106f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_106f90:
    // 0x106f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106f94:
    // 0x106f94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x106f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106f98:
    // 0x106f98: 0xc06a2d4  jal         func_1A8B50
label_106f9c:
    if (ctx->pc == 0x106F9Cu) {
        ctx->pc = 0x106F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F98u;
        // 0x106f9c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FA0u;
        goto label_106fa0;
    }
    ctx->pc = 0x106F98u;
    SET_GPR_U32(ctx, 31, 0x106FA0u);
    ctx->pc = 0x106F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F98u;
    // 0x106f9c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x106F98u, 0x106FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106FA0u;
label_106fa0:
    // 0x106fa0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x106fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_106fa4:
    // 0x106fa4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_106fa8:
    if (ctx->pc == 0x106FA8u) {
        ctx->pc = 0x106FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FA4u;
        // 0x106fa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FACu;
        goto label_106fac;
    }
    ctx->pc = 0x106FA4u;
    {
        const bool branch_taken_0x106fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FA4u;
        // 0x106fa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fa4) {
            ctx->pc = 0x107008u;
            goto label_107008;
        }
    }
    ctx->pc = 0x106FACu;
label_106fac:
    // 0x106fac: 0x5680000a  bnel        $s4, $zero, . + 4 + (0xA << 2)
label_106fb0:
    if (ctx->pc == 0x106FB0u) {
        ctx->pc = 0x106FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FACu;
        // 0x106fb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FB4u;
        goto label_106fb4;
    }
    ctx->pc = 0x106FACu;
    {
        const bool branch_taken_0x106fac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x106fac) {
            ctx->pc = 0x106FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106FACu;
            // 0x106fb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106FD8u;
            goto label_106fd8;
        }
    }
    ctx->pc = 0x106FB4u;
label_106fb4:
    // 0x106fb4: 0xc04112c  jal         func_1044B0
label_106fb8:
    if (ctx->pc == 0x106FB8u) {
        ctx->pc = 0x106FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FB4u;
        // 0x106fb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FBCu;
        goto label_106fbc;
    }
    ctx->pc = 0x106FB4u;
    SET_GPR_U32(ctx, 31, 0x106FBCu);
    ctx->pc = 0x106FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106FB4u;
    // 0x106fb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x106FB4u, 0x106FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106FBCu;
label_106fbc:
    // 0x106fbc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x106fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_106fc0:
    // 0x106fc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106fc4:
    // 0x106fc4: 0x24a53ab0  addiu       $a1, $a1, 0x3AB0
    ctx->pc = 0x106fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15024));
label_106fc8:
    // 0x106fc8: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x106fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_106fcc:
    // 0x106fcc: 0xc0415ec  jal         func_1057B0
label_106fd0:
    if (ctx->pc == 0x106FD0u) {
        ctx->pc = 0x106FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FCCu;
        // 0x106fd0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FD4u;
        goto label_106fd4;
    }
    ctx->pc = 0x106FCCu;
    SET_GPR_U32(ctx, 31, 0x106FD4u);
    ctx->pc = 0x106FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106FCCu;
    // 0x106fd0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x106FCCu, 0x106FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106FD4u;
label_106fd4:
    // 0x106fd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x106fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_106fd8:
    // 0x106fd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x106fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106fdc:
    // 0x106fdc: 0xc04112e  jal         func_1044B8
label_106fe0:
    if (ctx->pc == 0x106FE0u) {
        ctx->pc = 0x106FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FDCu;
        // 0x106fe0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FE4u;
        goto label_106fe4;
    }
    ctx->pc = 0x106FDCu;
    SET_GPR_U32(ctx, 31, 0x106FE4u);
    ctx->pc = 0x106FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106FDCu;
    // 0x106fe0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B8u, 0x106FDCu, 0x106FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106FE4u;
label_106fe4:
    // 0x106fe4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x106fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_106fe8:
    // 0x106fe8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x106fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106fec:
    // 0x106fec: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x106fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_106ff0:
    // 0x106ff0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x106ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_106ff4:
    // 0x106ff4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x106ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_106ff8:
    // 0x106ff8: 0x60f809  jalr        $v1
label_106ffc:
    if (ctx->pc == 0x106FFCu) {
        ctx->pc = 0x106FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FF8u;
        // 0x106ffc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107000u;
        goto label_107000;
    }
    ctx->pc = 0x106FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107000u);
        ctx->pc = 0x106FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FF8u;
        // 0x106ffc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106FF8u, 0x107000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107000u;
label_107000:
    // 0x107000: 0x10000005  b           . + 4 + (0x5 << 2)
label_107004:
    if (ctx->pc == 0x107004u) {
        ctx->pc = 0x107004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107000u;
        // 0x107004: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107008u;
        goto label_107008;
    }
    ctx->pc = 0x107000u;
    {
        const bool branch_taken_0x107000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107000u;
        // 0x107004: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107000) {
            ctx->pc = 0x107018u;
            goto label_107018;
        }
    }
    ctx->pc = 0x107008u;
label_107008:
    // 0x107008: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10700c:
    // 0x10700c: 0xc0618c2  jal         func_186308
label_107010:
    if (ctx->pc == 0x107010u) {
        ctx->pc = 0x107010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10700Cu;
        // 0x107010: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107014u;
        goto label_107014;
    }
    ctx->pc = 0x10700Cu;
    SET_GPR_U32(ctx, 31, 0x107014u);
    ctx->pc = 0x107010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10700Cu;
    // 0x107010: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x10700Cu, 0x107014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107014u;
label_107014:
    // 0x107014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107018:
    // 0x107018: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x107018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10701c:
    // 0x10701c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10701cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_107020:
    // 0x107020: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x107020u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_107024:
    // 0x107024: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x107024u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_107028:
    // 0x107028: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x107028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_10702c:
    // 0x10702c: 0x3e00008  jr          $ra
label_107030:
    if (ctx->pc == 0x107030u) {
        ctx->pc = 0x107030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10702Cu;
        // 0x107030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107034u;
        goto label_fallthrough_0x10702c;
    }
    ctx->pc = 0x10702Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10702Cu;
        // 0x107030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10702Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10702c:
    ctx->pc = 0x107034u;
}
