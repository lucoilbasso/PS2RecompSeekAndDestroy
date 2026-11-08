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

// Function: GeneratorLostCheck__20ST_ParticleGenerator
// Address: 0x1302f8 - 0x130428
void GeneratorLostCheck__20ST_ParticleGenerator_0x1302f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeneratorLostCheck__20ST_ParticleGenerator_0x1302f8");
#endif

    switch (ctx->pc) {
        case 0x130390u: goto label_130390;
        case 0x1303a0u: goto label_1303a0;
        case 0x1303c8u: goto label_1303c8;
        case 0x1303f4u: goto label_1303f4;
        default: break;
    }

    ctx->pc = 0x1302f8u;

    // 0x1302f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1302f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1302fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1302fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130304: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130308: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13030c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130310: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130314: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x130314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x130318: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x130318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13031c: 0x1c40003a  bgtz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x13031Cu;
    {
        const bool branch_taken_0x13031c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x130320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13031Cu;
        // 0x130320: 0xae020134  sw          $v0, 0x134($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13031c) {
            ctx->pc = 0x130408u;
            goto label_130408;
        }
    }
    ctx->pc = 0x130324u;
    // 0x130324: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x130324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x130328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13032c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13032cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x130330: 0x54620037  bnel        $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x130330u;
    {
        const bool branch_taken_0x130330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x130330) {
            ctx->pc = 0x130334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130330u;
            // 0x130334: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130410u;
            goto label_130410;
        }
    }
    ctx->pc = 0x130338u;
    // 0x130338: 0x8602011a  lh          $v0, 0x11A($s0)
    ctx->pc = 0x130338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 282)));
    // 0x13033c: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x13033Cu;
    {
        const bool branch_taken_0x13033c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13033Cu;
        // 0x130340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13033c) {
            ctx->pc = 0x13040Cu;
            goto label_13040c;
        }
    }
    ctx->pc = 0x130344u;
    // 0x130344: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x130344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x130348: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x130348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13034c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13034cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130350: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x130350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x130354: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130354u;
    {
        const bool branch_taken_0x130354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x130358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130354u;
        // 0x130358: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130354) {
            ctx->pc = 0x130368u;
            goto label_130368;
        }
    }
    ctx->pc = 0x13035Cu;
    // 0x13035c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130360: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x130360u;
    {
        const bool branch_taken_0x130360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130360u;
        // 0x130364: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130360) {
            ctx->pc = 0x130408u;
            goto label_130408;
        }
    }
    ctx->pc = 0x130368u;
label_130368:
    // 0x130368: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x130368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x13036c: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x13036cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x130370: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x130370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130374: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130374u;
    {
        const bool branch_taken_0x130374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x130374) {
            ctx->pc = 0x130388u;
            goto label_130388;
        }
    }
    ctx->pc = 0x13037Cu;
    // 0x13037c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13037Cu;
    {
        const bool branch_taken_0x13037c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13037Cu;
        // 0x130380: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13037c) {
            ctx->pc = 0x1303A4u;
            goto label_1303a4;
        }
    }
    ctx->pc = 0x130384u;
    // 0x130384: 0x0  nop
    ctx->pc = 0x130384u;
    // NOP
label_130388:
    // 0x130388: 0xc04844a  jal         func_121128
    ctx->pc = 0x130388u;
    SET_GPR_U32(ctx, 31, 0x130390u);
    ctx->pc = 0x13038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130388u;
    // 0x13038c: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130388u, 0x130390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130390u;
label_130390:
    // 0x130390: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x130390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x130394: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x130394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x130398: 0xc04844a  jal         func_121128
    ctx->pc = 0x130398u;
    SET_GPR_U32(ctx, 31, 0x1303A0u);
    ctx->pc = 0x13039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130398u;
    // 0x13039c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130398u, 0x1303A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303A0u;
label_1303a0:
    // 0x1303a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1303a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1303a4:
    // 0x1303a4: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1303A4u;
    {
        const bool branch_taken_0x1303a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1303a4) {
            ctx->pc = 0x1303A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1303A4u;
            // 0x1303a8: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1303D0u;
            goto label_1303d0;
        }
    }
    ctx->pc = 0x1303ACu;
    // 0x1303ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1303acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1303b0: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x1303b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x1303b4: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1303b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1303b8: 0x58800013  blezl       $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1303B8u;
    {
        const bool branch_taken_0x1303b8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1303b8) {
            ctx->pc = 0x1303BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1303B8u;
            // 0x1303bc: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130408u;
            goto label_130408;
        }
    }
    ctx->pc = 0x1303C0u;
    // 0x1303c0: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1303C0u;
    SET_GPR_U32(ctx, 31, 0x1303C8u);
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1303C0u, 0x1303C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303C8u;
label_1303c8:
    // 0x1303c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1303C8u;
    {
        const bool branch_taken_0x1303c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1303CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303C8u;
        // 0x1303cc: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303c8) {
            ctx->pc = 0x1303FCu;
            goto label_1303fc;
        }
    }
    ctx->pc = 0x1303D0u;
label_1303d0:
    // 0x1303d0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1303d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1303d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1303d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1303d8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1303D8u;
    {
        const bool branch_taken_0x1303d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1303DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303D8u;
        // 0x1303dc: 0xae020134  sw          $v0, 0x134($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303d8) {
            ctx->pc = 0x130404u;
            goto label_130404;
        }
    }
    ctx->pc = 0x1303E0u;
    // 0x1303e0: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1303e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1303e4: 0x58800008  blezl       $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1303E4u;
    {
        const bool branch_taken_0x1303e4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1303e4) {
            ctx->pc = 0x1303E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1303E4u;
            // 0x1303e8: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130408u;
            goto label_130408;
        }
    }
    ctx->pc = 0x1303ECu;
    // 0x1303ec: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1303ECu;
    SET_GPR_U32(ctx, 31, 0x1303F4u);
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1303ECu, 0x1303F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303F4u;
label_1303f4:
    // 0x1303f4: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1303f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1303f8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1303f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1303fc:
    // 0x1303fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1303fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130400: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x130400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
label_130404:
    // 0x130404: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x130404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_130408:
    // 0x130408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x130408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13040c:
    // 0x13040c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13040cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_130410:
    // 0x130410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130418: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x130418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13041c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13041cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130420: 0x3e00008  jr          $ra
    ctx->pc = 0x130420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130420u;
        // 0x130424: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130428u;
}
