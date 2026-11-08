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

// Function: LoadReSource__9ApcStudio
// Address: 0x112d68 - 0x113054
void LoadReSource__9ApcStudio_0x112d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadReSource__9ApcStudio_0x112d68");
#endif

    switch (ctx->pc) {
        case 0x112d94u: goto label_112d94;
        case 0x112da0u: goto label_112da0;
        case 0x112db8u: goto label_112db8;
        case 0x112dc4u: goto label_112dc4;
        case 0x112de0u: goto label_112de0;
        case 0x112df0u: goto label_112df0;
        case 0x112e08u: goto label_112e08;
        case 0x112e18u: goto label_112e18;
        case 0x112e30u: goto label_112e30;
        case 0x112e38u: goto label_112e38;
        case 0x112e54u: goto label_112e54;
        case 0x112e5cu: goto label_112e5c;
        case 0x112e7cu: goto label_112e7c;
        case 0x112e88u: goto label_112e88;
        case 0x112e90u: goto label_112e90;
        case 0x112e98u: goto label_112e98;
        case 0x112f08u: goto label_112f08;
        case 0x112f10u: goto label_112f10;
        case 0x112f28u: goto label_112f28;
        case 0x112f40u: goto label_112f40;
        case 0x112f48u: goto label_112f48;
        case 0x112f50u: goto label_112f50;
        case 0x112f6cu: goto label_112f6c;
        case 0x112f74u: goto label_112f74;
        case 0x112f88u: goto label_112f88;
        case 0x112f94u: goto label_112f94;
        case 0x112f9cu: goto label_112f9c;
        case 0x112fa4u: goto label_112fa4;
        case 0x112fb8u: goto label_112fb8;
        case 0x112fd0u: goto label_112fd0;
        case 0x112fd8u: goto label_112fd8;
        case 0x112fe0u: goto label_112fe0;
        case 0x112ffcu: goto label_112ffc;
        case 0x113004u: goto label_113004;
        case 0x113018u: goto label_113018;
        case 0x113024u: goto label_113024;
        case 0x113034u: goto label_113034;
        default: break;
    }

    ctx->pc = 0x112d68u;

    // 0x112d68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x112d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x112d6c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x112d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x112d70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x112d70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d74: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x112d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x112d78: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x112d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x112d7c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x112d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x112d80: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x112d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x112d84: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x112d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x112d88: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x112d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x112d8c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x112D8Cu;
    SET_GPR_U32(ctx, 31, 0x112D94u);
    ctx->pc = 0x112D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D8Cu;
    // 0x112d90: 0x3c130025  lui         $s3, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x112D8Cu, 0x112D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D94u;
label_112d94:
    // 0x112d94: 0x240401d0  addiu       $a0, $zero, 0x1D0
    ctx->pc = 0x112d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x112d98: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x112D98u;
    SET_GPR_U32(ctx, 31, 0x112DA0u);
    ctx->pc = 0x112D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D98u;
    // 0x112d9c: 0x2673e620  addiu       $s3, $s3, -0x19E0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x112D98u, 0x112DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DA0u;
label_112da0:
    // 0x112da0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112da4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x112da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x112da8: 0x2442fed8  addiu       $v0, $v0, -0x128
    ctx->pc = 0x112da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967000));
    // 0x112dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112db0: 0xc061d70  jal         func_1875C0
    ctx->pc = 0x112DB0u;
    SET_GPR_U32(ctx, 31, 0x112DB8u);
    ctx->pc = 0x112DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DB0u;
    // 0x112db4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1875C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875C0u, 0x112DB0u, 0x112DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DB8u;
label_112db8:
    // 0x112db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112dbc: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x112DBCu;
    SET_GPR_U32(ctx, 31, 0x112DC4u);
    ctx->pc = 0x112DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DBCu;
    // 0x112dc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x112DBCu, 0x112DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DC4u;
label_112dc4:
    // 0x112dc4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x112dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x112dc8: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x112dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x112dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112dd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x112dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x112dd8: 0xc061de8  jal         func_1877A0
    ctx->pc = 0x112DD8u;
    SET_GPR_U32(ctx, 31, 0x112DE0u);
    ctx->pc = 0x112DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DD8u;
    // 0x112ddc: 0xae020150  sw          $v0, 0x150($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1877A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1877A0u, 0x112DD8u, 0x112DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DE0u;
label_112de0:
    // 0x112de0: 0xae90002c  sw          $s0, 0x2C($s4)
    ctx->pc = 0x112de0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 16));
    // 0x112de4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x112de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112de8: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x112DE8u;
    SET_GPR_U32(ctx, 31, 0x112DF0u);
    ctx->pc = 0x112DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DE8u;
    // 0x112dec: 0x8e910170  lw          $s1, 0x170($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x112DE8u, 0x112DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DF0u;
label_112df0:
    // 0x112df0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112df4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112dfc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x112dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x112e00: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x112E00u;
    SET_GPR_U32(ctx, 31, 0x112E08u);
    ctx->pc = 0x112E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E00u;
    // 0x112e04: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x112E00u, 0x112E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E08u;
label_112e08:
    // 0x112e08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e10: 0xc05fa10  jal         func_17E840
    ctx->pc = 0x112E10u;
    SET_GPR_U32(ctx, 31, 0x112E18u);
    ctx->pc = 0x112E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E10u;
    // 0x112e14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E840u, 0x112E10u, 0x112E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E18u;
label_112e18:
    // 0x112e18: 0xae920028  sw          $s2, 0x28($s4)
    ctx->pc = 0x112e18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 18));
    // 0x112e1c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x112e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x112e20: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x112e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x112e24: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x112e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x112e28: 0xc05bbe2  jal         func_16EF88
    ctx->pc = 0x112E28u;
    SET_GPR_U32(ctx, 31, 0x112E30u);
    ctx->pc = 0x112E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E28u;
    // 0x112e2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EF88u, 0x112E28u, 0x112E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E30u;
label_112e30:
    // 0x112e30: 0xc05be46  jal         func_16F918
    ctx->pc = 0x112E30u;
    SET_GPR_U32(ctx, 31, 0x112E38u);
    ctx->pc = 0x112E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E30u;
    // 0x112e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F918u, 0x112E30u, 0x112E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E38u;
label_112e38:
    // 0x112e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112e3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x112e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x112e40: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x112e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x112e44: 0x24040166  addiu       $a0, $zero, 0x166
    ctx->pc = 0x112e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x112e48: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x112e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x112e4c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x112E4Cu;
    SET_GPR_U32(ctx, 31, 0x112E54u);
    ctx->pc = 0x112E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E4Cu;
    // 0x112e50: 0xffa20050  sd          $v0, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x112E4Cu, 0x112E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E54u;
label_112e54:
    // 0x112e54: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x112E54u;
    SET_GPR_U32(ctx, 31, 0x112E5Cu);
    ctx->pc = 0x112E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E54u;
    // 0x112e58: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x112E54u, 0x112E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E5Cu;
label_112e5c:
    // 0x112e5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e64: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x112e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x112e68: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x112e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x112e6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e70: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x112e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x112e74: 0xc063114  jal         func_18C450
    ctx->pc = 0x112E74u;
    SET_GPR_U32(ctx, 31, 0x112E7Cu);
    ctx->pc = 0x112E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E74u;
    // 0x112e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C450u, 0x112E74u, 0x112E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E7Cu;
label_112e7c:
    // 0x112e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e80: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x112E80u;
    SET_GPR_U32(ctx, 31, 0x112E88u);
    ctx->pc = 0x112E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E80u;
    // 0x112e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x112E80u, 0x112E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E88u;
label_112e88:
    // 0x112e88: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x112E88u;
    SET_GPR_U32(ctx, 31, 0x112E90u);
    ctx->pc = 0x112E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E88u;
    // 0x112e8c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x112E88u, 0x112E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E90u;
label_112e90:
    // 0x112e90: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x112E90u;
    SET_GPR_U32(ctx, 31, 0x112E98u);
    ctx->pc = 0x112E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E90u;
    // 0x112e94: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x112E90u, 0x112E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E98u;
label_112e98:
    // 0x112e98: 0x8e470028  lw          $a3, 0x28($s2)
    ctx->pc = 0x112e98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x112e9c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x112e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x112ea0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x112ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x112ea4: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x112ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x112ea8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x112ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112eac: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x112eacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x112eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112eb4: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x112eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x112eb8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x112eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x112ebc: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x112ebcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x112ec0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x112ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x112ec4: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x112ec4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x112ec8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x112ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x112ecc: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x112eccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x112ed0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x112ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x112ed4: 0xdce30020  ld          $v1, 0x20($a3)
    ctx->pc = 0x112ed4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x112ed8: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x112ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x112edc: 0xdce20028  ld          $v0, 0x28($a3)
    ctx->pc = 0x112edcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x112ee0: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x112ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x112ee4: 0xdce30030  ld          $v1, 0x30($a3)
    ctx->pc = 0x112ee4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x112ee8: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x112ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x112eec: 0xdce20038  ld          $v0, 0x38($a3)
    ctx->pc = 0x112eecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x112ef0: 0xafa8004c  sw          $t0, 0x4C($sp)
    ctx->pc = 0x112ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 8));
    // 0x112ef4: 0xffa20038  sd          $v0, 0x38($sp)
    ctx->pc = 0x112ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
    // 0x112ef8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x112ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x112efc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x112efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x112f00: 0xc0631a2  jal         func_18C688
    ctx->pc = 0x112F00u;
    SET_GPR_U32(ctx, 31, 0x112F08u);
    ctx->pc = 0x112F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F00u;
    // 0x112f04: 0xafa80048  sw          $t0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C688u, 0x112F00u, 0x112F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F08u;
label_112f08:
    // 0x112f08: 0xc042fea  jal         func_10BFA8
    ctx->pc = 0x112F08u;
    SET_GPR_U32(ctx, 31, 0x112F10u);
    ctx->pc = 0x112F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F08u;
    // 0x112f0c: 0xae910394  sw          $s1, 0x394($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 916), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFA8u, 0x112F08u, 0x112F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F10u;
label_112f10:
    // 0x112f10: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x112f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x112f14: 0xae820398  sw          $v0, 0x398($s4)
    ctx->pc = 0x112f14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 920), GPR_U32(ctx, 2));
    // 0x112f18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x112f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f20: 0xc04161e  jal         func_105878
    ctx->pc = 0x112F20u;
    SET_GPR_U32(ctx, 31, 0x112F28u);
    ctx->pc = 0x112F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F20u;
    // 0x112f24: 0x8c70016c  lw          $s0, 0x16C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105878u, 0x112F20u, 0x112F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F28u;
label_112f28:
    // 0x112f28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x112f30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x112f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f38: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x112F38u;
    SET_GPR_U32(ctx, 31, 0x112F40u);
    ctx->pc = 0x112F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F38u;
    // 0x112f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x112F38u, 0x112F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F40u;
label_112f40:
    // 0x112f40: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x112F40u;
    SET_GPR_U32(ctx, 31, 0x112F48u);
    ctx->pc = 0x112F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F40u;
    // 0x112f44: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x112F40u, 0x112F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F48u;
label_112f48:
    // 0x112f48: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x112F48u;
    SET_GPR_U32(ctx, 31, 0x112F50u);
    ctx->pc = 0x112F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F48u;
    // 0x112f4c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x112F48u, 0x112F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F50u;
label_112f50:
    // 0x112f50: 0xae91038c  sw          $s1, 0x38C($s4)
    ctx->pc = 0x112f50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 908), GPR_U32(ctx, 17));
    // 0x112f54: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x112f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x112f58: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x112f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x112f5c: 0x8e320040  lw          $s2, 0x40($s1)
    ctx->pc = 0x112f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x112f60: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x112f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x112f64: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x112F64u;
    SET_GPR_U32(ctx, 31, 0x112F6Cu);
    ctx->pc = 0x112F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F64u;
    // 0x112f68: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x112F64u, 0x112F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F6Cu;
label_112f6c:
    // 0x112f6c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x112F6Cu;
    SET_GPR_U32(ctx, 31, 0x112F74u);
    ctx->pc = 0x112F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F6Cu;
    // 0x112f70: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x112F6Cu, 0x112F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F74u;
label_112f74:
    // 0x112f74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x112f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f7c: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x112f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x112f80: 0xc040152  jal         func_100548
    ctx->pc = 0x112F80u;
    SET_GPR_U32(ctx, 31, 0x112F88u);
    ctx->pc = 0x112F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F80u;
    // 0x112f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100548u, 0x112F80u, 0x112F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F88u;
label_112f88:
    // 0x112f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112f8c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x112F8Cu;
    SET_GPR_U32(ctx, 31, 0x112F94u);
    ctx->pc = 0x112F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F8Cu;
    // 0x112f90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x112F8Cu, 0x112F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F94u;
label_112f94:
    // 0x112f94: 0xc06a168  jal         func_1A85A0
    ctx->pc = 0x112F94u;
    SET_GPR_U32(ctx, 31, 0x112F9Cu);
    ctx->pc = 0x112F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F94u;
    // 0x112f98: 0xae300044  sw          $s0, 0x44($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A85A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A85A0u, 0x112F94u, 0x112F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F9Cu;
label_112f9c:
    // 0x112f9c: 0xc0463e8  jal         func_118FA0
    ctx->pc = 0x112F9Cu;
    SET_GPR_U32(ctx, 31, 0x112FA4u);
    ctx->pc = 0x118FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FA0u, 0x112F9Cu, 0x112FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FA4u;
label_112fa4:
    // 0x112fa4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x112fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x112fa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x112fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fb0: 0xc04161e  jal         func_105878
    ctx->pc = 0x112FB0u;
    SET_GPR_U32(ctx, 31, 0x112FB8u);
    ctx->pc = 0x112FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FB0u;
    // 0x112fb4: 0x8c50016c  lw          $s0, 0x16C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105878u, 0x112FB0u, 0x112FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FB8u;
label_112fb8:
    // 0x112fb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x112fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x112fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112fc8: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x112FC8u;
    SET_GPR_U32(ctx, 31, 0x112FD0u);
    ctx->pc = 0x112FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FC8u;
    // 0x112fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x112FC8u, 0x112FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FD0u;
label_112fd0:
    // 0x112fd0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x112FD0u;
    SET_GPR_U32(ctx, 31, 0x112FD8u);
    ctx->pc = 0x112FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FD0u;
    // 0x112fd4: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x112FD0u, 0x112FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FD8u;
label_112fd8:
    // 0x112fd8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x112FD8u;
    SET_GPR_U32(ctx, 31, 0x112FE0u);
    ctx->pc = 0x112FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FD8u;
    // 0x112fdc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x112FD8u, 0x112FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FE0u;
label_112fe0:
    // 0x112fe0: 0xae910390  sw          $s1, 0x390($s4)
    ctx->pc = 0x112fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 912), GPR_U32(ctx, 17));
    // 0x112fe4: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x112fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x112fe8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x112fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x112fec: 0x8e320040  lw          $s2, 0x40($s1)
    ctx->pc = 0x112fecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x112ff0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x112ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x112ff4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x112FF4u;
    SET_GPR_U32(ctx, 31, 0x112FFCu);
    ctx->pc = 0x112FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FF4u;
    // 0x112ff8: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x112FF4u, 0x112FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FFCu;
label_112ffc:
    // 0x112ffc: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x112FFCu;
    SET_GPR_U32(ctx, 31, 0x113004u);
    ctx->pc = 0x113000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FFCu;
    // 0x113000: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x112FFCu, 0x113004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113004u;
label_113004:
    // 0x113004: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x113004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11300c: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x11300cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x113010: 0xc040152  jal         func_100548
    ctx->pc = 0x113010u;
    SET_GPR_U32(ctx, 31, 0x113018u);
    ctx->pc = 0x113014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113010u;
    // 0x113014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100548u, 0x113010u, 0x113018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113018u;
label_113018:
    // 0x113018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11301c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x11301Cu;
    SET_GPR_U32(ctx, 31, 0x113024u);
    ctx->pc = 0x113020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11301Cu;
    // 0x113020: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x11301Cu, 0x113024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113024u;
label_113024:
    // 0x113024: 0xae300044  sw          $s0, 0x44($s1)
    ctx->pc = 0x113024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 16));
    // 0x113028: 0x8e84038c  lw          $a0, 0x38C($s4)
    ctx->pc = 0x113028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 908)));
    // 0x11302c: 0xc060e88  jal         func_183A20
    ctx->pc = 0x11302Cu;
    SET_GPR_U32(ctx, 31, 0x113034u);
    ctx->pc = 0x113030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11302Cu;
    // 0x113030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x11302Cu, 0x113034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113034u;
label_113034:
    // 0x113034: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x113034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113038: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x113038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x11303c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x11303cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113040: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x113040u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x113044: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x113044u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113048: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x113048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x11304c: 0x3e00008  jr          $ra
    ctx->pc = 0x11304Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11304Cu;
        // 0x113050: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11304Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113054u;
}
