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

// Function: GeneCommandSet__20ST_ParticleGeneratorPiP8WcEntityUi
// Address: 0x1305f8 - 0x130a1c
void GeneCommandSet__20ST_ParticleGeneratorPiP8WcEntityUi_0x1305f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeneCommandSet__20ST_ParticleGeneratorPiP8WcEntityUi_0x1305f8");
#endif

    switch (ctx->pc) {
        case 0x130638u: goto label_130638;
        case 0x130664u: goto label_130664;
        case 0x1306b8u: goto label_1306b8;
        case 0x130700u: goto label_130700;
        case 0x130730u: goto label_130730;
        case 0x13074cu: goto label_13074c;
        case 0x13075cu: goto label_13075c;
        case 0x13076cu: goto label_13076c;
        case 0x13077cu: goto label_13077c;
        case 0x13078cu: goto label_13078c;
        case 0x13079cu: goto label_13079c;
        case 0x1307b4u: goto label_1307b4;
        case 0x1307c8u: goto label_1307c8;
        case 0x1307d4u: goto label_1307d4;
        case 0x1307fcu: goto label_1307fc;
        case 0x130828u: goto label_130828;
        case 0x130868u: goto label_130868;
        case 0x130884u: goto label_130884;
        case 0x13089cu: goto label_13089c;
        default: break;
    }

    ctx->pc = 0x1305f8u;

    // 0x1305f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1305f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1305fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1305fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130604: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130608: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x130608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13060c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13060cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130610: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x130610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13061c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x130620: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x130620u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130624: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x130624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x130628: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x130628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x13062c: 0xae320078  sw          $s2, 0x78($s1)
    ctx->pc = 0x13062cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 18));
    // 0x130630: 0xc04844a  jal         func_121128
    ctx->pc = 0x130630u;
    SET_GPR_U32(ctx, 31, 0x130638u);
    ctx->pc = 0x130634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130630u;
    // 0x130634: 0xae330110  sw          $s3, 0x110($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130630u, 0x130638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130638u;
label_130638:
    // 0x130638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13063c: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x13063Cu;
    {
        const bool branch_taken_0x13063c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13063Cu;
        // 0x130640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13063c) {
            ctx->pc = 0x130728u;
            goto label_130728;
        }
    }
    ctx->pc = 0x130644u;
    // 0x130644: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x130644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x130648: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x130648u;
    {
        const bool branch_taken_0x130648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130648u;
        // 0x13064c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130648) {
            ctx->pc = 0x130664u;
            goto label_130664;
        }
    }
    ctx->pc = 0x130650u;
    // 0x130650: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x130650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x130654: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x130654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130658: 0x24a560e8  addiu       $a1, $a1, 0x60E8
    ctx->pc = 0x130658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24808));
    // 0x13065c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13065Cu;
    SET_GPR_U32(ctx, 31, 0x130664u);
    ctx->pc = 0x130660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13065Cu;
    // 0x130660: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13065Cu, 0x130664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130664u;
label_130664:
    // 0x130664: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x130664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x130668: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x130668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13066c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x13066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x130670: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x130670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x130674: 0xae220134  sw          $v0, 0x134($s1)
    ctx->pc = 0x130674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
    // 0x130678: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x130678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13067c: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x13067cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x130680: 0x96040018  lhu         $a0, 0x18($s0)
    ctx->pc = 0x130680u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x130684: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x130684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x130688: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x130688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13068c: 0x8d090020  lw          $t1, 0x20($t0)
    ctx->pc = 0x13068cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x130690: 0xa62200c6  sh          $v0, 0xC6($s1)
    ctx->pc = 0x130690u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 198), (uint16_t)GPR_U32(ctx, 2));
    // 0x130694: 0xa62400c4  sh          $a0, 0xC4($s1)
    ctx->pc = 0x130694u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 196), (uint16_t)GPR_U32(ctx, 4));
    // 0x130698: 0xae2600c8  sw          $a2, 0xC8($s1)
    ctx->pc = 0x130698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 6));
    // 0x13069c: 0xae2300cc  sw          $v1, 0xCC($s1)
    ctx->pc = 0x13069cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
    // 0x1306a0: 0xae2500d0  sw          $a1, 0xD0($s1)
    ctx->pc = 0x1306a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 5));
    // 0x1306a4: 0xae2700dc  sw          $a3, 0xDC($s1)
    ctx->pc = 0x1306a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 7));
    // 0x1306a8: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1306A8u;
    {
        const bool branch_taken_0x1306a8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1306ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306A8u;
        // 0x1306ac: 0xae2800d4  sw          $t0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306a8) {
            ctx->pc = 0x1306D0u;
            goto label_1306d0;
        }
    }
    ctx->pc = 0x1306B0u;
    // 0x1306b0: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1306B0u;
    SET_GPR_U32(ctx, 31, 0x1306B8u);
    ctx->pc = 0x1306B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306B0u;
    // 0x1306b4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1306B0u, 0x1306B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306B8u;
label_1306b8:
    // 0x1306b8: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x1306b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1306bc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1306bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1306c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1306c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1306c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1306C4u;
    {
        const bool branch_taken_0x1306c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306C4u;
        // 0x1306c8: 0xae2300e4  sw          $v1, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306c4) {
            ctx->pc = 0x1306D8u;
            goto label_1306d8;
        }
    }
    ctx->pc = 0x1306CCu;
    // 0x1306cc: 0x0  nop
    ctx->pc = 0x1306ccu;
    // NOP
label_1306d0:
    // 0x1306d0: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x1306d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1306d4: 0xae2200e4  sw          $v0, 0xE4($s1)
    ctx->pc = 0x1306d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
label_1306d8:
    // 0x1306d8: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1306d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1306dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1306dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1306e0: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x1306e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1306e4: 0xae230108  sw          $v1, 0x108($s1)
    ctx->pc = 0x1306e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 3));
    // 0x1306e8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1306e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1306ec: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1306ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1306f0: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1306F0u;
    {
        const bool branch_taken_0x1306f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1306F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306F0u;
        // 0x1306f4: 0xae22010c  sw          $v0, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306f0) {
            ctx->pc = 0x13070Cu;
            goto label_13070c;
        }
    }
    ctx->pc = 0x1306F8u;
    // 0x1306f8: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1306F8u;
    SET_GPR_U32(ctx, 31, 0x130700u);
    ctx->pc = 0x1306FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306F8u;
    // 0x1306fc: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1306F8u, 0x130700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130700u;
label_130700:
    // 0x130700: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x130700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x130704: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x130704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130708: 0xae2300e0  sw          $v1, 0xE0($s1)
    ctx->pc = 0x130708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
label_13070c:
    // 0x13070c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x13070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x130710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130714: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x130714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x130718: 0xae240128  sw          $a0, 0x128($s1)
    ctx->pc = 0x130718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 4));
    // 0x13071c: 0x94650024  lhu         $a1, 0x24($v1)
    ctx->pc = 0x13071cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x130720: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x130720u;
    {
        const bool branch_taken_0x130720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130720u;
        // 0x130724: 0xa6250126  sh          $a1, 0x126($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 294), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130720) {
            ctx->pc = 0x1309FCu;
            goto label_1309fc;
        }
    }
    ctx->pc = 0x130728u;
label_130728:
    // 0x130728: 0xc04844a  jal         func_121128
    ctx->pc = 0x130728u;
    SET_GPR_U32(ctx, 31, 0x130730u);
    ctx->pc = 0x13072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130728u;
    // 0x13072c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130728u, 0x130730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130730u;
label_130730:
    // 0x130730: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130734: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130734u;
    {
        const bool branch_taken_0x130734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130734u;
        // 0x130738: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130734) {
            ctx->pc = 0x130744u;
            goto label_130744;
        }
    }
    ctx->pc = 0x13073Cu;
    // 0x13073c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x13073cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x130740: 0xa62200c4  sh          $v0, 0xC4($s1)
    ctx->pc = 0x130740u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 196), (uint16_t)GPR_U32(ctx, 2));
label_130744:
    // 0x130744: 0xc04844a  jal         func_121128
    ctx->pc = 0x130744u;
    SET_GPR_U32(ctx, 31, 0x13074Cu);
    ctx->pc = 0x130748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130744u;
    // 0x130748: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130744u, 0x13074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13074Cu;
label_13074c:
    // 0x13074c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13074cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130750: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x130750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
    // 0x130754: 0xc04844a  jal         func_121128
    ctx->pc = 0x130754u;
    SET_GPR_U32(ctx, 31, 0x13075Cu);
    ctx->pc = 0x130758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130754u;
    // 0x130758: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130754u, 0x13075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13075Cu;
label_13075c:
    // 0x13075c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13075cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130760: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x130760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    // 0x130764: 0xc04844a  jal         func_121128
    ctx->pc = 0x130764u;
    SET_GPR_U32(ctx, 31, 0x13076Cu);
    ctx->pc = 0x130768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130764u;
    // 0x130768: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130764u, 0x13076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13076Cu;
label_13076c:
    // 0x13076c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13076cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130770: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x130770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x130774: 0xc04844a  jal         func_121128
    ctx->pc = 0x130774u;
    SET_GPR_U32(ctx, 31, 0x13077Cu);
    ctx->pc = 0x130778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130774u;
    // 0x130778: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130774u, 0x13077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13077Cu;
label_13077c:
    // 0x13077c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13077cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130780: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x130780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x130784: 0xc04844a  jal         func_121128
    ctx->pc = 0x130784u;
    SET_GPR_U32(ctx, 31, 0x13078Cu);
    ctx->pc = 0x130788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130784u;
    // 0x130788: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130784u, 0x13078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13078Cu;
label_13078c:
    // 0x13078c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13078cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130790: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x130790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
    // 0x130794: 0xc04844a  jal         func_121128
    ctx->pc = 0x130794u;
    SET_GPR_U32(ctx, 31, 0x13079Cu);
    ctx->pc = 0x130798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130794u;
    // 0x130798: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130794u, 0x13079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13079Cu;
label_13079c:
    // 0x13079c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x13079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1307a0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1307A0u;
    {
        const bool branch_taken_0x1307a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1307A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307A0u;
        // 0x1307a4: 0xae2200dc  sw          $v0, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1307a0) {
            ctx->pc = 0x1307C8u;
            goto label_1307c8;
        }
    }
    ctx->pc = 0x1307A8u;
    // 0x1307a8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1307a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1307ac: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1307ACu;
    SET_GPR_U32(ctx, 31, 0x1307B4u);
    ctx->pc = 0x1307B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307ACu;
    // 0x1307b0: 0x248460f8  addiu       $a0, $a0, 0x60F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1307ACu, 0x1307B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307B4u;
label_1307b4:
    // 0x1307b4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1307b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1307b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1307b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307bc: 0x24a56118  addiu       $a1, $a1, 0x6118
    ctx->pc = 0x1307bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24856));
    // 0x1307c0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1307C0u;
    SET_GPR_U32(ctx, 31, 0x1307C8u);
    ctx->pc = 0x1307C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307C0u;
    // 0x1307c4: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1307C0u, 0x1307C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307C8u;
label_1307c8:
    // 0x1307c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1307c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307cc: 0xc04844a  jal         func_121128
    ctx->pc = 0x1307CCu;
    SET_GPR_U32(ctx, 31, 0x1307D4u);
    ctx->pc = 0x1307D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307CCu;
    // 0x1307d0: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1307CCu, 0x1307D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307D4u;
label_1307d4:
    // 0x1307d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1307D4u;
    {
        const bool branch_taken_0x1307d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1307D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307D4u;
        // 0x1307d8: 0xae220114  sw          $v0, 0x114($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1307d4) {
            ctx->pc = 0x1307F0u;
            goto label_1307f0;
        }
    }
    ctx->pc = 0x1307DCu;
    // 0x1307dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1307dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1307e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1307E0u;
    {
        const bool branch_taken_0x1307e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1307E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307E0u;
        // 0x1307e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1307e0) {
            ctx->pc = 0x1307F4u;
            goto label_1307f4;
        }
    }
    ctx->pc = 0x1307E8u;
    // 0x1307e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1307e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1307ec: 0xa6220118  sh          $v0, 0x118($s1)
    ctx->pc = 0x1307ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 2));
label_1307f0:
    // 0x1307f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1307f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1307f4:
    // 0x1307f4: 0xc04844a  jal         func_121128
    ctx->pc = 0x1307F4u;
    SET_GPR_U32(ctx, 31, 0x1307FCu);
    ctx->pc = 0x1307F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307F4u;
    // 0x1307f8: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1307F4u, 0x1307FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307FCu;
label_1307fc:
    // 0x1307fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1307fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130800: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x130800u;
    {
        const bool branch_taken_0x130800 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x130800) {
            ctx->pc = 0x130804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130800u;
            // 0x130804: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130810u;
            goto label_130810;
        }
    }
    ctx->pc = 0x130808u;
    // 0x130808: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x130808u;
    {
        const bool branch_taken_0x130808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130808u;
        // 0x13080c: 0xae200134  sw          $zero, 0x134($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130808) {
            ctx->pc = 0x13081Cu;
            goto label_13081c;
        }
    }
    ctx->pc = 0x130810u;
label_130810:
    // 0x130810: 0xae220134  sw          $v0, 0x134($s1)
    ctx->pc = 0x130810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
    // 0x130814: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x130814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x130818: 0xa62300c6  sh          $v1, 0xC6($s1)
    ctx->pc = 0x130818u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 198), (uint16_t)GPR_U32(ctx, 3));
label_13081c:
    // 0x13081c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x13081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x130820: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x130820u;
    SET_GPR_U32(ctx, 31, 0x130828u);
    ctx->pc = 0x130824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130820u;
    // 0x130824: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x130820u, 0x130828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130828u;
label_130828:
    // 0x130828: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x130828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x13082c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13082cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130830: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x130830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x130834: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x130834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130838: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x130838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x13083c: 0xae2300e4  sw          $v1, 0xE4($s1)
    ctx->pc = 0x13083cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
    // 0x130840: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x130840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x130844: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x130844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x130848: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x130848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
    // 0x13084c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x13084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x130850: 0xae230128  sw          $v1, 0x128($s1)
    ctx->pc = 0x130850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 3));
    // 0x130854: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x130854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x130858: 0x54450007  bnel        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x130858u;
    {
        const bool branch_taken_0x130858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x130858) {
            ctx->pc = 0x13085Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130858u;
            // 0x13085c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130878u;
            goto label_130878;
        }
    }
    ctx->pc = 0x130860u;
    // 0x130860: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x130860u;
    SET_GPR_U32(ctx, 31, 0x130868u);
    ctx->pc = 0x130864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130860u;
    // 0x130864: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x130860u, 0x130868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130868u;
label_130868:
    // 0x130868: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x130868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x13086c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13086cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130870: 0xae2300e0  sw          $v1, 0xE0($s1)
    ctx->pc = 0x130870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
    // 0x130874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_130878:
    // 0x130878: 0x26250108  addiu       $a1, $s1, 0x108
    ctx->pc = 0x130878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x13087c: 0xc04c04c  jal         func_130130
    ctx->pc = 0x13087Cu;
    SET_GPR_U32(ctx, 31, 0x130884u);
    ctx->pc = 0x130880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13087Cu;
    // 0x130880: 0x2626010c  addiu       $a2, $s1, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130130u, 0x13087Cu, 0x130884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130884u;
label_130884:
    // 0x130884: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x130884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x130888: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x130888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x13088c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13088cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130890: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x130890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x130894: 0xc04844a  jal         func_121128
    ctx->pc = 0x130894u;
    SET_GPR_U32(ctx, 31, 0x13089Cu);
    ctx->pc = 0x130898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130894u;
    // 0x130898: 0xa6220126  sh          $v0, 0x126($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 294), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130894u, 0x13089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13089Cu;
label_13089c:
    // 0x13089c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13089cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308a0: 0x50a0001c  beql        $a1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1308A0u;
    {
        const bool branch_taken_0x1308a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1308a0) {
            ctx->pc = 0x1308A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1308A0u;
            // 0x1308a4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130914u;
            goto label_130914;
        }
    }
    ctx->pc = 0x1308A8u;
    // 0x1308a8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1308a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1308ac: 0xae2200ec  sw          $v0, 0xEC($s1)
    ctx->pc = 0x1308acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
    // 0x1308b0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1308b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1308b4: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x1308b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x1308b8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1308b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1308bc: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x1308bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x1308c0: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x1308c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1308c4: 0xae2400f8  sw          $a0, 0xF8($s1)
    ctx->pc = 0x1308c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 4));
    // 0x1308c8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1308c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1308cc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1308ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1308d0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1308d0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1308d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1308d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1308d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1308d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1308dc: 0xe62000fc  swc1        $f0, 0xFC($s1)
    ctx->pc = 0x1308dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
    // 0x1308e0: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1308e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1308e4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1308e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1308e8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1308e8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1308ec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1308ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1308f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1308f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1308f4: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x1308f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x1308f8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1308f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1308fc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1308fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x130900: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x130900u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x130904: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x130904u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x130908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13090c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x13090cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x130910: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x130910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_130914:
    // 0x130914: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x130914u;
    {
        const bool branch_taken_0x130914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130914u;
        // 0x130918: 0x26280020  addiu       $t0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130914) {
            ctx->pc = 0x1309F8u;
            goto label_1309f8;
        }
    }
    ctx->pc = 0x13091Cu;
    // 0x13091c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x13091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x130920: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x130920u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x130924: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x130924u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x130928: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x130928u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13092c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13092cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x130930: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x130930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x130934: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x130934u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x130938: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x130938u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13093c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x13093cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x130940: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x130940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130944: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x130944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x130948: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x130948u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x13094c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x13094cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x130950: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x130950u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x130954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130958: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x130958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13095c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x13095cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x130960: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x130960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x130964: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x130964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x130968: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x130968u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13096c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x13096cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x130970: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x130970u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x130974: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x130974u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x130978: 0x8e2700d8  lw          $a3, 0xD8($s1)
    ctx->pc = 0x130978u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x13097c: 0x26280030  addiu       $t0, $s1, 0x30
    ctx->pc = 0x13097cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x130980: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x130980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x130984: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x130984u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x130988: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x130988u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13098c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x13098cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x130990: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x130990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x130994: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x130994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x130998: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x130998u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13099c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x13099cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1309a0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1309a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1309a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1309a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1309a8: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x1309a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1309ac: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x1309acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1309b0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1309b0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1309b4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1309b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1309b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1309b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1309bc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1309bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1309c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1309c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1309c4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1309c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1309c8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1309c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1309cc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1309ccu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1309d0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1309d0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1309d4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1309d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1309d8: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x1309d8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x1309dc: 0x8e2600d8  lw          $a2, 0xD8($s1)
    ctx->pc = 0x1309dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x1309e0: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x1309e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1309e4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1309e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x1309e8: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x1309e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1309ec: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x1309ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x1309f0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1309f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1309f4: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x1309f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_1309f8:
    // 0x1309f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1309f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1309fc:
    // 0x1309fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1309fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130a00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130a04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130a04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130a08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x130a08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130a0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x130a0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130a10: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x130a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x130a14: 0x3e00008  jr          $ra
    ctx->pc = 0x130A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A14u;
        // 0x130a18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130A1Cu;
}
