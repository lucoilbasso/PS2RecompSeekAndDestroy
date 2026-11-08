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

// Function: GetSpriteList__9ApcPtcSprPUiP20ST_ParticleGeneratorP15ST_EffectSprite
// Address: 0x122418 - 0x122568
void GetSpriteList__9ApcPtcSprPUiP20ST_ParticleGeneratorP15ST_EffectSprite_0x122418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSpriteList__9ApcPtcSprPUiP20ST_ParticleGeneratorP15ST_EffectSprite_0x122418");
#endif

    switch (ctx->pc) {
        case 0x12247cu: goto label_12247c;
        case 0x1224a0u: goto label_1224a0;
        case 0x1224b0u: goto label_1224b0;
        case 0x1224c0u: goto label_1224c0;
        default: break;
    }

    ctx->pc = 0x122418u;

    // 0x122418: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12241c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12241cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x122420: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x122420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122424: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x122424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x122428: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x122428u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12242c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12242cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x122430: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x122430u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122434: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x122434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x122438: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x122438u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12243c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12243cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122440: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x122440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x122444: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x122444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x122448: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x122448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12244c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12244Cu;
    {
        const bool branch_taken_0x12244c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x122450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12244Cu;
        // 0x122450: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12244c) {
            ctx->pc = 0x122460u;
            goto label_122460;
        }
    }
    ctx->pc = 0x122454u;
    // 0x122454: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x122454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x122458: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x122458u;
    {
        const bool branch_taken_0x122458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122458) {
            ctx->pc = 0x12245Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122458u;
            // 0x12245c: 0x8ec20158  lw          $v0, 0x158($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122488u;
            goto label_122488;
        }
    }
    ctx->pc = 0x122460u;
label_122460:
    // 0x122460: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x122460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x122464: 0x8ec50158  lw          $a1, 0x158($s6)
    ctx->pc = 0x122464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
    // 0x122468: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x122468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12246c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x12246cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x122470: 0x24845c00  addiu       $a0, $a0, 0x5C00
    ctx->pc = 0x122470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23552));
    // 0x122474: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x122474u;
    SET_GPR_U32(ctx, 31, 0x12247Cu);
    ctx->pc = 0x122478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122474u;
    // 0x122478: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x122474u, 0x12247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12247Cu;
label_12247c:
    // 0x12247c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x12247Cu;
    {
        const bool branch_taken_0x12247c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12247Cu;
        // 0x122480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12247c) {
            ctx->pc = 0x12253Cu;
            goto label_12253c;
        }
    }
    ctx->pc = 0x122484u;
    // 0x122484: 0x0  nop
    ctx->pc = 0x122484u;
    // NOP
label_122488:
    // 0x122488: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x122488u;
    {
        const bool branch_taken_0x122488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122488u;
        // 0x12248c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122488) {
            ctx->pc = 0x122508u;
            goto label_122508;
        }
    }
    ctx->pc = 0x122490u;
    // 0x122490: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x122490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122494: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x122494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122498: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x122498u;
    {
        const bool branch_taken_0x122498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122498u;
        // 0x12249c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122498) {
            ctx->pc = 0x1224D0u;
            goto label_1224d0;
        }
    }
    ctx->pc = 0x1224A0u;
label_1224a0:
    // 0x1224a0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1224A0u;
    {
        const bool branch_taken_0x1224a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1224A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224A0u;
        // 0x1224a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224a0) {
            ctx->pc = 0x122508u;
            goto label_122508;
        }
    }
    ctx->pc = 0x1224A8u;
    // 0x1224a8: 0xc0485a8  jal         func_1216A0
    ctx->pc = 0x1224A8u;
    SET_GPR_U32(ctx, 31, 0x1224B0u);
    ctx->pc = 0x1224ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224A8u;
    // 0x1224ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216A0u, 0x1224A8u, 0x1224B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224B0u;
label_1224b0:
    // 0x1224b0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1224b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1224b4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1224b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224b8: 0xc048446  jal         func_121118
    ctx->pc = 0x1224B8u;
    SET_GPR_U32(ctx, 31, 0x1224C0u);
    ctx->pc = 0x1224BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224B8u;
    // 0x1224bc: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121118u, 0x1224B8u, 0x1224C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224C0u;
label_1224c0:
    // 0x1224c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1224c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1224c4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1224c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1224c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1224C8u;
    {
        const bool branch_taken_0x1224c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1224CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224C8u;
        // 0x1224cc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224c8) {
            ctx->pc = 0x1224A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1224a0;
        }
    }
    ctx->pc = 0x1224D0u;
label_1224d0:
    // 0x1224d0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1224d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1224d4: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1224D4u;
    {
        const bool branch_taken_0x1224d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1224D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224D4u;
        // 0x1224d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224d4) {
            ctx->pc = 0x12253Cu;
            goto label_12253c;
        }
    }
    ctx->pc = 0x1224DCu;
    // 0x1224dc: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1224dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x1224e0: 0x8ec2015c  lw          $v0, 0x15C($s6)
    ctx->pc = 0x1224e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x1224e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1224E4u;
    {
        const bool branch_taken_0x1224e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1224e4) {
            ctx->pc = 0x1224E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1224E4u;
            // 0x1224e8: 0xaed3015c  sw          $s3, 0x15C($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 348), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122500u;
            goto label_122500;
        }
    }
    ctx->pc = 0x1224ECu;
    // 0x1224ec: 0x56a0000a  bnel        $s5, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1224ECu;
    {
        const bool branch_taken_0x1224ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1224ec) {
            ctx->pc = 0x1224F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1224ECu;
            // 0x1224f0: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122518u;
            goto label_122518;
        }
    }
    ctx->pc = 0x1224F4u;
    // 0x1224f4: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1224f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x1224f8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1224f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x1224fc: 0xaed3015c  sw          $s3, 0x15C($s6)
    ctx->pc = 0x1224fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 348), GPR_U32(ctx, 19));
label_122500:
    // 0x122500: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x122500u;
    {
        const bool branch_taken_0x122500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122500u;
        // 0x122504: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122500) {
            ctx->pc = 0x12252Cu;
            goto label_12252c;
        }
    }
    ctx->pc = 0x122508u;
label_122508:
    // 0x122508: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x122508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x12250c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12250Cu;
    {
        const bool branch_taken_0x12250c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12250Cu;
        // 0x122510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12250c) {
            ctx->pc = 0x12253Cu;
            goto label_12253c;
        }
    }
    ctx->pc = 0x122514u;
    // 0x122514: 0x0  nop
    ctx->pc = 0x122514u;
    // NOP
label_122518:
    // 0x122518: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x122518u;
    {
        const bool branch_taken_0x122518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122518u;
        // 0x12251c: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122518) {
            ctx->pc = 0x122524u;
            goto label_122524;
        }
    }
    ctx->pc = 0x122520u;
    // 0x122520: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x122520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_122524:
    // 0x122524: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x122524u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
    // 0x122528: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x122528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_12252c:
    // 0x12252c: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12252Cu;
    {
        const bool branch_taken_0x12252c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12252c) {
            ctx->pc = 0x122530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12252Cu;
            // 0x122530: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122534u;
            goto label_122534;
        }
    }
    ctx->pc = 0x122534u;
label_122534:
    // 0x122534: 0xaed00158  sw          $s0, 0x158($s6)
    ctx->pc = 0x122534u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 344), GPR_U32(ctx, 16));
    // 0x122538: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x122538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12253c:
    // 0x12253c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12253cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122540: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122544: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x122544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122548: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x122548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12254c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12254cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122550: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x122550u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x122554: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x122554u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122558: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x122558u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12255c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12255cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122560: 0x3e00008  jr          $ra
    ctx->pc = 0x122560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122560u;
        // 0x122564: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122568u;
}
