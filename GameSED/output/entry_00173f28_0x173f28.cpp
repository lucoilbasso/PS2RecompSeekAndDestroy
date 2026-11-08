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

// Function: entry_00173f28
// Address: 0x173f28 - 0x1740ec
void entry_00173f28_0x173f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173f28_0x173f28");
#endif

    switch (ctx->pc) {
        case 0x173f68u: goto label_173f68;
        case 0x173f84u: goto label_173f84;
        case 0x173fb8u: goto label_173fb8;
        case 0x173fecu: goto label_173fec;
        case 0x173ff8u: goto label_173ff8;
        case 0x174024u: goto label_174024;
        case 0x17404cu: goto label_17404c;
        case 0x17408cu: goto label_17408c;
        case 0x17409cu: goto label_17409c;
        case 0x1740bcu: goto label_1740bc;
        default: break;
    }

    ctx->pc = 0x173f28u;

    // 0x173f28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x173f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x173f2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x173f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173f30: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x173f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x173f34: 0xaf808c04  sw          $zero, -0x73FC($gp)
    ctx->pc = 0x173f34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937604), GPR_U32(ctx, 0));
    // 0x173f38: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x173f38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x173f3c: 0xaf808c08  sw          $zero, -0x73F8($gp)
    ctx->pc = 0x173f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937608), GPR_U32(ctx, 0));
    // 0x173f40: 0xaf808c0c  sw          $zero, -0x73F4($gp)
    ctx->pc = 0x173f40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937612), GPR_U32(ctx, 0));
    // 0x173f44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x173f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f48: 0xaf808c10  sw          $zero, -0x73F0($gp)
    ctx->pc = 0x173f48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937616), GPR_U32(ctx, 0));
    // 0x173f4c: 0x2631cc40  addiu       $s1, $s1, -0x33C0
    ctx->pc = 0x173f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954048));
    // 0x173f50: 0xaf808c14  sw          $zero, -0x73EC($gp)
    ctx->pc = 0x173f50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937620), GPR_U32(ctx, 0));
    // 0x173f54: 0xae0c0030  sw          $t4, 0x30($s0)
    ctx->pc = 0x173f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 12));
    // 0x173f58: 0xae0b0034  sw          $t3, 0x34($s0)
    ctx->pc = 0x173f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 11));
    // 0x173f5c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x173f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x173f60: 0xc06a8b6  jal         func_1AA2D8
    ctx->pc = 0x173F60u;
    SET_GPR_U32(ctx, 31, 0x173F68u);
    ctx->pc = 0x173F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F60u;
    // 0x173f64: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA2D8u, 0x173F60u, 0x173F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F68u;
label_173f68:
    // 0x173f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f6c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x173f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x173f70: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x173f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x173f74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x173f78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f7c: 0xc06a964  jal         func_1AA590
    ctx->pc = 0x173F7Cu;
    SET_GPR_U32(ctx, 31, 0x173F84u);
    ctx->pc = 0x173F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F7Cu;
    // 0x173f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA590u, 0x173F7Cu, 0x173F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F84u;
label_173f84:
    // 0x173f84: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x173f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x173f88: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x173f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x173f8c: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x173f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x173f90: 0x344207ff  ori         $v0, $v0, 0x7FF
    ctx->pc = 0x173f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2047);
    // 0x173f94: 0x240481ff  addiu       $a0, $zero, -0x7E01
    ctx->pc = 0x173f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294935039));
    // 0x173f98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x173f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x173f9c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x173f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x173fa0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x173fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x173fa4: 0x34a51400  ori         $a1, $a1, 0x1400
    ctx->pc = 0x173fa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5120);
    // 0x173fa8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x173fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x173fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fb0: 0xc06aa42  jal         func_1AA908
    ctx->pc = 0x173FB0u;
    SET_GPR_U32(ctx, 31, 0x173FB8u);
    ctx->pc = 0x173FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FB0u;
    // 0x173fb4: 0xae050010  sw          $a1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA908u, 0x173FB0u, 0x173FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FB8u;
label_173fb8:
    // 0x173fb8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x173fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x173fbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x173fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x173fc0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x173fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x173fc4: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x173fc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x173fc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x173fc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fcc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x173fccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173fd0: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x173fd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x173fd4: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x173fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x173fd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x173fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173fdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fe0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173fe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fe4: 0xc05d102  jal         func_174408
    ctx->pc = 0x173FE4u;
    SET_GPR_U32(ctx, 31, 0x173FECu);
    ctx->pc = 0x173FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FE4u;
    // 0x173fe8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174408u, 0x173FE4u, 0x173FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FECu;
label_173fec:
    // 0x173fec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x173fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173ff0: 0xc05d204  jal         func_174810
    ctx->pc = 0x173FF0u;
    SET_GPR_U32(ctx, 31, 0x173FF8u);
    ctx->pc = 0x173FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FF0u;
    // 0x173ff4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174810u, 0x173FF0u, 0x173FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FF8u;
label_173ff8:
    // 0x173ff8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x173ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x173ffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174004: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x174004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x174008: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x174008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x17400c: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x17400cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x174010: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174014: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x174014u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x174018: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x174018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17401c: 0xc05d1bc  jal         func_1746F0
    ctx->pc = 0x17401Cu;
    SET_GPR_U32(ctx, 31, 0x174024u);
    ctx->pc = 0x174020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17401Cu;
    // 0x174020: 0x63183  sra         $a2, $a2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1746F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1746F0u, 0x17401Cu, 0x174024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174024u;
label_174024:
    // 0x174024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174028: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x174028u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17402c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17402cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174034: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174034u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17403c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17403cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174040: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x174040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174044: 0xc05d1cc  jal         func_174730
    ctx->pc = 0x174044u;
    SET_GPR_U32(ctx, 31, 0x17404Cu);
    ctx->pc = 0x174048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174044u;
    // 0x174048: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174730u, 0x174044u, 0x17404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17404Cu;
label_17404c:
    // 0x17404c: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x17404cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x174050: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x174050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x174054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174058: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17405c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x17405cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x174060: 0x2468001f  addiu       $t0, $v1, 0x1F
    ctx->pc = 0x174060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x174064: 0x2469003e  addiu       $t1, $v1, 0x3E
    ctx->pc = 0x174064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x174068: 0x29050000  slti        $a1, $t0, 0x0
    ctx->pc = 0x174068u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17406c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17406cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x174070: 0x125400b  movn        $t0, $t1, $a1
    ctx->pc = 0x174070u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 9));
    // 0x174074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174078: 0x84143  sra         $t0, $t0, 5
    ctx->pc = 0x174078u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 5));
    // 0x17407c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174080: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x174080u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x174084: 0xc05d1ea  jal         func_1747A8
    ctx->pc = 0x174084u;
    SET_GPR_U32(ctx, 31, 0x17408Cu);
    ctx->pc = 0x174088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174084u;
    // 0x174088: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1747A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1747A8u, 0x174084u, 0x17408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17408Cu;
label_17408c:
    // 0x17408c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17408cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174094: 0xc05d1fa  jal         func_1747E8
    ctx->pc = 0x174094u;
    SET_GPR_U32(ctx, 31, 0x17409Cu);
    ctx->pc = 0x174098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174094u;
    // 0x174098: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1747E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1747E8u, 0x174094u, 0x17409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17409Cu;
label_17409c:
    // 0x17409c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17409cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1740a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1740a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1740a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1740a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1740a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1740acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1740b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740b4: 0xc05d22a  jal         func_1748A8
    ctx->pc = 0x1740B4u;
    SET_GPR_U32(ctx, 31, 0x1740BCu);
    ctx->pc = 0x1740B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1740B4u;
    // 0x1740b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1748A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1748A8u, 0x1740B4u, 0x1740BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1740BCu;
label_1740bc:
    // 0x1740bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1740bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1740c0: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x1740c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x1740c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1740c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1740c8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1740c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1740cc: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1740ccu;
    runtime->Store32(rdram, ctx, 0x1000A010u, GPR_U32(ctx, 17));
    // 0x1740d0: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x1740d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
    // 0x1740d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1740d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1740d8: 0x34a5a000  ori         $a1, $a1, 0xA000
    ctx->pc = 0x1740d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
    // 0x1740dc: 0x24060101  addiu       $a2, $zero, 0x101
    ctx->pc = 0x1740dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1740e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1740e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1740e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1740e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1740e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1740e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1740ecu;
}
