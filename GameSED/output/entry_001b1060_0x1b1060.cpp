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

// Function: entry_001b1060
// Address: 0x1b1060 - 0x1b1178
void entry_001b1060_0x1b1060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1060_0x1b1060");
#endif

    switch (ctx->pc) {
        case 0x1b1068u: goto label_1b1068;
        case 0x1b1070u: goto label_1b1070;
        case 0x1b1078u: goto label_1b1078;
        case 0x1b10ecu: goto label_1b10ec;
        case 0x1b1104u: goto label_1b1104;
        case 0x1b111cu: goto label_1b111c;
        case 0x1b1134u: goto label_1b1134;
        case 0x1b113cu: goto label_1b113c;
        case 0x1b1148u: goto label_1b1148;
        case 0x1b1174u: goto label_1b1174;
        default: break;
    }

    ctx->pc = 0x1b1060u;

    // 0x1b1060: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B1060u;
    SET_GPR_U32(ctx, 31, 0x1B1068u);
    ctx->pc = 0x1B1064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1060u;
    // 0x1b1064: 0xac71a978  sw          $s1, -0x5688($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945144), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B1060u, 0x1B1068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1068u;
label_1b1068:
    // 0x1b1068: 0xc06de60  jal         func_1B7980
    ctx->pc = 0x1B1068u;
    SET_GPR_U32(ctx, 31, 0x1B1070u);
    ctx->pc = 0x1B7980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7980u, 0x1B1068u, 0x1B1070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1070u;
label_1b1070:
    // 0x1b1070: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1B1070u;
    SET_GPR_U32(ctx, 31, 0x1B1078u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1B1070u, 0x1B1078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1078u;
label_1b1078:
    // 0x1b1078: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1b1078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1b107c: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x1b107cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x1b1080: 0x24728200  addiu       $s2, $v1, -0x7E00
    ctx->pc = 0x1b1080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935040));
    // 0x1b1084: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1b1084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1b1088: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x1b1088u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x1b108c: 0x25109a00  addiu       $s0, $t0, -0x6600
    ctx->pc = 0x1b108cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941184));
    // 0x1b1090: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1b1090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b1094: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b1094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b1098: 0x24c68a00  addiu       $a2, $a2, -0x7600
    ctx->pc = 0x1b1098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937088));
    // 0x1b109c: 0x24e79200  addiu       $a3, $a3, -0x6E00
    ctx->pc = 0x1b109cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939136));
    // 0x1b10a0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b10a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1b10a4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1b10a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1b10a8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1b10a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x409A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x409A20u, _value); } while (0);
    // 0x1b10ac: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x1b10acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1b10b0: 0xad119a00  sw          $s1, -0x6600($t0)
    ctx->pc = 0x1b10b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x409A00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x409A00u, _value); } while (0);
    // 0x1b10b4: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b10b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b10b8: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x1b10b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x409A14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x409A14u, _value); } while (0);
    // 0x1b10bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b10bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b10c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1b10c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x409A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x409A04u, _value); } while (0);
    // 0x1b10c4: 0x24a51320  addiu       $a1, $a1, 0x1320
    ctx->pc = 0x1b10c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4896));
    // 0x1b10c8: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x1b10c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x409A1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x409A1Cu, _value); } while (0);
    // 0x1b10cc: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1b10ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1b10d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b10d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b10d4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b10d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x409A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x409A08u, _value); } while (0);
    // 0x1b10d8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1b10d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x409A0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x409A0Cu, _value); } while (0);
    // 0x1b10dc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b10dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x409A10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x409A10u, _value); } while (0);
    // 0x1b10e0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1b10e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x409A18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x409A18u, _value); } while (0);
    // 0x1b10e4: 0xc06df1a  jal         func_1B7C68
    ctx->pc = 0x1B10E4u;
    SET_GPR_U32(ctx, 31, 0x1B10ECu);
    ctx->pc = 0x1B10E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10E4u;
    // 0x1b10e8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C68u, 0x1B10E4u, 0x1B10ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10ECu;
label_1b10ec:
    // 0x1b10ec: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b10ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b10f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b10f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b10f4: 0x24a515e0  addiu       $a1, $a1, 0x15E0
    ctx->pc = 0x1b10f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5600));
    // 0x1b10f8: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1b10f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x1b10fc: 0xc06df1a  jal         func_1B7C68
    ctx->pc = 0x1B10FCu;
    SET_GPR_U32(ctx, 31, 0x1B1104u);
    ctx->pc = 0x1B1100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10FCu;
    // 0x1b1100: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C68u, 0x1B10FCu, 0x1B1104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1104u;
label_1b1104:
    // 0x1b1104: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b1104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b1108: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b1108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b110c: 0x24a517d0  addiu       $a1, $a1, 0x17D0
    ctx->pc = 0x1b110cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6096));
    // 0x1b1110: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1b1110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x1b1114: 0xc06df1a  jal         func_1B7C68
    ctx->pc = 0x1B1114u;
    SET_GPR_U32(ctx, 31, 0x1B111Cu);
    ctx->pc = 0x1B1118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1114u;
    // 0x1b1118: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C68u, 0x1B1114u, 0x1B111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B111Cu;
label_1b111c:
    // 0x1b111c: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b111cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b1120: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b1120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1124: 0x24a513d8  addiu       $a1, $a1, 0x13D8
    ctx->pc = 0x1b1124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5080));
    // 0x1b1128: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b1128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b112c: 0xc06df1a  jal         func_1B7C68
    ctx->pc = 0x1B112Cu;
    SET_GPR_U32(ctx, 31, 0x1B1134u);
    ctx->pc = 0x1B1130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B112Cu;
    // 0x1b1130: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C68u, 0x1B112Cu, 0x1B1134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1134u;
label_1b1134:
    // 0x1b1134: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B1134u;
    SET_GPR_U32(ctx, 31, 0x1B113Cu);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B1134u, 0x1B113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B113Cu;
label_1b113c:
    // 0x1b113c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b113cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1140: 0xc06be1c  jal         func_1AF870
    ctx->pc = 0x1B1140u;
    SET_GPR_U32(ctx, 31, 0x1B1148u);
    ctx->pc = 0x1B1144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1140u;
    // 0x1b1144: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF870u, 0x1B1140u, 0x1B1148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1148u;
label_1b1148:
    // 0x1b1148: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B1148u;
    {
        const bool branch_taken_0x1b1148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1148u;
        // 0x1b114c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1148) {
            ctx->pc = 0x1B11A8u;
            return;
        }
    }
    ctx->pc = 0x1B1150u;
    // 0x1b1150: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x1b1150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1b1154: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b1154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1158: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x1b1158u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
    // 0x1b115c: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1b115cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1b1160: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1b1160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b1164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b1164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1168: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b116c: 0xc06df7e  jal         func_1B7DF8
    ctx->pc = 0x1B116Cu;
    SET_GPR_U32(ctx, 31, 0x1B1174u);
    ctx->pc = 0x1B1170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B116Cu;
    // 0x1b1170: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DF8u, 0x1B116Cu, 0x1B1174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1174u;
label_1b1174:
    // 0x1b1174: 0x0  nop
    ctx->pc = 0x1b1174u;
    // NOP
    ctx->pc = 0x1b1178u;
}
