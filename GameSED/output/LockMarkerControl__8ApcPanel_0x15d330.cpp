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

// Function: LockMarkerControl__8ApcPanel
// Address: 0x15d330 - 0x15d514
void LockMarkerControl__8ApcPanel_0x15d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LockMarkerControl__8ApcPanel_0x15d330");
#endif

    switch (ctx->pc) {
        case 0x15d330u: goto label_15d330;
        case 0x15d334u: goto label_15d334;
        case 0x15d338u: goto label_15d338;
        case 0x15d33cu: goto label_15d33c;
        case 0x15d340u: goto label_15d340;
        case 0x15d344u: goto label_15d344;
        case 0x15d348u: goto label_15d348;
        case 0x15d34cu: goto label_15d34c;
        case 0x15d350u: goto label_15d350;
        case 0x15d354u: goto label_15d354;
        case 0x15d358u: goto label_15d358;
        case 0x15d35cu: goto label_15d35c;
        case 0x15d360u: goto label_15d360;
        case 0x15d364u: goto label_15d364;
        case 0x15d368u: goto label_15d368;
        case 0x15d36cu: goto label_15d36c;
        case 0x15d370u: goto label_15d370;
        case 0x15d374u: goto label_15d374;
        case 0x15d378u: goto label_15d378;
        case 0x15d37cu: goto label_15d37c;
        case 0x15d380u: goto label_15d380;
        case 0x15d384u: goto label_15d384;
        case 0x15d388u: goto label_15d388;
        case 0x15d38cu: goto label_15d38c;
        case 0x15d390u: goto label_15d390;
        case 0x15d394u: goto label_15d394;
        case 0x15d398u: goto label_15d398;
        case 0x15d39cu: goto label_15d39c;
        case 0x15d3a0u: goto label_15d3a0;
        case 0x15d3a4u: goto label_15d3a4;
        case 0x15d3a8u: goto label_15d3a8;
        case 0x15d3acu: goto label_15d3ac;
        case 0x15d3b0u: goto label_15d3b0;
        case 0x15d3b4u: goto label_15d3b4;
        case 0x15d3b8u: goto label_15d3b8;
        case 0x15d3bcu: goto label_15d3bc;
        case 0x15d3c0u: goto label_15d3c0;
        case 0x15d3c4u: goto label_15d3c4;
        case 0x15d3c8u: goto label_15d3c8;
        case 0x15d3ccu: goto label_15d3cc;
        case 0x15d3d0u: goto label_15d3d0;
        case 0x15d3d4u: goto label_15d3d4;
        case 0x15d3d8u: goto label_15d3d8;
        case 0x15d3dcu: goto label_15d3dc;
        case 0x15d3e0u: goto label_15d3e0;
        case 0x15d3e4u: goto label_15d3e4;
        case 0x15d3e8u: goto label_15d3e8;
        case 0x15d3ecu: goto label_15d3ec;
        case 0x15d3f0u: goto label_15d3f0;
        case 0x15d3f4u: goto label_15d3f4;
        case 0x15d3f8u: goto label_15d3f8;
        case 0x15d3fcu: goto label_15d3fc;
        case 0x15d400u: goto label_15d400;
        case 0x15d404u: goto label_15d404;
        case 0x15d408u: goto label_15d408;
        case 0x15d40cu: goto label_15d40c;
        case 0x15d410u: goto label_15d410;
        case 0x15d414u: goto label_15d414;
        case 0x15d418u: goto label_15d418;
        case 0x15d41cu: goto label_15d41c;
        case 0x15d420u: goto label_15d420;
        case 0x15d424u: goto label_15d424;
        case 0x15d428u: goto label_15d428;
        case 0x15d42cu: goto label_15d42c;
        case 0x15d430u: goto label_15d430;
        case 0x15d434u: goto label_15d434;
        case 0x15d438u: goto label_15d438;
        case 0x15d43cu: goto label_15d43c;
        case 0x15d440u: goto label_15d440;
        case 0x15d444u: goto label_15d444;
        case 0x15d448u: goto label_15d448;
        case 0x15d44cu: goto label_15d44c;
        case 0x15d450u: goto label_15d450;
        case 0x15d454u: goto label_15d454;
        case 0x15d458u: goto label_15d458;
        case 0x15d45cu: goto label_15d45c;
        case 0x15d460u: goto label_15d460;
        case 0x15d464u: goto label_15d464;
        case 0x15d468u: goto label_15d468;
        case 0x15d46cu: goto label_15d46c;
        case 0x15d470u: goto label_15d470;
        case 0x15d474u: goto label_15d474;
        case 0x15d478u: goto label_15d478;
        case 0x15d47cu: goto label_15d47c;
        case 0x15d480u: goto label_15d480;
        case 0x15d484u: goto label_15d484;
        case 0x15d488u: goto label_15d488;
        case 0x15d48cu: goto label_15d48c;
        case 0x15d490u: goto label_15d490;
        case 0x15d494u: goto label_15d494;
        case 0x15d498u: goto label_15d498;
        case 0x15d49cu: goto label_15d49c;
        case 0x15d4a0u: goto label_15d4a0;
        case 0x15d4a4u: goto label_15d4a4;
        case 0x15d4a8u: goto label_15d4a8;
        case 0x15d4acu: goto label_15d4ac;
        case 0x15d4b0u: goto label_15d4b0;
        case 0x15d4b4u: goto label_15d4b4;
        case 0x15d4b8u: goto label_15d4b8;
        case 0x15d4bcu: goto label_15d4bc;
        case 0x15d4c0u: goto label_15d4c0;
        case 0x15d4c4u: goto label_15d4c4;
        case 0x15d4c8u: goto label_15d4c8;
        case 0x15d4ccu: goto label_15d4cc;
        case 0x15d4d0u: goto label_15d4d0;
        case 0x15d4d4u: goto label_15d4d4;
        case 0x15d4d8u: goto label_15d4d8;
        case 0x15d4dcu: goto label_15d4dc;
        case 0x15d4e0u: goto label_15d4e0;
        case 0x15d4e4u: goto label_15d4e4;
        case 0x15d4e8u: goto label_15d4e8;
        case 0x15d4ecu: goto label_15d4ec;
        case 0x15d4f0u: goto label_15d4f0;
        case 0x15d4f4u: goto label_15d4f4;
        case 0x15d4f8u: goto label_15d4f8;
        case 0x15d4fcu: goto label_15d4fc;
        case 0x15d500u: goto label_15d500;
        case 0x15d504u: goto label_15d504;
        case 0x15d508u: goto label_15d508;
        case 0x15d50cu: goto label_15d50c;
        case 0x15d510u: goto label_15d510;
        default: break;
    }

    ctx->pc = 0x15d330u;

label_15d330:
    // 0x15d330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15d334:
    // 0x15d334: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x15d334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15d338:
    // 0x15d338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15d338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15d33c:
    // 0x15d33c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d340:
    // 0x15d340: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15d340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15d344:
    // 0x15d344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_15d348:
    // 0x15d348: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x15d348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_15d34c:
    // 0x15d34c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15d350:
    // 0x15d350: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15d350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15d354:
    // 0x15d354: 0x8c713630  lw          $s1, 0x3630($v1)
    ctx->pc = 0x15d354u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13872)));
label_15d358:
    // 0x15d358: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x15d358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_15d35c:
    // 0x15d35c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x15d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_15d360:
    // 0x15d360: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_15d364:
    if (ctx->pc == 0x15D364u) {
        ctx->pc = 0x15D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D360u;
        // 0x15d364: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D368u;
        goto label_15d368;
    }
    ctx->pc = 0x15D360u;
    {
        const bool branch_taken_0x15d360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D360u;
        // 0x15d364: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d360) {
            ctx->pc = 0x15D3B0u;
            goto label_15d3b0;
        }
    }
    ctx->pc = 0x15D368u;
label_15d368:
    // 0x15d368: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15d368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_15d36c:
    // 0x15d36c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_15d370:
    if (ctx->pc == 0x15D370u) {
        ctx->pc = 0x15D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D36Cu;
        // 0x15d370: 0x8e230074  lw          $v1, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D374u;
        goto label_15d374;
    }
    ctx->pc = 0x15D36Cu;
    {
        const bool branch_taken_0x15d36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d36c) {
            ctx->pc = 0x15D370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D36Cu;
            // 0x15d370: 0x8e230074  lw          $v1, 0x74($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D400u;
            goto label_15d400;
        }
    }
    ctx->pc = 0x15D374u;
label_15d374:
    // 0x15d374: 0x8e050164  lw          $a1, 0x164($s0)
    ctx->pc = 0x15d374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_15d378:
    // 0x15d378: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x15d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_15d37c:
    // 0x15d37c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_15d380:
    if (ctx->pc == 0x15D380u) {
        ctx->pc = 0x15D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D37Cu;
        // 0x15d380: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D384u;
        goto label_15d384;
    }
    ctx->pc = 0x15D37Cu;
    {
        const bool branch_taken_0x15d37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d37c) {
            ctx->pc = 0x15D380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D37Cu;
            // 0x15d380: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D3A0u;
            goto label_15d3a0;
        }
    }
    ctx->pc = 0x15D384u;
label_15d384:
    // 0x15d384: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_15d388:
    // 0x15d388: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x15d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_15d38c:
    // 0x15d38c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d38cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d390:
    // 0x15d390: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d394:
    // 0x15d394: 0x60f809  jalr        $v1
label_15d398:
    if (ctx->pc == 0x15D398u) {
        ctx->pc = 0x15D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D394u;
        // 0x15d398: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D39Cu;
        goto label_15d39c;
    }
    ctx->pc = 0x15D394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D39Cu);
        ctx->pc = 0x15D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D394u;
        // 0x15d398: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D394u, 0x15D39Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D39Cu;
label_15d39c:
    // 0x15d39c: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15d39cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15d3a0:
    // 0x15d3a0: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x15d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_15d3a4:
    // 0x15d3a4: 0x10000012  b           . + 4 + (0x12 << 2)
label_15d3a8:
    if (ctx->pc == 0x15D3A8u) {
        ctx->pc = 0x15D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3A4u;
        // 0x15d3a8: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3ACu;
        goto label_15d3ac;
    }
    ctx->pc = 0x15D3A4u;
    {
        const bool branch_taken_0x15d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3A4u;
        // 0x15d3a8: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3a4) {
            ctx->pc = 0x15D3F0u;
            goto label_15d3f0;
        }
    }
    ctx->pc = 0x15D3ACu;
label_15d3ac:
    // 0x15d3ac: 0x0  nop
    ctx->pc = 0x15d3acu;
    // NOP
label_15d3b0:
    // 0x15d3b0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15d3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_15d3b4:
    // 0x15d3b4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_15d3b8:
    if (ctx->pc == 0x15D3B8u) {
        ctx->pc = 0x15D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3B4u;
        // 0x15d3b8: 0x8e230074  lw          $v1, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3BCu;
        goto label_15d3bc;
    }
    ctx->pc = 0x15D3B4u;
    {
        const bool branch_taken_0x15d3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d3b4) {
            ctx->pc = 0x15D3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D3B4u;
            // 0x15d3b8: 0x8e230074  lw          $v1, 0x74($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D400u;
            goto label_15d400;
        }
    }
    ctx->pc = 0x15D3BCu;
label_15d3bc:
    // 0x15d3bc: 0x8e050168  lw          $a1, 0x168($s0)
    ctx->pc = 0x15d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_15d3c0:
    // 0x15d3c0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x15d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_15d3c4:
    // 0x15d3c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_15d3c8:
    if (ctx->pc == 0x15D3C8u) {
        ctx->pc = 0x15D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3C4u;
        // 0x15d3c8: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3CCu;
        goto label_15d3cc;
    }
    ctx->pc = 0x15D3C4u;
    {
        const bool branch_taken_0x15d3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d3c4) {
            ctx->pc = 0x15D3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D3C4u;
            // 0x15d3c8: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D3E8u;
            goto label_15d3e8;
        }
    }
    ctx->pc = 0x15D3CCu;
label_15d3cc:
    // 0x15d3cc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_15d3d0:
    // 0x15d3d0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x15d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_15d3d4:
    // 0x15d3d4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d3d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d3d8:
    // 0x15d3d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d3dc:
    // 0x15d3dc: 0x60f809  jalr        $v1
label_15d3e0:
    if (ctx->pc == 0x15D3E0u) {
        ctx->pc = 0x15D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3DCu;
        // 0x15d3e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3E4u;
        goto label_15d3e4;
    }
    ctx->pc = 0x15D3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D3E4u);
        ctx->pc = 0x15D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3DCu;
        // 0x15d3e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D3DCu, 0x15D3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D3E4u;
label_15d3e4:
    // 0x15d3e4: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15d3e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15d3e8:
    // 0x15d3e8: 0x8e030164  lw          $v1, 0x164($s0)
    ctx->pc = 0x15d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_15d3ec:
    // 0x15d3ec: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x15d3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_15d3f0:
    // 0x15d3f0: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x15d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
label_15d3f4:
    // 0x15d3f4: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x15d3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
label_15d3f8:
    // 0x15d3f8: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x15d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
label_15d3fc:
    // 0x15d3fc: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x15d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_15d400:
    // 0x15d400: 0x50600035  beql        $v1, $zero, . + 4 + (0x35 << 2)
label_15d404:
    if (ctx->pc == 0x15D404u) {
        ctx->pc = 0x15D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D400u;
        // 0x15d404: 0x8e050160  lw          $a1, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D408u;
        goto label_15d408;
    }
    ctx->pc = 0x15D400u;
    {
        const bool branch_taken_0x15d400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d400) {
            ctx->pc = 0x15D404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D400u;
            // 0x15d404: 0x8e050160  lw          $a1, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D4D8u;
            goto label_15d4d8;
        }
    }
    ctx->pc = 0x15D408u;
label_15d408:
    // 0x15d408: 0x8e02016c  lw          $v0, 0x16C($s0)
    ctx->pc = 0x15d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
label_15d40c:
    // 0x15d40c: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
label_15d410:
    if (ctx->pc == 0x15D410u) {
        ctx->pc = 0x15D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D40Cu;
        // 0x15d410: 0x8e070160  lw          $a3, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D414u;
        goto label_15d414;
    }
    ctx->pc = 0x15D40Cu;
    {
        const bool branch_taken_0x15d40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15d40c) {
            ctx->pc = 0x15D410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D40Cu;
            // 0x15d410: 0x8e070160  lw          $a3, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D4A0u;
            goto label_15d4a0;
        }
    }
    ctx->pc = 0x15D414u;
label_15d414:
    // 0x15d414: 0x8e050160  lw          $a1, 0x160($s0)
    ctx->pc = 0x15d414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_15d418:
    // 0x15d418: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x15d418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_15d41c:
    // 0x15d41c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_15d420:
    if (ctx->pc == 0x15D420u) {
        ctx->pc = 0x15D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D41Cu;
        // 0x15d420: 0x8e060160  lw          $a2, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D424u;
        goto label_15d424;
    }
    ctx->pc = 0x15D41Cu;
    {
        const bool branch_taken_0x15d41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d41c) {
            ctx->pc = 0x15D420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D41Cu;
            // 0x15d420: 0x8e060160  lw          $a2, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D440u;
            goto label_15d440;
        }
    }
    ctx->pc = 0x15D424u;
label_15d424:
    // 0x15d424: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15d424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_15d428:
    // 0x15d428: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x15d428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_15d42c:
    // 0x15d42c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d42cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d430:
    // 0x15d430: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d434:
    // 0x15d434: 0x60f809  jalr        $v1
label_15d438:
    if (ctx->pc == 0x15D438u) {
        ctx->pc = 0x15D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D434u;
        // 0x15d438: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D43Cu;
        goto label_15d43c;
    }
    ctx->pc = 0x15D434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D43Cu);
        ctx->pc = 0x15D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D434u;
        // 0x15d438: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D434u, 0x15D43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D43Cu;
label_15d43c:
    // 0x15d43c: 0x8e060160  lw          $a2, 0x160($s0)
    ctx->pc = 0x15d43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_15d440:
    // 0x15d440: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x15d440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15d444:
    // 0x15d444: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x15d444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_15d448:
    // 0x15d448: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15d44c:
    // 0x15d44c: 0xacc3012c  sw          $v1, 0x12C($a2)
    ctx->pc = 0x15d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 300), GPR_U32(ctx, 3));
label_15d450:
    // 0x15d450: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x15d450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
label_15d454:
    // 0x15d454: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x15d454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_15d458:
    // 0x15d458: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d45c:
    // 0x15d45c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d460:
    // 0x15d460: 0x60f809  jalr        $v1
label_15d464:
    if (ctx->pc == 0x15D464u) {
        ctx->pc = 0x15D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D460u;
        // 0x15d464: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D468u;
        goto label_15d468;
    }
    ctx->pc = 0x15D460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D468u);
        ctx->pc = 0x15D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D460u;
        // 0x15d464: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D460u, 0x15D468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D468u;
label_15d468:
    // 0x15d468: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x15d468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_15d46c:
    // 0x15d46c: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x15d46cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_15d470:
    // 0x15d470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d474:
    // 0x15d474: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x15d474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_15d478:
    // 0x15d478: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x15d478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_15d47c:
    // 0x15d47c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15d47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15d480:
    // 0x15d480: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x15d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_15d484:
    // 0x15d484: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d488:
    // 0x15d488: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d48c:
    // 0x15d48c: 0x60f809  jalr        $v1
label_15d490:
    if (ctx->pc == 0x15D490u) {
        ctx->pc = 0x15D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D48Cu;
        // 0x15d490: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D494u;
        goto label_15d494;
    }
    ctx->pc = 0x15D48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D494u);
        ctx->pc = 0x15D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D48Cu;
        // 0x15d490: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D48Cu, 0x15D494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D494u;
label_15d494:
    // 0x15d494: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x15d494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_15d498:
    // 0x15d498: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x15d498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
label_15d49c:
    // 0x15d49c: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x15d49cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_15d4a0:
    // 0x15d4a0: 0x27868b40  addiu       $a2, $gp, -0x74C0
    ctx->pc = 0x15d4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937408));
label_15d4a4:
    // 0x15d4a4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x15d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_15d4a8:
    // 0x15d4a8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x15d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_15d4ac:
    // 0x15d4ac: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x15d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_15d4b0:
    // 0x15d4b0: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x15d4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_15d4b4:
    // 0x15d4b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15d4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_15d4b8:
    // 0x15d4b8: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15d4bc:
    // 0x15d4bc: 0xc3280a  movz        $a1, $a2, $v1
    ctx->pc = 0x15d4bcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
label_15d4c0:
    // 0x15d4c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d4c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d4c4:
    // 0x15d4c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d4c8:
    // 0x15d4c8: 0x60f809  jalr        $v1
label_15d4cc:
    if (ctx->pc == 0x15D4CCu) {
        ctx->pc = 0x15D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4C8u;
        // 0x15d4cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D4D0u;
        goto label_15d4d0;
    }
    ctx->pc = 0x15D4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D4D0u);
        ctx->pc = 0x15D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4C8u;
        // 0x15d4cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D4C8u, 0x15D4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D4D0u;
label_15d4d0:
    // 0x15d4d0: 0x1000000c  b           . + 4 + (0xC << 2)
label_15d4d4:
    if (ctx->pc == 0x15D4D4u) {
        ctx->pc = 0x15D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4D0u;
        // 0x15d4d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D4D8u;
        goto label_15d4d8;
    }
    ctx->pc = 0x15D4D0u;
    {
        const bool branch_taken_0x15d4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4D0u;
        // 0x15d4d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4d0) {
            ctx->pc = 0x15D504u;
            goto label_15d504;
        }
    }
    ctx->pc = 0x15D4D8u;
label_15d4d8:
    // 0x15d4d8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x15d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_15d4dc:
    // 0x15d4dc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_15d4e0:
    if (ctx->pc == 0x15D4E0u) {
        ctx->pc = 0x15D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4DCu;
        // 0x15d4e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D4E4u;
        goto label_15d4e4;
    }
    ctx->pc = 0x15D4DCu;
    {
        const bool branch_taken_0x15d4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d4dc) {
            ctx->pc = 0x15D4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D4DCu;
            // 0x15d4e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D504u;
            goto label_15d504;
        }
    }
    ctx->pc = 0x15D4E4u;
label_15d4e4:
    // 0x15d4e4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x15d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_15d4e8:
    // 0x15d4e8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x15d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_15d4ec:
    // 0x15d4ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d4ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d4f0:
    // 0x15d4f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d4f4:
    // 0x15d4f4: 0x60f809  jalr        $v1
label_15d4f8:
    if (ctx->pc == 0x15D4F8u) {
        ctx->pc = 0x15D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4F4u;
        // 0x15d4f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D4FCu;
        goto label_15d4fc;
    }
    ctx->pc = 0x15D4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D4FCu);
        ctx->pc = 0x15D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4F4u;
        // 0x15d4f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D4F4u, 0x15D4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D4FCu;
label_15d4fc:
    // 0x15d4fc: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x15d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
label_15d500:
    // 0x15d500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15d500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15d504:
    // 0x15d504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15d504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15d508:
    // 0x15d508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15d50c:
    // 0x15d50c: 0x3e00008  jr          $ra
label_15d510:
    if (ctx->pc == 0x15D510u) {
        ctx->pc = 0x15D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D50Cu;
        // 0x15d510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D514u;
        goto label_fallthrough_0x15d50c;
    }
    ctx->pc = 0x15D50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D50Cu;
        // 0x15d510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d50c:
    ctx->pc = 0x15D514u;
}
