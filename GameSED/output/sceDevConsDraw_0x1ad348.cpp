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

// Function: sceDevConsDraw
// Address: 0x1ad348 - 0x1ad510
void sceDevConsDraw_0x1ad348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsDraw_0x1ad348");
#endif

    switch (ctx->pc) {
        case 0x1ad3a0u: goto label_1ad3a0;
        case 0x1ad3d0u: goto label_1ad3d0;
        case 0x1ad3e4u: goto label_1ad3e4;
        case 0x1ad418u: goto label_1ad418;
        case 0x1ad448u: goto label_1ad448;
        case 0x1ad464u: goto label_1ad464;
        case 0x1ad47cu: goto label_1ad47c;
        case 0x1ad488u: goto label_1ad488;
        case 0x1ad490u: goto label_1ad490;
        case 0x1ad49cu: goto label_1ad49c;
        case 0x1ad4acu: goto label_1ad4ac;
        case 0x1ad4d4u: goto label_1ad4d4;
        default: break;
    }

    ctx->pc = 0x1ad348u;

    // 0x1ad348: 0x3c0c0004  lui         $t4, 0x4
    ctx->pc = 0x1ad348u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4 << 16));
    // 0x1ad34c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1ad34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1ad350: 0x358c60d0  ori         $t4, $t4, 0x60D0
    ctx->pc = 0x1ad350u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)24784);
    // 0x1ad354: 0x34426024  ori         $v0, $v0, 0x6024
    ctx->pc = 0x1ad354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24612);
    // 0x1ad358: 0x3ace823  subu        $sp, $sp, $t4
    ctx->pc = 0x1ad358u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
    // 0x1ad35c: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x1ad35cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x1ad360: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ad360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ad364: 0xfdb1ff70  sd          $s1, -0x90($t5)
    ctx->pc = 0x1ad364u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967152), GPR_U64(ctx, 17));
    // 0x1ad368: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ad368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad36c: 0xfdbeffe0  sd          $fp, -0x20($t5)
    ctx->pc = 0x1ad36cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967264), GPR_U64(ctx, 30));
    // 0x1ad370: 0xfdb7ffd0  sd          $s7, -0x30($t5)
    ctx->pc = 0x1ad370u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967248), GPR_U64(ctx, 23));
    // 0x1ad374: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ad374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad378: 0xfdb3ff90  sd          $s3, -0x70($t5)
    ctx->pc = 0x1ad378u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967184), GPR_U64(ctx, 19));
    // 0x1ad37c: 0xfdb2ff80  sd          $s2, -0x80($t5)
    ctx->pc = 0x1ad37cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967168), GPR_U64(ctx, 18));
    // 0x1ad380: 0xfdb0ff60  sd          $s0, -0xA0($t5)
    ctx->pc = 0x1ad380u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967136), GPR_U64(ctx, 16));
    // 0x1ad384: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ad384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad388: 0xfdbffff0  sd          $ra, -0x10($t5)
    ctx->pc = 0x1ad388u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967280), GPR_U64(ctx, 31));
    // 0x1ad38c: 0xfdb6ffc0  sd          $s6, -0x40($t5)
    ctx->pc = 0x1ad38cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967232), GPR_U64(ctx, 22));
    // 0x1ad390: 0xfdb5ffb0  sd          $s5, -0x50($t5)
    ctx->pc = 0x1ad390u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967216), GPR_U64(ctx, 21));
    // 0x1ad394: 0xfdb4ffa0  sd          $s4, -0x60($t5)
    ctx->pc = 0x1ad394u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967200), GPR_U64(ctx, 20));
    // 0x1ad398: 0xc06b082  jal         func_1AC208
    ctx->pc = 0x1AD398u;
    SET_GPR_U32(ctx, 31, 0x1AD3A0u);
    ctx->pc = 0x1AD39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD398u;
    // 0x1ad39c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC208u, 0x1AD398u, 0x1AD3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD3A0u;
label_1ad3a0:
    // 0x1ad3a0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1ad3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1ad3a4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1ad3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ad3a8: 0x34636020  ori         $v1, $v1, 0x6020
    ctx->pc = 0x1ad3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24608);
    // 0x1ad3ac: 0x8e370000  lw          $s7, 0x0($s1)
    ctx->pc = 0x1ad3acu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ad3b0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1ad3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1ad3b4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1ad3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ad3b8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ad3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1ad3bc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1ad3bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad3c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ad3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad3c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ad3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad3c8: 0xc06ba44  jal         func_1AE910
    ctx->pc = 0x1AD3C8u;
    SET_GPR_U32(ctx, 31, 0x1AD3D0u);
    ctx->pc = 0x1AD3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD3C8u;
    // 0x1ad3cc: 0x8e330008  lw          $s3, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE910u, 0x1AD3C8u, 0x1AD3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD3D0u;
label_1ad3d0:
    // 0x1ad3d0: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1ad3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x1ad3d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ad3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ad3d8: 0x34a53000  ori         $a1, $a1, 0x3000
    ctx->pc = 0x1ad3d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12288);
    // 0x1ad3dc: 0xc06ba44  jal         func_1AE910
    ctx->pc = 0x1AD3DCu;
    SET_GPR_U32(ctx, 31, 0x1AD3E4u);
    ctx->pc = 0x1AD3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD3DCu;
    // 0x1ad3e0: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE910u, 0x1AD3DCu, 0x1AD3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD3E4u;
label_1ad3e4:
    // 0x1ad3e4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1ad3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1ad3e8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1ad3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1ad3ec: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1ad3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1ad3f0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1ad3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1ad3f4: 0x34426020  ori         $v0, $v0, 0x6020
    ctx->pc = 0x1ad3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24608);
    // 0x1ad3f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ad3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ad3fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ad3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad400: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1AD400u;
    {
        const bool branch_taken_0x1ad400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD400u;
        // 0x1ad404: 0x26360018  addiu       $s6, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad400) {
            ctx->pc = 0x1AD4C8u;
            goto label_1ad4c8;
        }
    }
    ctx->pc = 0x1AD408u;
    // 0x1ad408: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x1ad408u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ad40c: 0x17a040  sll         $s4, $s7, 1
    ctx->pc = 0x1ad40cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x1ad410: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1ad410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1ad414: 0x0  nop
    ctx->pc = 0x1ad414u;
    // NOP
label_1ad418:
    // 0x1ad418: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x1ad418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x1ad41c: 0x34636024  ori         $v1, $v1, 0x6024
    ctx->pc = 0x1ad41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24612);
    // 0x1ad420: 0x34846024  ori         $a0, $a0, 0x6024
    ctx->pc = 0x1ad420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24612);
    // 0x1ad424: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1ad424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1ad428: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1ad428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1ad42c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ad42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad430: 0x38900  sll         $s1, $v1, 4
    ctx->pc = 0x1ad430u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ad434: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1ad434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1ad438: 0x3b18021  addu        $s0, $sp, $s1
    ctx->pc = 0x1ad438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x1ad43c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ad43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ad440: 0xc06ba48  jal         func_1AE920
    ctx->pc = 0x1AD440u;
    SET_GPR_U32(ctx, 31, 0x1AD448u);
    ctx->pc = 0x1AD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD440u;
    // 0x1ad444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE920u, 0x1AD440u, 0x1AD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD448u;
label_1ad448:
    // 0x1ad448: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ad448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad44c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ad44cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad450: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1ad450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad458: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ad458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad45c: 0xc06b8a0  jal         func_1AE280
    ctx->pc = 0x1AD45Cu;
    SET_GPR_U32(ctx, 31, 0x1AD464u);
    ctx->pc = 0x1AD460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD45Cu;
    // 0x1ad460: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE280u, 0x1AD45Cu, 0x1AD464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD464u;
label_1ad464:
    // 0x1ad464: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ad464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ad468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad46c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ad470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad474: 0xc06ba80  jal         func_1AEA00
    ctx->pc = 0x1AD474u;
    SET_GPR_U32(ctx, 31, 0x1AD47Cu);
    ctx->pc = 0x1AD478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD474u;
    // 0x1ad478: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEA00u, 0x1AD474u, 0x1AD47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD47Cu;
label_1ad47c:
    // 0x1ad47c: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x1ad47cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1ad480: 0xc06ba4c  jal         func_1AE930
    ctx->pc = 0x1AD480u;
    SET_GPR_U32(ctx, 31, 0x1AD488u);
    ctx->pc = 0x1AD484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD480u;
    // 0x1ad484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE930u, 0x1AD480u, 0x1AD488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD488u;
label_1ad488:
    // 0x1ad488: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1AD488u;
    SET_GPR_U32(ctx, 31, 0x1AD490u);
    ctx->pc = 0x1AD48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD488u;
    // 0x1ad48c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1AD488u, 0x1AD490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD490u;
label_1ad490:
    // 0x1ad490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ad490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad494: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1AD494u;
    SET_GPR_U32(ctx, 31, 0x1AD49Cu);
    ctx->pc = 0x1AD498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD494u;
    // 0x1ad498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1AD494u, 0x1AD49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD49Cu;
label_1ad49c:
    // 0x1ad49c: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x1ad49cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1ad4a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1ad4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4a4: 0xc06b14e  jal         func_1AC538
    ctx->pc = 0x1AD4A4u;
    SET_GPR_U32(ctx, 31, 0x1AD4ACu);
    ctx->pc = 0x1AD4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4A4u;
    // 0x1ad4a8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC538u, 0x1AD4A4u, 0x1AD4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4ACu;
label_1ad4ac:
    // 0x1ad4ac: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1ad4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1ad4b0: 0x34636020  ori         $v1, $v1, 0x6020
    ctx->pc = 0x1ad4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24608);
    // 0x1ad4b4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1ad4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1ad4b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ad4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad4bc: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1ad4bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ad4c0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1AD4C0u;
    {
        const bool branch_taken_0x1ad4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4C0u;
        // 0x1ad4c4: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4c0) {
            ctx->pc = 0x1AD418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad418;
        }
    }
    ctx->pc = 0x1AD4C8u;
label_1ad4c8:
    // 0x1ad4c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ad4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4cc: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1AD4CCu;
    SET_GPR_U32(ctx, 31, 0x1AD4D4u);
    ctx->pc = 0x1AD4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4CCu;
    // 0x1ad4d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1AD4CCu, 0x1AD4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4D4u;
label_1ad4d4:
    // 0x1ad4d4: 0x3c0c0004  lui         $t4, 0x4
    ctx->pc = 0x1ad4d4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4 << 16));
    // 0x1ad4d8: 0x358c60d0  ori         $t4, $t4, 0x60D0
    ctx->pc = 0x1ad4d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)24784);
    // 0x1ad4dc: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x1ad4dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x1ad4e0: 0xddbffff0  ld          $ra, -0x10($t5)
    ctx->pc = 0x1ad4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 13), 4294967280)));
    // 0x1ad4e4: 0xddbeffe0  ld          $fp, -0x20($t5)
    ctx->pc = 0x1ad4e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 13), 4294967264)));
    // 0x1ad4e8: 0xddb7ffd0  ld          $s7, -0x30($t5)
    ctx->pc = 0x1ad4e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 13), 4294967248)));
    // 0x1ad4ec: 0xddb6ffc0  ld          $s6, -0x40($t5)
    ctx->pc = 0x1ad4ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 13), 4294967232)));
    // 0x1ad4f0: 0xddb5ffb0  ld          $s5, -0x50($t5)
    ctx->pc = 0x1ad4f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 13), 4294967216)));
    // 0x1ad4f4: 0xddb4ffa0  ld          $s4, -0x60($t5)
    ctx->pc = 0x1ad4f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 13), 4294967200)));
    // 0x1ad4f8: 0xddb3ff90  ld          $s3, -0x70($t5)
    ctx->pc = 0x1ad4f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 13), 4294967184)));
    // 0x1ad4fc: 0xddb2ff80  ld          $s2, -0x80($t5)
    ctx->pc = 0x1ad4fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 13), 4294967168)));
    // 0x1ad500: 0xddb1ff70  ld          $s1, -0x90($t5)
    ctx->pc = 0x1ad500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 13), 4294967152)));
    // 0x1ad504: 0xddb0ff60  ld          $s0, -0xA0($t5)
    ctx->pc = 0x1ad504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 13), 4294967136)));
    // 0x1ad508: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD508u;
        // 0x1ad50c: 0x3ace821  addu        $sp, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD510u;
}
