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

// Function: WDmaHardwareReset__Fi
// Address: 0x175fe0 - 0x176174
void WDmaHardwareReset__Fi_0x175fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WDmaHardwareReset__Fi_0x175fe0");
#endif

    switch (ctx->pc) {
        case 0x175ffcu: goto label_175ffc;
        case 0x176008u: goto label_176008;
        case 0x176014u: goto label_176014;
        case 0x176020u: goto label_176020;
        case 0x176074u: goto label_176074;
        case 0x17607cu: goto label_17607c;
        case 0x1760a0u: goto label_1760a0;
        case 0x1760bcu: goto label_1760bc;
        case 0x1760d4u: goto label_1760d4;
        case 0x1760ecu: goto label_1760ec;
        case 0x176108u: goto label_176108;
        case 0x176120u: goto label_176120;
        case 0x176128u: goto label_176128;
        case 0x176130u: goto label_176130;
        case 0x176144u: goto label_176144;
        case 0x176160u: goto label_176160;
        default: break;
    }

    ctx->pc = 0x175fe0u;

    // 0x175fe0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x175fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x175fe4: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x175fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x175fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fec: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x175fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x175ff0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x175ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x175ff4: 0xc06b082  jal         func_1AC208
    ctx->pc = 0x175FF4u;
    SET_GPR_U32(ctx, 31, 0x175FFCu);
    ctx->pc = 0x175FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175FF4u;
    // 0x175ff8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC208u, 0x175FF4u, 0x175FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175FFCu;
label_175ffc:
    // 0x175ffc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x175ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176000: 0xc06b082  jal         func_1AC208
    ctx->pc = 0x176000u;
    SET_GPR_U32(ctx, 31, 0x176008u);
    ctx->pc = 0x176004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176000u;
    // 0x176004: 0xaf828c50  sw          $v0, -0x73B0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC208u, 0x176000u, 0x176008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176008u;
label_176008:
    // 0x176008: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x176008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17600c: 0xc06b082  jal         func_1AC208
    ctx->pc = 0x17600Cu;
    SET_GPR_U32(ctx, 31, 0x176014u);
    ctx->pc = 0x176010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17600Cu;
    // 0x176010: 0xaf828c54  sw          $v0, -0x73AC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC208u, 0x17600Cu, 0x176014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176014u;
label_176014:
    // 0x176014: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x176014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x176018: 0xc06b082  jal         func_1AC208
    ctx->pc = 0x176018u;
    SET_GPR_U32(ctx, 31, 0x176020u);
    ctx->pc = 0x17601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176018u;
    // 0x17601c: 0xaf828c58  sw          $v0, -0x73A8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC208u, 0x176018u, 0x176020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176020u;
label_176020:
    // 0x176020: 0x8f888c50  lw          $t0, -0x73B0($gp)
    ctx->pc = 0x176020u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x176024: 0x8f868c54  lw          $a2, -0x73AC($gp)
    ctx->pc = 0x176024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    // 0x176028: 0x2409ffbf  addiu       $t1, $zero, -0x41
    ctx->pc = 0x176028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x17602c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x17602cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x176030: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x176030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176034: 0x8f878c58  lw          $a3, -0x73A8($gp)
    ctx->pc = 0x176034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
    // 0x176038: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x176038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x17603c: 0xaf828c5c  sw          $v0, -0x73A4($gp)
    ctx->pc = 0x17603cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937692), GPR_U32(ctx, 2));
    // 0x176040: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x176040u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x176044: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x176044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x176048: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x176048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x17604c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x17604cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x176050: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x176050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x176054: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x176054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x176058: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x176058u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x17605c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176060: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x176060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x176064: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x176064u;
    {
        const bool branch_taken_0x176064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x176068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176064u;
        // 0x176068: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176064) {
            ctx->pc = 0x176088u;
            goto label_176088;
        }
    }
    ctx->pc = 0x17606Cu;
    // 0x17606c: 0xc06c01e  jal         func_1B0078
    ctx->pc = 0x17606Cu;
    SET_GPR_U32(ctx, 31, 0x176074u);
    ctx->pc = 0x176070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17606Cu;
    // 0x176070: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0078u, 0x17606Cu, 0x176074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176074u;
label_176074:
    // 0x176074: 0xc06c01e  jal         func_1B0078
    ctx->pc = 0x176074u;
    SET_GPR_U32(ctx, 31, 0x17607Cu);
    ctx->pc = 0x176078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176074u;
    // 0x176078: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0078u, 0x176074u, 0x17607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17607Cu;
label_17607c:
    // 0x17607c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x17607Cu;
    {
        const bool branch_taken_0x17607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17607Cu;
        // 0x176080: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17607c) {
            ctx->pc = 0x176164u;
            goto label_176164;
        }
    }
    ctx->pc = 0x176084u;
    // 0x176084: 0x0  nop
    ctx->pc = 0x176084u;
    // NOP
label_176088:
    // 0x176088: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x176088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17608c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x17608cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x176090: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x176090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x176094: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x176094u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x176098: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x176098u;
    SET_GPR_U32(ctx, 31, 0x1760A0u);
    ctx->pc = 0x17609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176098u;
    // 0x17609c: 0xafb10008  sw          $s1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x176098u, 0x1760A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760A0u;
label_1760a0:
    // 0x1760a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1760a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1760a4: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x1760a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x1760a8: 0xafb10028  sw          $s1, 0x28($sp)
    ctx->pc = 0x1760a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 17));
    // 0x1760ac: 0x2610d640  addiu       $s0, $s0, -0x29C0
    ctx->pc = 0x1760acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956608));
    // 0x1760b0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1760b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1760b4: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1760B4u;
    SET_GPR_U32(ctx, 31, 0x1760BCu);
    ctx->pc = 0x1760B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760B4u;
    // 0x1760b8: 0xaf828c60  sw          $v0, -0x73A0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1760B4u, 0x1760BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760BCu;
label_1760bc:
    // 0x1760bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1760bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1760c0: 0xafb10044  sw          $s1, 0x44($sp)
    ctx->pc = 0x1760c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
    // 0x1760c4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1760c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1760c8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1760c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1760cc: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1760CCu;
    SET_GPR_U32(ctx, 31, 0x1760D4u);
    ctx->pc = 0x1760D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760CCu;
    // 0x1760d0: 0xaf828c64  sw          $v0, -0x739C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937700), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1760CCu, 0x1760D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760D4u;
label_1760d4:
    // 0x1760d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1760d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1760d8: 0xafb10064  sw          $s1, 0x64($sp)
    ctx->pc = 0x1760d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 17));
    // 0x1760dc: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1760dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1760e0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1760e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1760e4: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1760E4u;
    SET_GPR_U32(ctx, 31, 0x1760ECu);
    ctx->pc = 0x1760E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760E4u;
    // 0x1760e8: 0xaf828c68  sw          $v0, -0x7398($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1760E4u, 0x1760ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760ECu;
label_1760ec:
    // 0x1760ec: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x1760ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x1760f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1760f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1760f4: 0x24a56290  addiu       $a1, $a1, 0x6290
    ctx->pc = 0x1760f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25232));
    // 0x1760f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1760f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1760fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176100: 0xc06bc60  jal         func_1AF180
    ctx->pc = 0x176100u;
    SET_GPR_U32(ctx, 31, 0x176108u);
    ctx->pc = 0x176104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176100u;
    // 0x176104: 0xaf828c6c  sw          $v0, -0x7394($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937708), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF180u, 0x176100u, 0x176108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176108u;
label_176108:
    // 0x176108: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x176108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x17610c: 0x24a56300  addiu       $a1, $a1, 0x6300
    ctx->pc = 0x17610cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25344));
    // 0x176110: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x176114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176118: 0xc06bc60  jal         func_1AF180
    ctx->pc = 0x176118u;
    SET_GPR_U32(ctx, 31, 0x176120u);
    ctx->pc = 0x17611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176118u;
    // 0x17611c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF180u, 0x176118u, 0x176120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176120u;
label_176120:
    // 0x176120: 0xc06c01e  jal         func_1B0078
    ctx->pc = 0x176120u;
    SET_GPR_U32(ctx, 31, 0x176128u);
    ctx->pc = 0x176124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176120u;
    // 0x176124: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0078u, 0x176120u, 0x176128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176128u;
label_176128:
    // 0x176128: 0xc06c01e  jal         func_1B0078
    ctx->pc = 0x176128u;
    SET_GPR_U32(ctx, 31, 0x176130u);
    ctx->pc = 0x17612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176128u;
    // 0x17612c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0078u, 0x176128u, 0x176130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176130u;
label_176130:
    // 0x176130: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x176130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x176134: 0xafb10088  sw          $s1, 0x88($sp)
    ctx->pc = 0x176134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 17));
    // 0x176138: 0xafb10084  sw          $s1, 0x84($sp)
    ctx->pc = 0x176138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 17));
    // 0x17613c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x17613Cu;
    SET_GPR_U32(ctx, 31, 0x176144u);
    ctx->pc = 0x176140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17613Cu;
    // 0x176140: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x17613Cu, 0x176144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176144u;
label_176144:
    // 0x176144: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x176144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x176148: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x176148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17614c: 0x2463d640  addiu       $v1, $v1, -0x29C0
    ctx->pc = 0x17614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956608));
    // 0x176150: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x176150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x176154: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x176154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x176158: 0xc05d85e  jal         func_176178
    ctx->pc = 0x176158u;
    SET_GPR_U32(ctx, 31, 0x176160u);
    ctx->pc = 0x17615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176158u;
    // 0x17615c: 0x2484d650  addiu       $a0, $a0, -0x29B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176178u, 0x176158u, 0x176160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176160u;
label_176160:
    // 0x176160: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x176160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_176164:
    // 0x176164: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x176164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x176168: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x176168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17616c: 0x3e00008  jr          $ra
    ctx->pc = 0x17616Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17616Cu;
        // 0x176170: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17616Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176174u;
}
