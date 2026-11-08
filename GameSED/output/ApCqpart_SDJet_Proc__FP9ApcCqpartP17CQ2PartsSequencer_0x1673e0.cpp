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

// Function: ApCqpart_SDJet_Proc__FP9ApcCqpartP17CQ2PartsSequencer
// Address: 0x1673e0 - 0x16797c
void ApCqpart_SDJet_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x1673e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqpart_SDJet_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x1673e0");
#endif

    switch (ctx->pc) {
        case 0x167450u: goto label_167450;
        case 0x167460u: goto label_167460;
        case 0x1674d8u: goto label_1674d8;
        case 0x16754cu: goto label_16754c;
        case 0x167594u: goto label_167594;
        case 0x1675c0u: goto label_1675c0;
        case 0x1675e0u: goto label_1675e0;
        case 0x167620u: goto label_167620;
        case 0x167630u: goto label_167630;
        case 0x167694u: goto label_167694;
        case 0x1676acu: goto label_1676ac;
        case 0x1676ccu: goto label_1676cc;
        case 0x1676e4u: goto label_1676e4;
        case 0x167714u: goto label_167714;
        case 0x16772cu: goto label_16772c;
        case 0x16774cu: goto label_16774c;
        case 0x167764u: goto label_167764;
        case 0x1677b8u: goto label_1677b8;
        case 0x1677c8u: goto label_1677c8;
        case 0x167850u: goto label_167850;
        case 0x167868u: goto label_167868;
        case 0x1678acu: goto label_1678ac;
        case 0x1678c4u: goto label_1678c4;
        case 0x1678ecu: goto label_1678ec;
        case 0x167904u: goto label_167904;
        case 0x167924u: goto label_167924;
        case 0x16793cu: goto label_16793c;
        default: break;
    }

    ctx->pc = 0x1673e0u;

    // 0x1673e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1673e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1673e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1673e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1673e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1673e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673ec: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1673ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1673f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1673f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1673f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1673f8: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x1673f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1673fc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1673fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x167400: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x167400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x167404: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x167404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x167408: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x167408u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x16740c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x16740cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x167410: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x167410u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x167414: 0x8e631264  lw          $v1, 0x1264($s3)
    ctx->pc = 0x167414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4708)));
    // 0x167418: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x167418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16741c: 0x8c6301ac  lw          $v1, 0x1AC($v1)
    ctx->pc = 0x16741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x167420: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x167420u;
    {
        const bool branch_taken_0x167420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167420u;
        // 0x167424: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167420) {
            ctx->pc = 0x167498u;
            goto label_167498;
        }
    }
    ctx->pc = 0x167428u;
    // 0x167428: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x167428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16742c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167430: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x167430u;
    {
        const bool branch_taken_0x167430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167430) {
            ctx->pc = 0x167434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167430u;
            // 0x167434: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16749Cu;
            goto label_16749c;
        }
    }
    ctx->pc = 0x167438u;
    // 0x167438: 0x26631258  addiu       $v1, $s3, 0x1258
    ctx->pc = 0x167438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4696));
    // 0x16743c: 0xae601260  sw          $zero, 0x1260($s3)
    ctx->pc = 0x16743cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4704), GPR_U32(ctx, 0));
    // 0x167440: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x167440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167444: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x167444u;
    {
        const bool branch_taken_0x167444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167444u;
        // 0x167448: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167444) {
            ctx->pc = 0x167498u;
            goto label_167498;
        }
    }
    ctx->pc = 0x16744Cu;
    // 0x16744c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_167450:
    // 0x167450: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x167450u;
    {
        const bool branch_taken_0x167450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167450) {
            ctx->pc = 0x167454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167450u;
            // 0x167454: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167480u;
            goto label_167480;
        }
    }
    ctx->pc = 0x167458u;
    // 0x167458: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x167458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16745c: 0xac4400e0  sw          $a0, 0xE0($v0)
    ctx->pc = 0x16745cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 4));
label_167460:
    // 0x167460: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x167460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x167464: 0x0  nop
    ctx->pc = 0x167464u;
    // NOP
    // 0x167468: 0x0  nop
    ctx->pc = 0x167468u;
    // NOP
    // 0x16746c: 0x0  nop
    ctx->pc = 0x16746cu;
    // NOP
    // 0x167470: 0x0  nop
    ctx->pc = 0x167470u;
    // NOP
    // 0x167474: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x167474u;
    {
        const bool branch_taken_0x167474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167474) {
            ctx->pc = 0x167478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167474u;
            // 0x167478: 0xac4400e0  sw          $a0, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167460;
        }
    }
    ctx->pc = 0x16747Cu;
    // 0x16747c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x16747cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_167480:
    // 0x167480: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x167480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167484: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167484u;
    {
        const bool branch_taken_0x167484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167484u;
        // 0x167488: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167484) {
            ctx->pc = 0x167498u;
            goto label_167498;
        }
    }
    ctx->pc = 0x16748Cu;
    // 0x16748c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x16748cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x167490: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x167490u;
    {
        const bool branch_taken_0x167490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167490) {
            ctx->pc = 0x167494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167490u;
            // 0x167494: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167450;
        }
    }
    ctx->pc = 0x167498u;
label_167498:
    // 0x167498: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x167498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_16749c:
    // 0x16749c: 0x50600054  beql        $v1, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x16749Cu;
    {
        const bool branch_taken_0x16749c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16749c) {
            ctx->pc = 0x1674A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16749Cu;
            // 0x1674a0: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1675F0u;
            goto label_1675f0;
        }
    }
    ctx->pc = 0x1674A4u;
    // 0x1674a4: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1674A4u;
    {
        const bool branch_taken_0x1674a4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1674A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674A4u;
        // 0x1674a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674a4) {
            ctx->pc = 0x1674C0u;
            goto label_1674c0;
        }
    }
    ctx->pc = 0x1674ACu;
    // 0x1674ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1674acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1674b0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1674B0u;
    {
        const bool branch_taken_0x1674b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1674B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674B0u;
        // 0x1674b4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674b0) {
            ctx->pc = 0x1674D0u;
            goto label_1674d0;
        }
    }
    ctx->pc = 0x1674B8u;
    // 0x1674b8: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x1674B8u;
    {
        const bool branch_taken_0x1674b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674B8u;
        // 0x1674bc: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674b8) {
            ctx->pc = 0x167958u;
            goto label_167958;
        }
    }
    ctx->pc = 0x1674C0u;
label_1674c0:
    // 0x1674c0: 0x106200af  beq         $v1, $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x1674C0u;
    {
        const bool branch_taken_0x1674c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1674C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674C0u;
        // 0x1674c4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674c0) {
            ctx->pc = 0x167780u;
            goto label_167780;
        }
    }
    ctx->pc = 0x1674C8u;
    // 0x1674c8: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x1674C8u;
    {
        const bool branch_taken_0x1674c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674C8u;
        // 0x1674cc: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674c8) {
            ctx->pc = 0x167958u;
            goto label_167958;
        }
    }
    ctx->pc = 0x1674D0u;
label_1674d0:
    // 0x1674d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1674d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674d4: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x1674d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1674d8:
    // 0x1674d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1674d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1674dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1674dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1674e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1674e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1674e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1674e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1674e8: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1674e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1674ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1674ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1674f0: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x1674f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1674f4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1674F4u;
    {
        const bool branch_taken_0x1674f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1674F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674F4u;
        // 0x1674f8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674f4) {
            ctx->pc = 0x1674D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1674d8;
        }
    }
    ctx->pc = 0x1674FCu;
    // 0x1674fc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1674fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x167500: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x167504: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x167508: 0xc78083cc  lwc1        $f0, -0x7C34($gp)
    ctx->pc = 0x167508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16750c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16750cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167510: 0xc79583d0  lwc1        $f21, -0x7C30($gp)
    ctx->pc = 0x167510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x167514: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x167514u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167518: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x167518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16751c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16751cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167520: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x167520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x167524: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x167524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x167528: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x167528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16752c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16752cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x167530: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x167530u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x167534: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x167534u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x167538: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x167538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16753c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167540: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x167540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167544: 0xc0618c2  jal         func_186308
    ctx->pc = 0x167544u;
    SET_GPR_U32(ctx, 31, 0x16754Cu);
    ctx->pc = 0x167548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167544u;
    // 0x167548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x167544u, 0x16754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16754Cu;
label_16754c:
    // 0x16754c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x16754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x167550: 0x8e6601b4  lw          $a2, 0x1B4($s3)
    ctx->pc = 0x167550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x167554: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x167558: 0xc78083d4  lwc1        $f0, -0x7C2C($gp)
    ctx->pc = 0x167558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16755c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x16755cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x167560: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x167560u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x167564: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x167564u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167568: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x167568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16756c: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x16756cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x167570: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x167570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x167574: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x167574u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x167578: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x167578u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16757c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16757cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x167580: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x167580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x167584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167588: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x167588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16758c: 0xc0618c2  jal         func_186308
    ctx->pc = 0x16758Cu;
    SET_GPR_U32(ctx, 31, 0x167594u);
    ctx->pc = 0x167590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16758Cu;
    // 0x167590: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x16758Cu, 0x167594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167594u;
label_167594:
    // 0x167594: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x167594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x167598: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x16759c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x16759cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1675a0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1675a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1675a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1675a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1675a8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1675a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1675ac: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1675acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1675b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1675b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1675b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675b8: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x1675B8u;
    SET_GPR_U32(ctx, 31, 0x1675C0u);
    ctx->pc = 0x1675BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1675B8u;
    // 0x1675bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x1675B8u, 0x1675C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675C0u;
label_1675c0:
    // 0x1675c0: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1675c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1675c4: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1675c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x1675c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1675c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675cc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1675ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1675d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1675d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1675d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1675d8: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x1675D8u;
    SET_GPR_U32(ctx, 31, 0x1675E0u);
    ctx->pc = 0x1675DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1675D8u;
    // 0x1675dc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x1675D8u, 0x1675E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675E0u;
label_1675e0:
    // 0x1675e0: 0xae601250  sw          $zero, 0x1250($s3)
    ctx->pc = 0x1675e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4688), GPR_U32(ctx, 0));
    // 0x1675e4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1675e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1675e8: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x1675E8u;
    {
        const bool branch_taken_0x1675e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675E8u;
        // 0x1675ec: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675e8) {
            ctx->pc = 0x167950u;
            goto label_167950;
        }
    }
    ctx->pc = 0x1675F0u;
label_1675f0:
    // 0x1675f0: 0x54400066  bnel        $v0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x1675F0u;
    {
        const bool branch_taken_0x1675f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1675f0) {
            ctx->pc = 0x1675F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1675F0u;
            // 0x1675f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16778Cu;
            goto label_16778c;
        }
    }
    ctx->pc = 0x1675F8u;
    // 0x1675f8: 0x10c000d5  beqz        $a2, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1675F8u;
    {
        const bool branch_taken_0x1675f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675F8u;
        // 0x1675fc: 0x26651258  addiu       $a1, $s3, 0x1258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675f8) {
            ctx->pc = 0x167950u;
            goto label_167950;
        }
    }
    ctx->pc = 0x167600u;
    // 0x167600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167604: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x167604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16760c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x16760Cu;
    {
        const bool branch_taken_0x16760c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16760Cu;
        // 0x167610: 0xae621260  sw          $v0, 0x1260($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16760c) {
            ctx->pc = 0x167668u;
            goto label_167668;
        }
    }
    ctx->pc = 0x167614u;
    // 0x167614: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x167614u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167618: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x167618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16761c: 0x0  nop
    ctx->pc = 0x16761cu;
    // NOP
label_167620:
    // 0x167620: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x167620u;
    {
        const bool branch_taken_0x167620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167620) {
            ctx->pc = 0x167624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167620u;
            // 0x167624: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167650u;
            goto label_167650;
        }
    }
    ctx->pc = 0x167628u;
    // 0x167628: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x167628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x16762c: 0x0  nop
    ctx->pc = 0x16762cu;
    // NOP
label_167630:
    // 0x167630: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x167630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x167634: 0x0  nop
    ctx->pc = 0x167634u;
    // NOP
    // 0x167638: 0x0  nop
    ctx->pc = 0x167638u;
    // NOP
    // 0x16763c: 0x0  nop
    ctx->pc = 0x16763cu;
    // NOP
    // 0x167640: 0x0  nop
    ctx->pc = 0x167640u;
    // NOP
    // 0x167644: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x167644u;
    {
        const bool branch_taken_0x167644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167644) {
            ctx->pc = 0x167648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167644u;
            // 0x167648: 0xac4000e0  sw          $zero, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167630;
        }
    }
    ctx->pc = 0x16764Cu;
    // 0x16764c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x16764cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_167650:
    // 0x167650: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x167650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167654: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167654u;
    {
        const bool branch_taken_0x167654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167654u;
        // 0x167658: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167654) {
            ctx->pc = 0x167668u;
            goto label_167668;
        }
    }
    ctx->pc = 0x16765Cu;
    // 0x16765c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x16765cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x167660: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x167660u;
    {
        const bool branch_taken_0x167660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167660) {
            ctx->pc = 0x167664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167660u;
            // 0x167664: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167620;
        }
    }
    ctx->pc = 0x167668u;
label_167668:
    // 0x167668: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x167668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x16766c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x167670: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x167674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167678: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x167678u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16767c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x16767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x167680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167684: 0xc79483d8  lwc1        $f20, -0x7C28($gp)
    ctx->pc = 0x167684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167688: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x167688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16768c: 0xc06164c  jal         func_185930
    ctx->pc = 0x16768Cu;
    SET_GPR_U32(ctx, 31, 0x167694u);
    ctx->pc = 0x167690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16768Cu;
    // 0x167690: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16768Cu, 0x167694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167694u;
label_167694:
    // 0x167694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167698: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x167698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16769c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16769cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1676a0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1676a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1676a4: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1676A4u;
    SET_GPR_U32(ctx, 31, 0x1676ACu);
    ctx->pc = 0x1676A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1676A4u;
    // 0x1676a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1676A4u, 0x1676ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1676ACu;
label_1676ac:
    // 0x1676ac: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1676acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1676b0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1676b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x1676b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1676b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1676b8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1676b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1676bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1676bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1676c0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1676c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1676c4: 0xc06164c  jal         func_185930
    ctx->pc = 0x1676C4u;
    SET_GPR_U32(ctx, 31, 0x1676CCu);
    ctx->pc = 0x1676C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1676C4u;
    // 0x1676c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1676C4u, 0x1676CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1676CCu;
label_1676cc:
    // 0x1676cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1676ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1676d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1676d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1676d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1676dc: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1676DCu;
    SET_GPR_U32(ctx, 31, 0x1676E4u);
    ctx->pc = 0x1676E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1676DCu;
    // 0x1676e0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1676DCu, 0x1676E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1676E4u;
label_1676e4:
    // 0x1676e4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1676e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1676e8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1676e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x1676ec: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1676ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1676f0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1676f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1676f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1676f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1676f8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1676f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1676fc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1676fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167700: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x167700u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167704: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167704u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16770c: 0xc06164c  jal         func_185930
    ctx->pc = 0x16770Cu;
    SET_GPR_U32(ctx, 31, 0x167714u);
    ctx->pc = 0x167710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16770Cu;
    // 0x167710: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16770Cu, 0x167714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167714u;
label_167714:
    // 0x167714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167718: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16771c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16771cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167720: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167720u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x167724: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x167724u;
    SET_GPR_U32(ctx, 31, 0x16772Cu);
    ctx->pc = 0x167728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167724u;
    // 0x167728: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x167724u, 0x16772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16772Cu;
label_16772c:
    // 0x16772c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x16772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x167730: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x167734: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x167734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x167738: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16773c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167740: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x167740u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167744: 0xc06164c  jal         func_185930
    ctx->pc = 0x167744u;
    SET_GPR_U32(ctx, 31, 0x16774Cu);
    ctx->pc = 0x167748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167744u;
    // 0x167748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167744u, 0x16774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16774Cu;
label_16774c:
    // 0x16774c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16774cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167750: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167754: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x167754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167758: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16775c: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x16775Cu;
    SET_GPR_U32(ctx, 31, 0x167764u);
    ctx->pc = 0x167760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16775Cu;
    // 0x167760: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x16775Cu, 0x167764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167764u;
label_167764:
    // 0x167764: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x167764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x167768: 0xae621250  sw          $v0, 0x1250($s3)
    ctx->pc = 0x167768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4688), GPR_U32(ctx, 2));
    // 0x16776c: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x16776cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
    // 0x167770: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x167770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x167774: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x167774u;
    {
        const bool branch_taken_0x167774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167774u;
        // 0x167778: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167774) {
            ctx->pc = 0x16794Cu;
            goto label_16794c;
        }
    }
    ctx->pc = 0x16777Cu;
    // 0x16777c: 0x0  nop
    ctx->pc = 0x16777cu;
    // NOP
label_167780:
    // 0x167780: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x167780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x167784: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167784u;
    {
        const bool branch_taken_0x167784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167784u;
        // 0x167788: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167784) {
            ctx->pc = 0x167798u;
            goto label_167798;
        }
    }
    ctx->pc = 0x16778Cu;
label_16778c:
    // 0x16778c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x16778Cu;
    {
        const bool branch_taken_0x16778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16778Cu;
        // 0x167790: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16778c) {
            ctx->pc = 0x167950u;
            goto label_167950;
        }
    }
    ctx->pc = 0x167794u;
    // 0x167794: 0x0  nop
    ctx->pc = 0x167794u;
    // NOP
label_167798:
    // 0x167798: 0x14c0006e  bnez        $a2, . + 4 + (0x6E << 2)
    ctx->pc = 0x167798u;
    {
        const bool branch_taken_0x167798 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167798u;
        // 0x16779c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167798) {
            ctx->pc = 0x167954u;
            goto label_167954;
        }
    }
    ctx->pc = 0x1677A0u;
    // 0x1677a0: 0x26631258  addiu       $v1, $s3, 0x1258
    ctx->pc = 0x1677a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4696));
    // 0x1677a4: 0xae601260  sw          $zero, 0x1260($s3)
    ctx->pc = 0x1677a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4704), GPR_U32(ctx, 0));
    // 0x1677a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1677a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1677ac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1677ACu;
    {
        const bool branch_taken_0x1677ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1677B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677ACu;
        // 0x1677b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677ac) {
            ctx->pc = 0x167800u;
            goto label_167800;
        }
    }
    ctx->pc = 0x1677B4u;
    // 0x1677b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1677b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1677b8:
    // 0x1677b8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1677B8u;
    {
        const bool branch_taken_0x1677b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1677b8) {
            ctx->pc = 0x1677BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1677B8u;
            // 0x1677bc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1677E8u;
            goto label_1677e8;
        }
    }
    ctx->pc = 0x1677C0u;
    // 0x1677c0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1677c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1677c4: 0xac4400e0  sw          $a0, 0xE0($v0)
    ctx->pc = 0x1677c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 4));
label_1677c8:
    // 0x1677c8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1677c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1677cc: 0x0  nop
    ctx->pc = 0x1677ccu;
    // NOP
    // 0x1677d0: 0x0  nop
    ctx->pc = 0x1677d0u;
    // NOP
    // 0x1677d4: 0x0  nop
    ctx->pc = 0x1677d4u;
    // NOP
    // 0x1677d8: 0x0  nop
    ctx->pc = 0x1677d8u;
    // NOP
    // 0x1677dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1677DCu;
    {
        const bool branch_taken_0x1677dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1677dc) {
            ctx->pc = 0x1677E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1677DCu;
            // 0x1677e0: 0xac4400e0  sw          $a0, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1677C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1677c8;
        }
    }
    ctx->pc = 0x1677E4u;
    // 0x1677e4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1677e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1677e8:
    // 0x1677e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1677e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1677ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1677ECu;
    {
        const bool branch_taken_0x1677ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1677F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677ECu;
        // 0x1677f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677ec) {
            ctx->pc = 0x167800u;
            goto label_167800;
        }
    }
    ctx->pc = 0x1677F4u;
    // 0x1677f4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1677f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1677f8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1677F8u;
    {
        const bool branch_taken_0x1677f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1677f8) {
            ctx->pc = 0x1677FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1677F8u;
            // 0x1677fc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1677B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1677b8;
        }
    }
    ctx->pc = 0x167800u;
label_167800:
    // 0x167800: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x167800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x167804: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x167808: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16780c: 0xc78083dc  lwc1        $f0, -0x7C24($gp)
    ctx->pc = 0x16780cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167810: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167814: 0xc79483e0  lwc1        $f20, -0x7C20($gp)
    ctx->pc = 0x167814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167818: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x167818u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16781c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x16781cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x167820: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x167820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167824: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x167824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x167828: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x167828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16782c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16782cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x167830: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x167830u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x167834: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x167834u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x167838: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x167838u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16783c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x167840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167844: 0xc79683e4  lwc1        $f22, -0x7C1C($gp)
    ctx->pc = 0x167844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x167848: 0xc06164c  jal         func_185930
    ctx->pc = 0x167848u;
    SET_GPR_U32(ctx, 31, 0x167850u);
    ctx->pc = 0x16784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167848u;
    // 0x16784c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167848u, 0x167850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167850u;
label_167850:
    // 0x167850: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167854: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x167854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16785c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x16785cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x167860: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x167860u;
    SET_GPR_U32(ctx, 31, 0x167868u);
    ctx->pc = 0x167864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167860u;
    // 0x167864: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x167860u, 0x167868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167868u;
label_167868:
    // 0x167868: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x167868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x16786c: 0x8e6601b4  lw          $a2, 0x1B4($s3)
    ctx->pc = 0x16786cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x167870: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x167874: 0xc78083e8  lwc1        $f0, -0x7C18($gp)
    ctx->pc = 0x167874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167878: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x167878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16787c: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x16787cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x167880: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x167880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167884: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x167884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x167888: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x167888u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16788c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16788cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x167890: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x167890u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x167894: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x167894u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x167898: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x167898u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16789c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16789cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1678a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1678a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1678a4: 0xc06164c  jal         func_185930
    ctx->pc = 0x1678A4u;
    SET_GPR_U32(ctx, 31, 0x1678ACu);
    ctx->pc = 0x1678A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1678A4u;
    // 0x1678a8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1678A4u, 0x1678ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1678ACu;
label_1678ac:
    // 0x1678ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1678acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1678b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1678b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1678b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1678b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1678b8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1678b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1678bc: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1678BCu;
    SET_GPR_U32(ctx, 31, 0x1678C4u);
    ctx->pc = 0x1678C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1678BCu;
    // 0x1678c0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1678BCu, 0x1678C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1678C4u;
label_1678c4:
    // 0x1678c4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1678c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1678c8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1678c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x1678cc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1678ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1678d0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1678d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1678d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1678d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1678d8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1678d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1678dc: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1678dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1678e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1678e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1678e4: 0xc06164c  jal         func_185930
    ctx->pc = 0x1678E4u;
    SET_GPR_U32(ctx, 31, 0x1678ECu);
    ctx->pc = 0x1678E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1678E4u;
    // 0x1678e8: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1678E4u, 0x1678ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1678ECu;
label_1678ec:
    // 0x1678ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1678ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1678f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1678f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1678f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1678f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1678f8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1678f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1678fc: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1678FCu;
    SET_GPR_U32(ctx, 31, 0x167904u);
    ctx->pc = 0x167900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1678FCu;
    // 0x167900: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1678FCu, 0x167904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167904u;
label_167904:
    // 0x167904: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x167904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x167908: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x16790c: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x16790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x167910: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x167914: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167918: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x167918u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16791c: 0xc06164c  jal         func_185930
    ctx->pc = 0x16791Cu;
    SET_GPR_U32(ctx, 31, 0x167924u);
    ctx->pc = 0x167920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16791Cu;
    // 0x167920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16791Cu, 0x167924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167924u;
label_167924:
    // 0x167924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167928: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16792c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16792cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167930: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x167930u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x167934: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x167934u;
    SET_GPR_U32(ctx, 31, 0x16793Cu);
    ctx->pc = 0x167938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167934u;
    // 0x167938: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x167934u, 0x16793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16793Cu;
label_16793c:
    // 0x16793c: 0xae601250  sw          $zero, 0x1250($s3)
    ctx->pc = 0x16793cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4688), GPR_U32(ctx, 0));
    // 0x167940: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x167940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
    // 0x167944: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x167944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x167948: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x167948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16794c:
    // 0x16794c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x16794cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_167950:
    // 0x167950: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x167950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_167954:
    // 0x167954: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x167954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_167958:
    // 0x167958: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x167958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16795c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x16795cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x167960: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x167960u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167964: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x167964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x167968: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x167968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16796c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x16796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x167970: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x167970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167974: 0x3e00008  jr          $ra
    ctx->pc = 0x167974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167974u;
        // 0x167978: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16797Cu;
}
