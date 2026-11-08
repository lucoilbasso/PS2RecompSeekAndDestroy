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

// Function: DrawFunc__9ApcPtcSprP8WcEntity
// Address: 0x122838 - 0x123100
void DrawFunc__9ApcPtcSprP8WcEntity_0x122838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__9ApcPtcSprP8WcEntity_0x122838");
#endif

    switch (ctx->pc) {
        case 0x1228a0u: goto label_1228a0;
        case 0x122950u: goto label_122950;
        case 0x122978u: goto label_122978;
        case 0x1229acu: goto label_1229ac;
        case 0x1229c4u: goto label_1229c4;
        case 0x122a24u: goto label_122a24;
        case 0x122a30u: goto label_122a30;
        case 0x122a50u: goto label_122a50;
        case 0x122a58u: goto label_122a58;
        case 0x122a98u: goto label_122a98;
        case 0x122ad0u: goto label_122ad0;
        case 0x122adcu: goto label_122adc;
        case 0x122c10u: goto label_122c10;
        case 0x122d18u: goto label_122d18;
        case 0x122d20u: goto label_122d20;
        case 0x122d44u: goto label_122d44;
        case 0x122fe0u: goto label_122fe0;
        case 0x122fe8u: goto label_122fe8;
        case 0x123008u: goto label_123008;
        case 0x123010u: goto label_123010;
        case 0x123034u: goto label_123034;
        case 0x1230a8u: goto label_1230a8;
        default: break;
    }

    ctx->pc = 0x122838u;

    // 0x122838: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x122838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x12283c: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x12283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x122840: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x122840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x122844: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x122844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x122848: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x122848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x12284c: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x12284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x122850: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x122850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x122854: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x122854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x122858: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x122858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x12285c: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x12285cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x122860: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x122860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x122864: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x122864u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x122868: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x122868u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x12286c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x12286cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x122870: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x122870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x122874: 0x8c92015c  lw          $s2, 0x15C($a0)
    ctx->pc = 0x122874u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
    // 0x122878: 0x5240002d  beql        $s2, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x122878u;
    {
        const bool branch_taken_0x122878 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x122878) {
            ctx->pc = 0x12287Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122878u;
            // 0x12287c: 0x8ca20164  lw          $v0, 0x164($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 356)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122930u;
            goto label_122930;
        }
    }
    ctx->pc = 0x122880u;
    // 0x122880: 0x240d0044  addiu       $t5, $zero, 0x44
    ctx->pc = 0x122880u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x122884: 0x240c0160  addiu       $t4, $zero, 0x160
    ctx->pc = 0x122884u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x122888: 0x24890168  addiu       $t1, $a0, 0x168
    ctx->pc = 0x122888u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
    // 0x12288c: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x12288cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x122890: 0x240b0048  addiu       $t3, $zero, 0x48
    ctx->pc = 0x122890u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x122894: 0x240a0164  addiu       $t2, $zero, 0x164
    ctx->pc = 0x122894u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x122898: 0x2488016c  addiu       $t0, $a0, 0x16C
    ctx->pc = 0x122898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 364));
    // 0x12289c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x12289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1228a0:
    // 0x1228a0: 0x144d000f  bne         $v0, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x1228A0u;
    {
        const bool branch_taken_0x1228a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x1228a0) {
            ctx->pc = 0x1228E0u;
            goto label_1228e0;
        }
    }
    ctx->pc = 0x1228A8u;
    // 0x1228a8: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x1228a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1228ac: 0x4c2021  addu        $a0, $v0, $t4
    ctx->pc = 0x1228acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1228b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1228b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1228b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1228B4u;
    {
        const bool branch_taken_0x1228b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1228B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228B4u;
        // 0x1228b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228b4) {
            ctx->pc = 0x1228C8u;
            goto label_1228c8;
        }
    }
    ctx->pc = 0x1228BCu;
    // 0x1228bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1228BCu;
    {
        const bool branch_taken_0x1228bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228BCu;
        // 0x1228c0: 0xac920000  sw          $s2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228bc) {
            ctx->pc = 0x1228D0u;
            goto label_1228d0;
        }
    }
    ctx->pc = 0x1228C4u;
    // 0x1228c4: 0x0  nop
    ctx->pc = 0x1228c4u;
    // NOP
label_1228c8:
    // 0x1228c8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1228c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1228cc: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x1228ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_1228d0:
    // 0x1228d0: 0xace60160  sw          $a2, 0x160($a3)
    ctx->pc = 0x1228d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 6));
    // 0x1228d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1228D4u;
    {
        const bool branch_taken_0x1228d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228D4u;
        // 0x1228d8: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228d4) {
            ctx->pc = 0x122920u;
            goto label_122920;
        }
    }
    ctx->pc = 0x1228DCu;
    // 0x1228dc: 0x0  nop
    ctx->pc = 0x1228dcu;
    // NOP
label_1228e0:
    // 0x1228e0: 0x544b0010  bnel        $v0, $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1228E0u;
    {
        const bool branch_taken_0x1228e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x1228e0) {
            ctx->pc = 0x1228E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1228E0u;
            // 0x1228e4: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122924u;
            goto label_122924;
        }
    }
    ctx->pc = 0x1228E8u;
    // 0x1228e8: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x1228e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1228ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1228ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1228f0: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x1228f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1228f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1228f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1228f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1228F8u;
    {
        const bool branch_taken_0x1228f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1228FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228F8u;
        // 0x1228fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228f8) {
            ctx->pc = 0x122908u;
            goto label_122908;
        }
    }
    ctx->pc = 0x122900u;
    // 0x122900: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x122900u;
    {
        const bool branch_taken_0x122900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122900u;
        // 0x122904: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122900) {
            ctx->pc = 0x122910u;
            goto label_122910;
        }
    }
    ctx->pc = 0x122908u;
label_122908:
    // 0x122908: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x122908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12290c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x12290cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_122910:
    // 0x122910: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x122910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x122914: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x122914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x122918: 0xac440160  sw          $a0, 0x160($v0)
    ctx->pc = 0x122918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 4));
    // 0x12291c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12291cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_122920:
    // 0x122920: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x122920u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_122924:
    // 0x122924: 0x5640ffde  bnel        $s2, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x122924u;
    {
        const bool branch_taken_0x122924 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x122924) {
            ctx->pc = 0x122928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122924u;
            // 0x122928: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1228A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1228a0;
        }
    }
    ctx->pc = 0x12292Cu;
    // 0x12292c: 0x8ca20164  lw          $v0, 0x164($a1)
    ctx->pc = 0x12292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 356)));
label_122930:
    // 0x122930: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x122930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122934: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x122934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x122938: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x122938u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12293c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12293cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122940: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x122940u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122944: 0xc456017c  lwc1        $f22, 0x17C($v0)
    ctx->pc = 0x122944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x122948: 0xc4550180  lwc1        $f21, 0x180($v0)
    ctx->pc = 0x122948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12294c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x12294cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_122950:
    // 0x122950: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x122950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x122954: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x122954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x122958: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x122958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12295c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x12295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x122960: 0x8c520160  lw          $s2, 0x160($v0)
    ctx->pc = 0x122960u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x122964: 0x124001c8  beqz        $s2, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x122964u;
    {
        const bool branch_taken_0x122964 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x122968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122964u;
        // 0x122968: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122964) {
            ctx->pc = 0x123088u;
            goto label_123088;
        }
    }
    ctx->pc = 0x12296Cu;
    // 0x12296c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12296cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x122970: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x122970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x122974: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x122974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_122978:
    // 0x122978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x122978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12297c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x12297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x122980: 0x14430171  bne         $v0, $v1, . + 4 + (0x171 << 2)
    ctx->pc = 0x122980u;
    {
        const bool branch_taken_0x122980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x122984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122980u;
        // 0x122984: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122980) {
            ctx->pc = 0x122F48u;
            goto label_122f48;
        }
    }
    ctx->pc = 0x122988u;
    // 0x122988: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x122988u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x12298c: 0x5440016f  bnel        $v0, $zero, . + 4 + (0x16F << 2)
    ctx->pc = 0x12298Cu;
    {
        const bool branch_taken_0x12298c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12298c) {
            ctx->pc = 0x122990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12298Cu;
            // 0x122990: 0xa640002e  sh          $zero, 0x2E($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122F4Cu;
            goto label_122f4c;
        }
    }
    ctx->pc = 0x122994u;
    // 0x122994: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x122994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x122998: 0x12a20051  beq         $s5, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x122998u;
    {
        const bool branch_taken_0x122998 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x12299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122998u;
        // 0x12299c: 0x26530110  addiu       $s3, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122998) {
            ctx->pc = 0x122AE0u;
            goto label_122ae0;
        }
    }
    ctx->pc = 0x1229A0u;
    // 0x1229a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1229a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229a4: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1229A4u;
    SET_GPR_U32(ctx, 31, 0x1229ACu);
    ctx->pc = 0x1229A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229A4u;
    // 0x1229a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1229A4u, 0x1229ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229ACu;
label_1229ac:
    // 0x1229ac: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1229acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1229b0: 0x24420a00  addiu       $v0, $v0, 0xA00
    ctx->pc = 0x1229b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2560));
    // 0x1229b4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1229b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1229b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1229b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1229bc: 0xc05f874  jal         func_17E1D0
    ctx->pc = 0x1229BCu;
    SET_GPR_U32(ctx, 31, 0x1229C4u);
    ctx->pc = 0x1229C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229BCu;
    // 0x1229c0: 0x8e4500d0  lw          $a1, 0xD0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1D0u, 0x1229BCu, 0x1229C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229C4u;
label_1229c4:
    // 0x1229c4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1229c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1229c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1229c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229cc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1229ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1229d0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1229d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1229d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1229d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1229d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1229dc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1229dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1229e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1229e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1229e4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1229e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1229e8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1229e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1229ec: 0x34c68001  ori         $a2, $a2, 0x8001
    ctx->pc = 0x1229ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32769);
    // 0x1229f0: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x1229f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1229f4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1229f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1229f8: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x1229f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x1229fc: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1229fcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x122a00: 0x26b50a00  addiu       $s5, $s5, 0xA00
    ctx->pc = 0x122a00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2560));
    // 0x122a04: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x122a04u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x122a08: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x122a08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a0c: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x122a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x122a10: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x122a10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a14: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x122a14u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x122a18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x122a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a1c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x122A1Cu;
    SET_GPR_U32(ctx, 31, 0x122A24u);
    ctx->pc = 0x122A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A1Cu;
    // 0x122a20: 0x8f848c64  lw          $a0, -0x739C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x122A1Cu, 0x122A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A24u;
label_122a24:
    // 0x122a24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x122a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x122a28: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x122a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x122a2c: 0x0  nop
    ctx->pc = 0x122a2cu;
    // NOP
label_122a30:
    // 0x122a30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x122a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122a34: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x122a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x122a38: 0x0  nop
    ctx->pc = 0x122a38u;
    // NOP
    // 0x122a3c: 0x0  nop
    ctx->pc = 0x122a3cu;
    // NOP
    // 0x122a40: 0x0  nop
    ctx->pc = 0x122a40u;
    // NOP
    // 0x122a44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x122A44u;
    {
        const bool branch_taken_0x122a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122a44) {
            ctx->pc = 0x122A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122a30;
        }
    }
    ctx->pc = 0x122A4Cu;
    // 0x122a4c: 0x0  nop
    ctx->pc = 0x122a4cu;
    // NOP
label_122a50:
    // 0x122a50: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x122A50u;
    SET_GPR_U32(ctx, 31, 0x122A58u);
    ctx->pc = 0x122A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A50u;
    // 0x122a54: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x122A50u, 0x122A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A58u;
label_122a58:
    // 0x122a58: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x122a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x122a5c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x122A5Cu;
    {
        const bool branch_taken_0x122a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x122A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A5Cu;
        // 0x122a60: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a5c) {
            ctx->pc = 0x122A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122a50;
        }
    }
    ctx->pc = 0x122A64u;
    // 0x122a64: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x122A64u;
    {
        const bool branch_taken_0x122a64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A64u;
        // 0x122a68: 0xaf828c70  sw          $v0, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a64) {
            ctx->pc = 0x122A88u;
            goto label_122a88;
        }
    }
    ctx->pc = 0x122A6Cu;
    // 0x122a6c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x122a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x122a70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x122a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x122a74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x122a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x122a78: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x122a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x122a7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x122A7Cu;
    {
        const bool branch_taken_0x122a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A7Cu;
        // 0x122a80: 0x43a825  or          $s5, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a7c) {
            ctx->pc = 0x122A98u;
            goto label_122a98;
        }
    }
    ctx->pc = 0x122A84u;
    // 0x122a84: 0x0  nop
    ctx->pc = 0x122a84u;
    // NOP
label_122a88:
    // 0x122a88: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x122A88u;
    {
        const bool branch_taken_0x122a88 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x122A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A88u;
        // 0x122a8c: 0x8f838c54  lw          $v1, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a88) {
            ctx->pc = 0x122A9Cu;
            goto label_122a9c;
        }
    }
    ctx->pc = 0x122A90u;
    // 0x122a90: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x122A90u;
    SET_GPR_U32(ctx, 31, 0x122A98u);
    ctx->pc = 0x122A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122A90u;
    // 0x122a94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x122A90u, 0x122A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A98u;
label_122a98:
    // 0x122a98: 0x8f838c54  lw          $v1, -0x73AC($gp)
    ctx->pc = 0x122a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
label_122a9c:
    // 0x122a9c: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x122a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x122aa0: 0x2406ffbf  addiu       $a2, $zero, -0x41
    ctx->pc = 0x122aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x122aa4: 0x8f848c6c  lw          $a0, -0x7394($gp)
    ctx->pc = 0x122aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x122aa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x122aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122aac: 0xac750030  sw          $s5, 0x30($v1)
    ctx->pc = 0x122aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 21));
    // 0x122ab0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x122ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x122ab4: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x122ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x122ab8: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x122ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x122abc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x122abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x122ac0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x122ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x122ac4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x122ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x122ac8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x122AC8u;
    SET_GPR_U32(ctx, 31, 0x122AD0u);
    ctx->pc = 0x122ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122AC8u;
    // 0x122acc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x122AC8u, 0x122AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122AD0u;
label_122ad0:
    // 0x122ad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x122ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ad4: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x122AD4u;
    SET_GPR_U32(ctx, 31, 0x122ADCu);
    ctx->pc = 0x122AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122AD4u;
    // 0x122ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x122AD4u, 0x122ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122ADCu;
label_122adc:
    // 0x122adc: 0x8e5500d0  lw          $s5, 0xD0($s2)
    ctx->pc = 0x122adcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_122ae0:
    // 0x122ae0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x122ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x122ae4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x122ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x122ae8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122aec: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x122aecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x122af0: 0x2442ebf0  addiu       $v0, $v0, -0x1410
    ctx->pc = 0x122af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962160));
    // 0x122af4: 0x2484ec30  addiu       $a0, $a0, -0x13D0
    ctx->pc = 0x122af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962224));
    // 0x122af8: 0x24a5eb70  addiu       $a1, $a1, -0x1490
    ctx->pc = 0x122af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962032));
    // 0x122afc: 0x24c65c80  addiu       $a2, $a2, 0x5C80
    ctx->pc = 0x122afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23680));
    // 0x122b00: 0x4be9033c  vmove.xyzw  $vf9, $vf0
    ctx->pc = 0x122b00u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x122b04: 0x4be84b3d  vmr32.xyzw  $vf8, $vf9
    ctx->pc = 0x122b04u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x122b08: 0x4be7433d  vmr32.xyzw  $vf7, $vf8
    ctx->pc = 0x122b08u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x122b0c: 0x4be63b3d  vmr32.xyzw  $vf6, $vf7
    ctx->pc = 0x122b0cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x122b10: 0xda690020  lqc2        $vf9, 0x20($s3)
    ctx->pc = 0x122b10u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x122b14: 0xd8b40000  lqc2        $vf20, 0x0($a1)
    ctx->pc = 0x122b14u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x122b18: 0xd8b50010  lqc2        $vf21, 0x10($a1)
    ctx->pc = 0x122b18u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x122b1c: 0xd8b60020  lqc2        $vf22, 0x20($a1)
    ctx->pc = 0x122b1cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x122b20: 0xd8b70030  lqc2        $vf23, 0x30($a1)
    ctx->pc = 0x122b20u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x122b24: 0x4be9a1bc  vmulax.xyzw $ACC, $vf20, $vf9x
    ctx->pc = 0x122b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b28: 0x4be9a8bd  vmadday.xyzw $ACC, $vf21, $vf9y
    ctx->pc = 0x122b28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b2c: 0x4be9b0be  vmaddaz.xyzw $ACC, $vf22, $vf9z
    ctx->pc = 0x122b2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b30: 0x4be9bdcb  vmaddw.xyzw $vf23, $vf23, $vf9w
    ctx->pc = 0x122b30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x122b34: 0x4bec033c  vmove.xyzw  $vf12, $vf0
    ctx->pc = 0x122b34u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x122b38: 0x4beca1bc  vmulax.xyzw $ACC, $vf20, $vf12x
    ctx->pc = 0x122b38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b3c: 0x4beca8bd  vmadday.xyzw $ACC, $vf21, $vf12y
    ctx->pc = 0x122b3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b40: 0x4becb0be  vmaddaz.xyzw $ACC, $vf22, $vf12z
    ctx->pc = 0x122b40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b44: 0x4becbacb  vmaddw.xyzw $vf11, $vf23, $vf12w
    ctx->pc = 0x122b44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x122b48: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x122b48u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122b4c: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x122b4cu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x122b50: 0xd85a0020  lqc2        $vf26, 0x20($v0)
    ctx->pc = 0x122b50u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x122b54: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x122b54u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x122b58: 0xd89c0000  lqc2        $vf28, 0x0($a0)
    ctx->pc = 0x122b58u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122b5c: 0xd89d0010  lqc2        $vf29, 0x10($a0)
    ctx->pc = 0x122b5cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x122b60: 0xd89e0020  lqc2        $vf30, 0x20($a0)
    ctx->pc = 0x122b60u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x122b64: 0xd89f0030  lqc2        $vf31, 0x30($a0)
    ctx->pc = 0x122b64u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x122b68: 0x4bebe1bc  vmulax.xyzw $ACC, $vf28, $vf11x
    ctx->pc = 0x122b68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b6c: 0x4bebe8bd  vmadday.xyzw $ACC, $vf29, $vf11y
    ctx->pc = 0x122b6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b70: 0x4bebf0be  vmaddaz.xyzw $ACC, $vf30, $vf11z
    ctx->pc = 0x122b70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122b74: 0x4bebfc0b  vmaddw.xyzw $vf16, $vf31, $vf11w
    ctx->pc = 0x122b74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x122b78: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x122b78u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x122b7c: 0x4bd081ff  .word       0x4BD081FF                   # vclipw.xyz  $vf16, $vf16w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x122b7cu;
    { __m128 fs = ctx->vu0_vf[16]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x122b80: 0xda6c0000  lqc2        $vf12, 0x0($s3)
    ctx->pc = 0x122b80u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122b84: 0xda6d0010  lqc2        $vf13, 0x10($s3)
    ctx->pc = 0x122b84u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x122b88: 0x7a6d0010  lq          $t5, 0x10($s3)
    ctx->pc = 0x122b88u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x122b8c: 0x700d7f89  pexew       $t7, $t5
    ctx->pc = 0x122b8cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXEW(GPR_VEC(ctx, 13)));
    // 0x122b90: 0x48af7800  qmtc2.ni    $t7, $vf15
    ctx->pc = 0x122b90u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
    // 0x122b94: 0x4bee7b3d  vmr32.xyzw  $vf14, $vf15
    ctx->pc = 0x122b94u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x122b98: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x122b98u;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x122b9c: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x122B9Cu;
    {
        const bool branch_taken_0x122b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122b9c) {
            ctx->pc = 0x122CC8u;
            goto label_122cc8;
        }
    }
    ctx->pc = 0x122BA4u;
    // 0x122ba4: 0x0  nop
    ctx->pc = 0x122ba4u;
    // NOP
    // 0x122ba8: 0x4be9333c  vmove.xyzw  $vf9, $vf6
    ctx->pc = 0x122ba8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[6], _mm_castsi128_ps(mask)); }
    // 0x122bac: 0x4b8c7258  vmulx.xy    $vf9, $vf14, $vf12x
    ctx->pc = 0x122bacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x122bb0: 0x4b0d0344  vsubx.x     $vf13, $vf0, $vf13x
    ctx->pc = 0x122bb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x122bb4: 0x4beb633d  vmr32.xyzw  $vf11, $vf12
    ctx->pc = 0x122bb4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x122bb8: 0x4bea3b3c  vmove.xyzw  $vf10, $vf7
    ctx->pc = 0x122bb8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], ctx->vu0_vf[7], _mm_castsi128_ps(mask)); }
    // 0x122bbc: 0x4b8b6a98  vmulx.xy    $vf10, $vf13, $vf11x
    ctx->pc = 0x122bbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x122bc0: 0x4be9c1bc  vmulax.xyzw $ACC, $vf24, $vf9x
    ctx->pc = 0x122bc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bc4: 0x4be9c8bd  vmadday.xyzw $ACC, $vf25, $vf9y
    ctx->pc = 0x122bc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bc8: 0x4be9d0be  vmaddaz.xyzw $ACC, $vf26, $vf9z
    ctx->pc = 0x122bc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bcc: 0x4be9df0b  vmaddw.xyzw $vf28, $vf27, $vf9w
    ctx->pc = 0x122bccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x122bd0: 0x4beac1bc  vmulax.xyzw $ACC, $vf24, $vf10x
    ctx->pc = 0x122bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bd4: 0x4beac8bd  vmadday.xyzw $ACC, $vf25, $vf10y
    ctx->pc = 0x122bd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bd8: 0x4bead0be  vmaddaz.xyzw $ACC, $vf26, $vf10z
    ctx->pc = 0x122bd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bdc: 0x4beadf4b  vmaddw.xyzw $vf29, $vf27, $vf10w
    ctx->pc = 0x122bdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x122be0: 0x4be8c1bc  vmulax.xyzw $ACC, $vf24, $vf8x
    ctx->pc = 0x122be0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122be4: 0x4be8c8bd  vmadday.xyzw $ACC, $vf25, $vf8y
    ctx->pc = 0x122be4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122be8: 0x4be8d0be  vmaddaz.xyzw $ACC, $vf26, $vf8z
    ctx->pc = 0x122be8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bec: 0x4be8df8b  vmaddw.xyzw $vf30, $vf27, $vf8w
    ctx->pc = 0x122becu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x122bf0: 0x4bf7c1bc  vmulax.xyzw $ACC, $vf24, $vf23x
    ctx->pc = 0x122bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bf4: 0x4bf7c8bd  vmadday.xyzw $ACC, $vf25, $vf23y
    ctx->pc = 0x122bf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bf8: 0x4bf7d0be  vmaddaz.xyzw $ACC, $vf26, $vf23z
    ctx->pc = 0x122bf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122bfc: 0x4bf7dfcb  vmaddw.xyzw $vf31, $vf27, $vf23w
    ctx->pc = 0x122bfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x122c00: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x122c00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c04: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x122c04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c08: 0x6021  addu        $t4, $zero, $zero
    ctx->pc = 0x122c08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x122c0c: 0x218c0004  addi        $t4, $t4, 0x4
    ctx->pc = 0x122c0cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_122c10:
    // 0x122c10: 0xd94a0000  lqc2        $vf10, 0x0($t2)
    ctx->pc = 0x122c10u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x122c14: 0x4beae1bc  vmulax.xyzw $ACC, $vf28, $vf10x
    ctx->pc = 0x122c14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122c18: 0x4beae8bd  vmadday.xyzw $ACC, $vf29, $vf10y
    ctx->pc = 0x122c18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122c1c: 0x4beaf0be  vmaddaz.xyzw $ACC, $vf30, $vf10z
    ctx->pc = 0x122c1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122c20: 0x4beafb4b  vmaddw.xyzw $vf13, $vf31, $vf10w
    ctx->pc = 0x122c20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x122c24: 0x4bed03bc  vdiv        $Q, $vf0w, $vf13w
    ctx->pc = 0x122c24u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x122c28: 0x4a0003bf  vwaitq
    ctx->pc = 0x122c28u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x122c2c: 0x4bc06b5c  vmulq.xyz   $vf13, $vf13, $Q
    ctx->pc = 0x122c2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x122c30: 0x4bee697d  vftoi4.xyzw $vf14, $vf13
    ctx->pc = 0x122c30u;
    { __m128 src = ctx->vu0_vf[13]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x122c34: 0xf96e0000  sqc2        $vf14, 0x0($t3)
    ctx->pc = 0x122c34u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x122c38: 0x214a0010  addi        $t2, $t2, 0x10
    ctx->pc = 0x122c38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x122c3c: 0x216b0010  addi        $t3, $t3, 0x10
    ctx->pc = 0x122c3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
    // 0x122c40: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x122c40u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x122c44: 0x1580fff2  bnez        $t4, . + 4 + (-0xE << 2)
    ctx->pc = 0x122C44u;
    {
        const bool branch_taken_0x122c44 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x122c44) {
            ctx->pc = 0x122C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122c10;
        }
    }
    ctx->pc = 0x122C4Cu;
    // 0x122c4c: 0x0  nop
    ctx->pc = 0x122c4cu;
    // NOP
    // 0x122c50: 0x8faa000c  lw          $t2, 0xC($sp)
    ctx->pc = 0x122c50u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x122c54: 0xa5903  sra         $t3, $t2, 4
    ctx->pc = 0x122c54u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 10), 4));
    // 0x122c58: 0x448b4000  mtc1        $t3, $f8
    ctx->pc = 0x122c58u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x122c5c: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x122c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x122c60: 0x46164202  mul.s       $f8, $f8, $f22
    ctx->pc = 0x122c60u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[22]);
    // 0x122c64: 0x4608aa41  sub.s       $f9, $f21, $f8
    ctx->pc = 0x122c64u;
    ctx->f[9] = FPU_SUB_S(ctx->f[21], ctx->f[8]);
    // 0x122c68: 0x46004a24  .word       0x46004A24                   # cvt.w.s     $f8, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x122c68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[8], &tmp, sizeof(tmp)); }
    // 0x122c6c: 0x440b4000  mfc1        $t3, $f8
    ctx->pc = 0x122c6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x122c70: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x122c70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x122c74: 0x716c58e8  pminw       $t3, $t3, $t4
    ctx->pc = 0x122c74u;
    SET_GPR_VEC(ctx, 11, PS2_PMINW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x122c78: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x122c78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x122c7c: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x122c7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c80: 0x5620011  bltzl       $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x122C80u;
    {
        const bool branch_taken_0x122c80 = (GPR_S32(ctx, 11) < 0);
        if (branch_taken_0x122c80) {
            ctx->pc = 0x122CC8u;
            goto label_122cc8;
        }
    }
    ctx->pc = 0x122C88u;
    // 0x122c88: 0x0  nop
    ctx->pc = 0x122c88u;
    // NOP
    // 0x122c8c: 0x240f0000  addiu       $t7, $zero, 0x0
    ctx->pc = 0x122c8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x122c90: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x122c90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c94: 0xb5100  sll         $t2, $t3, 4
    ctx->pc = 0x122c94u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x122c98: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x122c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x122c9c: 0xafaa001c  sw          $t2, 0x1C($sp)
    ctx->pc = 0x122c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 10));
    // 0x122ca0: 0xafaa002c  sw          $t2, 0x2C($sp)
    ctx->pc = 0x122ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 10));
    // 0x122ca4: 0xafaa003c  sw          $t2, 0x3C($sp)
    ctx->pc = 0x122ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 10));
    // 0x122ca8: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x122ca8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x122cac: 0x16c6818  mult        $t5, $t3, $t4
    ctx->pc = 0x122cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x122cb0: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x122cb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x122cb4: 0x71ae68e8  pminw       $t5, $t5, $t6
    ctx->pc = 0x122cb4u;
    SET_GPR_VEC(ctx, 13, PS2_PMINW(GPR_VEC(ctx, 13), GPR_VEC(ctx, 14)));
    // 0x122cb8: 0x926a0043  lbu         $t2, 0x43($s3)
    ctx->pc = 0x122cb8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 67)));
    // 0x122cbc: 0x1aa6818  mult        $t5, $t5, $t2
    ctx->pc = 0x122cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x122cc0: 0xd69c3  sra         $t5, $t5, 7
    ctx->pc = 0x122cc0u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 7));
    // 0x122cc4: 0xa26d0043  sb          $t5, 0x43($s3)
    ctx->pc = 0x122cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 67), (uint8_t)GPR_U32(ctx, 13));
label_122cc8:
    // 0x122cc8: 0x5460009a  bnel        $v1, $zero, . + 4 + (0x9A << 2)
    ctx->pc = 0x122CC8u;
    {
        const bool branch_taken_0x122cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122cc8) {
            ctx->pc = 0x122CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122CC8u;
            // 0x122ccc: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122F34u;
            goto label_122f34;
        }
    }
    ctx->pc = 0x122CD0u;
    // 0x122cd0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x122cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122cd4: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x122CD4u;
    {
        const bool branch_taken_0x122cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CD4u;
        // 0x122cd8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cd4) {
            ctx->pc = 0x122DB8u;
            goto label_122db8;
        }
    }
    ctx->pc = 0x122CDCu;
    // 0x122cdc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x122cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x122ce0: 0x2474d650  addiu       $s4, $v1, -0x29B0
    ctx->pc = 0x122ce0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x122ce4: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x122ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x122ce8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x122CE8u;
    {
        const bool branch_taken_0x122ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CE8u;
        // 0x122cec: 0x8fb10074  lw          $s1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ce8) {
            ctx->pc = 0x122D10u;
            goto label_122d10;
        }
    }
    ctx->pc = 0x122CF0u;
    // 0x122cf0: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x122cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x122cf4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x122cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x122cf8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x122cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x122cfc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x122cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x122d00: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x122d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x122d04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x122D04u;
    {
        const bool branch_taken_0x122d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D04u;
        // 0x122d08: 0xae830098  sw          $v1, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d04) {
            ctx->pc = 0x122D44u;
            goto label_122d44;
        }
    }
    ctx->pc = 0x122D0Cu;
    // 0x122d0c: 0x0  nop
    ctx->pc = 0x122d0cu;
    // NOP
label_122d10:
    // 0x122d10: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x122D10u;
    SET_GPR_U32(ctx, 31, 0x122D18u);
    ctx->pc = 0x122D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D10u;
    // 0x122d14: 0x8e840084  lw          $a0, 0x84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x122D10u, 0x122D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D18u;
label_122d18:
    // 0x122d18: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x122D18u;
    SET_GPR_U32(ctx, 31, 0x122D20u);
    ctx->pc = 0x122D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D18u;
    // 0x122d1c: 0x8e840088  lw          $a0, 0x88($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x122D18u, 0x122D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D20u;
label_122d20:
    // 0x122d20: 0x8e90008c  lw          $s0, 0x8C($s4)
    ctx->pc = 0x122d20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x122d24: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x122d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x122d28: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x122d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x122d2c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x122d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x122d30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x122d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x122d34: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x122d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x122d38: 0xae85008c  sw          $a1, 0x8C($s4)
    ctx->pc = 0x122d38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 5));
    // 0x122d3c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x122D3Cu;
    SET_GPR_U32(ctx, 31, 0x122D44u);
    ctx->pc = 0x122D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D3Cu;
    // 0x122d40: 0xae820080  sw          $v0, 0x80($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x122D3Cu, 0x122D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D44u;
label_122d44:
    // 0x122d44: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x122d44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d48: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x122d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x122d4c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x122d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x122d50: 0x34a58003  ori         $a1, $a1, 0x8003
    ctx->pc = 0x122d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32771);
    // 0x122d54: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x122d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x122d58: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x122d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x122d5c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x122d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x122d60: 0x3c0b0007  lui         $t3, 0x7
    ctx->pc = 0x122d60u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)7 << 16));
    // 0x122d64: 0x356b000d  ori         $t3, $t3, 0xD
    ctx->pc = 0x122d64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)13);
    // 0x122d68: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x122d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x122d6c: 0xafc30008  sw          $v1, 0x8($fp)
    ctx->pc = 0x122d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x122d70: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x122d70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x122d74: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x122d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x122d78: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x122d78u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x122d7c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x122d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x122d80: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x122d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x122d84: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x122d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x122d88: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x122d88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x122d8c: 0x24080047  addiu       $t0, $zero, 0x47
    ctx->pc = 0x122d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x122d90: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x122d90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x122d94: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x122d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x122d98: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x122d98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x122d9c: 0x24710050  addiu       $s1, $v1, 0x50
    ctx->pc = 0x122d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x122da0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x122da0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x122da4: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x122da4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x122da8: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x122da8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
    // 0x122dac: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x122dacu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x122db0: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x122db0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x122db4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x122db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122db8:
    // 0x122db8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122dbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x122dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x122dc0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x122dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x122dc4: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x122dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x122dc8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x122dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x122dcc: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x122dccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x122dd0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x122dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x122dd4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x122dd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x122dd8: 0x34c64242  ori         $a2, $a2, 0x4242
    ctx->pc = 0x122dd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16962);
    // 0x122ddc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x122ddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x122de0: 0x34c64e26  ori         $a2, $a2, 0x4E26
    ctx->pc = 0x122de0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20006);
    // 0x122de4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x122de4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x122de8: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x122de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x122dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122df0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122df4: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x122df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x122df8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x122df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dfc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x122dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x122e00: 0x3c07a03a  lui         $a3, 0xA03A
    ctx->pc = 0x122e00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41018 << 16));
    // 0x122e04: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x122e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x122e08: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x122e08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x122e0c: 0x34e78001  ori         $a3, $a3, 0x8001
    ctx->pc = 0x122e0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32769);
    // 0x122e10: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x122e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x122e14: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e18: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x122e18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x122e1c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x122e1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e20: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x122e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x122e24: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x122e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x122e28: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x122e28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x122e2c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e30: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x122e30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x122e34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x122e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e38: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e3c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x122e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122e40: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x122e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e44: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x122e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x122e48: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x122e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x122e50: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x122e50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e54: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x122e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x122e58: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x122e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e60: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e64: 0x94650030  lhu         $a1, 0x30($v1)
    ctx->pc = 0x122e64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x122e68: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x122e68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x122e6c: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x122e6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x122e70: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x122e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x122e74: 0xfd2a0008  sd          $t2, 0x8($t1)
    ctx->pc = 0x122e74u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 10));
    // 0x122e78: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x122e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x122e7c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x122e7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e80: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x122e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x122e84: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e88: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x122e88u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x122e8c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x122e8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e90: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122e94: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x122e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122e98: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x122e98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e9c: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x122e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122ea0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122ea4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x122ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x122ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122eac: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x122eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x122eb0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122eb4: 0xe4d40008  swc1        $f20, 0x8($a2)
    ctx->pc = 0x122eb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x122eb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x122eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122ebc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ec0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x122ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x122ec4: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x122ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x122ec8: 0xfd060008  sd          $a2, 0x8($t0)
    ctx->pc = 0x122ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 6));
    // 0x122ecc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x122eccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x122ed0: 0xe5140004  swc1        $f20, 0x4($t0)
    ctx->pc = 0x122ed0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x122ed4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x122ed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122ed8: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x122ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122edc: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x122edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122ee0: 0x7d620000  sq          $v0, 0x0($t3)
    ctx->pc = 0x122ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 2));
    // 0x122ee4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x122ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x122ee8: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x122ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x122eec: 0xe4f40008  swc1        $f20, 0x8($a3)
    ctx->pc = 0x122eecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x122ef0: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x122ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122ef4: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x122ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122ef8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x122ef8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122efc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x122efcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x122f00: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x122f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x122f04: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x122f04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x122f08: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x122f08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x122f0c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x122f0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122f10: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x122f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122f14: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x122f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122f18: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x122f18u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x122f1c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x122f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x122f20: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x122f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x122f24: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x122f24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x122f28: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x122f28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122f2c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x122f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x122f30: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_122f34:
    // 0x122f34: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x122f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x122f38: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x122f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x122f3c: 0x38820013  xori        $v0, $a0, 0x13
    ctx->pc = 0x122f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)19);
    // 0x122f40: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x122f40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x122f44: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x122f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
label_122f48:
    // 0x122f48: 0xa640002e  sh          $zero, 0x2E($s2)
    ctx->pc = 0x122f48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 0));
label_122f4c:
    // 0x122f4c: 0x8e520008  lw          $s2, 0x8($s2)
    ctx->pc = 0x122f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x122f50: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x122F50u;
    {
        const bool branch_taken_0x122f50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x122F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F50u;
        // 0x122f54: 0x8fa3007c  lw          $v1, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f50) {
            ctx->pc = 0x122F78u;
            goto label_122f78;
        }
    }
    ctx->pc = 0x122F58u;
    // 0x122f58: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x122F58u;
    {
        const bool branch_taken_0x122f58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F58u;
        // 0x122f5c: 0x2862000a  slti        $v0, $v1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f58) {
            ctx->pc = 0x122F7Cu;
            goto label_122f7c;
        }
    }
    ctx->pc = 0x122F60u;
    // 0x122f60: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x122F60u;
    {
        const bool branch_taken_0x122f60 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F60u;
        // 0x122f64: 0x8fa6007c  lw          $a2, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f60) {
            ctx->pc = 0x122F7Cu;
            goto label_122f7c;
        }
    }
    ctx->pc = 0x122F68u;
    // 0x122f68: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x122f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x122f6c: 0x51300b  movn        $a2, $v0, $s1
    ctx->pc = 0x122f6cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x122f70: 0xafa6007c  sw          $a2, 0x7C($sp)
    ctx->pc = 0x122f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
    // 0x122f74: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x122f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_122f78:
    // 0x122f78: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x122f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_122f7c:
    // 0x122f7c: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x122F7Cu;
    {
        const bool branch_taken_0x122f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F7Cu;
        // 0x122f80: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f7c) {
            ctx->pc = 0x12307Cu;
            goto label_12307c;
        }
    }
    ctx->pc = 0x122F84u;
    // 0x122f84: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x122f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x122f88: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x122f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x122f8c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x122f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x122f90: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x122f90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x122f94: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x122f94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x122f98: 0x2251023  subu        $v0, $s1, $a1
    ctx->pc = 0x122f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x122f9c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x122f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fa0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x122fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x122fa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x122fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x122fa8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x122fa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x122facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x122fb0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x122fb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x122fb4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x122fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x122fb8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x122fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x122fbc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x122fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x122fc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x122fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x122fc4: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x122fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x122fc8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x122fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x122fcc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x122fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x122fd0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x122fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x122fd4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x122fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x122fd8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x122FD8u;
    SET_GPR_U32(ctx, 31, 0x122FE0u);
    ctx->pc = 0x122FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FD8u;
    // 0x122fdc: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x122FD8u, 0x122FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FE0u;
label_122fe0:
    // 0x122fe0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x122fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x122fe4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x122fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_122fe8:
    // 0x122fe8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x122fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122fec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x122fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x122ff0: 0x0  nop
    ctx->pc = 0x122ff0u;
    // NOP
    // 0x122ff4: 0x0  nop
    ctx->pc = 0x122ff4u;
    // NOP
    // 0x122ff8: 0x0  nop
    ctx->pc = 0x122ff8u;
    // NOP
    // 0x122ffc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x122FFCu;
    {
        const bool branch_taken_0x122ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122ffc) {
            ctx->pc = 0x122FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122fe8;
        }
    }
    ctx->pc = 0x123004u;
    // 0x123004: 0x0  nop
    ctx->pc = 0x123004u;
    // NOP
label_123008:
    // 0x123008: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x123008u;
    SET_GPR_U32(ctx, 31, 0x123010u);
    ctx->pc = 0x12300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123008u;
    // 0x12300c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x123008u, 0x123010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123010u;
label_123010:
    // 0x123010: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x123010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x123014: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x123014u;
    {
        const bool branch_taken_0x123014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x123018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123014u;
        // 0x123018: 0x14102b  sltu        $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123014) {
            ctx->pc = 0x123008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123008;
        }
    }
    ctx->pc = 0x12301Cu;
    // 0x12301c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x12301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x123020: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x123020u;
    {
        const bool branch_taken_0x123020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x123024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123020u;
        // 0x123024: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123020) {
            ctx->pc = 0x123034u;
            goto label_123034;
        }
    }
    ctx->pc = 0x123028u;
    // 0x123028: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x123028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x12302c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12302Cu;
    SET_GPR_U32(ctx, 31, 0x123034u);
    ctx->pc = 0x123030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12302Cu;
    // 0x123030: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12302Cu, 0x123034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123034u;
label_123034:
    // 0x123034: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x123034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x123038: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x123038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x12303c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x123040: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x123040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x123044: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123048: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x123048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x12304c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x12304cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x123050: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x123050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x123054: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x123054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x123058: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x123058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12305c: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x12305cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x123060: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x123060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x123064: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x123064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x123068: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x123068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12306c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12306cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x123070: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x123070u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123074: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x123074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x123078: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x123078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12307c:
    // 0x12307c: 0x1640fe3e  bnez        $s2, . + 4 + (-0x1C2 << 2)
    ctx->pc = 0x12307Cu;
    {
        const bool branch_taken_0x12307c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x123080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12307Cu;
        // 0x123080: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12307c) {
            ctx->pc = 0x122978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122978;
        }
    }
    ctx->pc = 0x123084u;
    // 0x123084: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x123084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_123088:
    // 0x123088: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x123088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x12308c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x123090: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x123090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x123094: 0x1440fe2e  bnez        $v0, . + 4 + (-0x1D2 << 2)
    ctx->pc = 0x123094u;
    {
        const bool branch_taken_0x123094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123094u;
        // 0x123098: 0xafa40080  sw          $a0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123094) {
            ctx->pc = 0x122950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122950;
        }
    }
    ctx->pc = 0x12309Cu;
    // 0x12309c: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x12309cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1230a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1230a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1230a4: 0x24a40168  addiu       $a0, $a1, 0x168
    ctx->pc = 0x1230a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 360));
label_1230a8:
    // 0x1230a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1230a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1230ac: 0xac80fff8  sw          $zero, -0x8($a0)
    ctx->pc = 0x1230acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 0));
    // 0x1230b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1230b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1230b4: 0x0  nop
    ctx->pc = 0x1230b4u;
    // NOP
    // 0x1230b8: 0x0  nop
    ctx->pc = 0x1230b8u;
    // NOP
    // 0x1230bc: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1230BCu;
    {
        const bool branch_taken_0x1230bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1230C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230BCu;
        // 0x1230c0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230bc) {
            ctx->pc = 0x1230A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1230a8;
        }
    }
    ctx->pc = 0x1230C4u;
    // 0x1230c4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1230c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1230c8: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1230c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1230cc: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1230ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1230d0: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x1230d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1230d4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1230d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1230d8: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x1230d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1230dc: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1230dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1230e0: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x1230e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1230e4: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1230e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1230e8: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1230e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1230ec: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x1230ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1230f0: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x1230f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1230f4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1230f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1230f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1230F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1230FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230F8u;
        // 0x1230fc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1230F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123100u;
}
