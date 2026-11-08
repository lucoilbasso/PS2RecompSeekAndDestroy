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

// Function: PassWord_GetRankingData__FP20ExpansionRankingDataP15BsSCDEntControl
// Address: 0x117838 - 0x117960
void PassWord_GetRankingData__FP20ExpansionRankingDataP15BsSCDEntControl_0x117838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PassWord_GetRankingData__FP20ExpansionRankingDataP15BsSCDEntControl_0x117838");
#endif

    switch (ctx->pc) {
        case 0x11786cu: goto label_11786c;
        case 0x117874u: goto label_117874;
        case 0x117890u: goto label_117890;
        case 0x1178e0u: goto label_1178e0;
        case 0x117900u: goto label_117900;
        default: break;
    }

    ctx->pc = 0x117838u;

    // 0x117838: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11783c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11783cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117840: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x117840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117844: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x117844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x117848: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x117848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11784c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11784cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117850: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x117850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x117854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x117854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x117858: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x117858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11785c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x11785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x117860: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117864: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x117864u;
    SET_GPR_U32(ctx, 31, 0x11786Cu);
    ctx->pc = 0x117868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117864u;
    // 0x117868: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x117864u, 0x11786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11786Cu;
label_11786c:
    // 0x11786c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11786Cu;
    SET_GPR_U32(ctx, 31, 0x117874u);
    ctx->pc = 0x117870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11786Cu;
    // 0x117870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11786Cu, 0x117874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117874u;
label_117874:
    // 0x117874: 0x2c4303e7  sltiu       $v1, $v0, 0x3E7
    ctx->pc = 0x117874u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)999) ? 1 : 0);
    // 0x117878: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117878u;
    {
        const bool branch_taken_0x117878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117878u;
        // 0x11787c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117878) {
            ctx->pc = 0x117888u;
            goto label_117888;
        }
    }
    ctx->pc = 0x117880u;
    // 0x117880: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x117880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x117884: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x117884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_117888:
    // 0x117888: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x117888u;
    SET_GPR_U32(ctx, 31, 0x117890u);
    ctx->pc = 0x11788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117888u;
    // 0x11788c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x117888u, 0x117890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117890u;
label_117890:
    // 0x117890: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x117890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x117894: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x117894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x117898: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x117898u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11789c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11789Cu;
    {
        const bool branch_taken_0x11789c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11789Cu;
        // 0x1178a0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11789c) {
            ctx->pc = 0x1178B0u;
            goto label_1178b0;
        }
    }
    ctx->pc = 0x1178A4u;
    // 0x1178a4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1178a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1178a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1178a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1178ac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1178acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1178b0:
    // 0x1178b0: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1178b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1178b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1178b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1178b8: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x1178b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x1178bc: 0xa6420010  sh          $v0, 0x10($s2)
    ctx->pc = 0x1178bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1178c0: 0x8c640fe8  lw          $a0, 0xFE8($v1)
    ctx->pc = 0x1178c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1ED528u));
    // 0x1178c4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1178c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178c8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1178c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1178cc: 0x26510012  addiu       $s1, $s2, 0x12
    ctx->pc = 0x1178ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 18));
    // 0x1178d0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x1178d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x1178d4: 0x8c620fec  lw          $v0, 0xFEC($v1)
    ctx->pc = 0x1178d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1ED52Cu));
    // 0x1178d8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1178d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1178dc: 0x0  nop
    ctx->pc = 0x1178dcu;
    // NOP
label_1178e0:
    // 0x1178e0: 0x138600  sll         $s0, $s3, 24
    ctx->pc = 0x1178e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
    // 0x1178e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1178e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1178e8: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x1178e8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x1178ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1178ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1178f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1178f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178f4: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1178f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1178f8: 0xc045360  jal         func_114D80
    ctx->pc = 0x1178F8u;
    SET_GPR_U32(ctx, 31, 0x117900u);
    ctx->pc = 0x1178FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1178F8u;
    // 0x1178fc: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1178F8u, 0x117900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117900u;
label_117900:
    // 0x117900: 0x86020ff0  lh          $v0, 0xFF0($s0)
    ctx->pc = 0x117900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x117904: 0x2a63000c  slti        $v1, $s3, 0xC
    ctx->pc = 0x117904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x117908: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x117908u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x11790c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x11790cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x117910: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x117910u;
    {
        const bool branch_taken_0x117910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117910u;
        // 0x117914: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117910) {
            ctx->pc = 0x1178E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1178e0;
        }
    }
    ctx->pc = 0x117918u;
    // 0x117918: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x117918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11791c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11791cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x117920: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x117920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x117924: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x117924u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x117928: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x117928u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x11792c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x11792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x117930: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x117930u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x117934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117938: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x117938u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11793c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11793cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117940: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x117940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x117944: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x117944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117948: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x117948u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11794c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11794cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117950: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x117950u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x117954: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117958: 0x3e00008  jr          $ra
    ctx->pc = 0x117958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117958u;
        // 0x11795c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117960u;
}
