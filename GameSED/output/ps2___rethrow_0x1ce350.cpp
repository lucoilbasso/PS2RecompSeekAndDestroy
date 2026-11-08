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

// Function: __rethrow
// Address: 0x1ce350 - 0x1ce4b0
void ps2___rethrow_0x1ce350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rethrow_0x1ce350");
#endif

    switch (ctx->pc) {
        case 0x1ce350u: goto label_1ce350;
        case 0x1ce354u: goto label_1ce354;
        case 0x1ce358u: goto label_1ce358;
        case 0x1ce35cu: goto label_1ce35c;
        case 0x1ce360u: goto label_1ce360;
        case 0x1ce364u: goto label_1ce364;
        case 0x1ce368u: goto label_1ce368;
        case 0x1ce36cu: goto label_1ce36c;
        case 0x1ce370u: goto label_1ce370;
        case 0x1ce374u: goto label_1ce374;
        case 0x1ce378u: goto label_1ce378;
        case 0x1ce37cu: goto label_1ce37c;
        case 0x1ce380u: goto label_1ce380;
        case 0x1ce384u: goto label_1ce384;
        case 0x1ce388u: goto label_1ce388;
        case 0x1ce38cu: goto label_1ce38c;
        case 0x1ce390u: goto label_1ce390;
        case 0x1ce394u: goto label_1ce394;
        case 0x1ce398u: goto label_1ce398;
        case 0x1ce39cu: goto label_1ce39c;
        case 0x1ce3a0u: goto label_1ce3a0;
        case 0x1ce3a4u: goto label_1ce3a4;
        case 0x1ce3a8u: goto label_1ce3a8;
        case 0x1ce3acu: goto label_1ce3ac;
        case 0x1ce3b0u: goto label_1ce3b0;
        case 0x1ce3b4u: goto label_1ce3b4;
        case 0x1ce3b8u: goto label_1ce3b8;
        case 0x1ce3bcu: goto label_1ce3bc;
        case 0x1ce3c0u: goto label_1ce3c0;
        case 0x1ce3c4u: goto label_1ce3c4;
        case 0x1ce3c8u: goto label_1ce3c8;
        case 0x1ce3ccu: goto label_1ce3cc;
        case 0x1ce3d0u: goto label_1ce3d0;
        case 0x1ce3d4u: goto label_1ce3d4;
        case 0x1ce3d8u: goto label_1ce3d8;
        case 0x1ce3dcu: goto label_1ce3dc;
        case 0x1ce3e0u: goto label_1ce3e0;
        case 0x1ce3e4u: goto label_1ce3e4;
        case 0x1ce3e8u: goto label_1ce3e8;
        case 0x1ce3ecu: goto label_1ce3ec;
        case 0x1ce3f0u: goto label_1ce3f0;
        case 0x1ce3f4u: goto label_1ce3f4;
        case 0x1ce3f8u: goto label_1ce3f8;
        case 0x1ce3fcu: goto label_1ce3fc;
        case 0x1ce400u: goto label_1ce400;
        case 0x1ce404u: goto label_1ce404;
        case 0x1ce408u: goto label_1ce408;
        case 0x1ce40cu: goto label_1ce40c;
        case 0x1ce410u: goto label_1ce410;
        case 0x1ce414u: goto label_1ce414;
        case 0x1ce418u: goto label_1ce418;
        case 0x1ce41cu: goto label_1ce41c;
        case 0x1ce420u: goto label_1ce420;
        case 0x1ce424u: goto label_1ce424;
        case 0x1ce428u: goto label_1ce428;
        case 0x1ce42cu: goto label_1ce42c;
        case 0x1ce430u: goto label_1ce430;
        case 0x1ce434u: goto label_1ce434;
        case 0x1ce438u: goto label_1ce438;
        case 0x1ce43cu: goto label_1ce43c;
        case 0x1ce440u: goto label_1ce440;
        case 0x1ce444u: goto label_1ce444;
        case 0x1ce448u: goto label_1ce448;
        case 0x1ce44cu: goto label_1ce44c;
        case 0x1ce450u: goto label_1ce450;
        case 0x1ce454u: goto label_1ce454;
        case 0x1ce458u: goto label_1ce458;
        case 0x1ce45cu: goto label_1ce45c;
        case 0x1ce460u: goto label_1ce460;
        case 0x1ce464u: goto label_1ce464;
        case 0x1ce468u: goto label_1ce468;
        case 0x1ce46cu: goto label_1ce46c;
        case 0x1ce470u: goto label_1ce470;
        case 0x1ce474u: goto label_1ce474;
        case 0x1ce478u: goto label_1ce478;
        case 0x1ce47cu: goto label_1ce47c;
        case 0x1ce480u: goto label_1ce480;
        case 0x1ce484u: goto label_1ce484;
        case 0x1ce488u: goto label_1ce488;
        case 0x1ce48cu: goto label_1ce48c;
        case 0x1ce490u: goto label_1ce490;
        case 0x1ce494u: goto label_1ce494;
        case 0x1ce498u: goto label_1ce498;
        case 0x1ce49cu: goto label_1ce49c;
        case 0x1ce4a0u: goto label_1ce4a0;
        case 0x1ce4a4u: goto label_1ce4a4;
        case 0x1ce4a8u: goto label_1ce4a8;
        case 0x1ce4acu: goto label_1ce4ac;
        default: break;
    }

    ctx->pc = 0x1ce350u;

label_1ce350:
    // 0x1ce350: 0x27bdfa60  addiu       $sp, $sp, -0x5A0
    ctx->pc = 0x1ce350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965856));
label_1ce354:
    // 0x1ce354: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1ce354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1ce358:
    // 0x1ce358: 0x7fbe0520  sq          $fp, 0x520($sp)
    ctx->pc = 0x1ce358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 30));
label_1ce35c:
    // 0x1ce35c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x1ce35cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ce360:
    // 0x1ce360: 0x7fb004a0  sq          $s0, 0x4A0($sp)
    ctx->pc = 0x1ce360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 16));
label_1ce364:
    // 0x1ce364: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x1ce364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
label_1ce368:
    // 0x1ce368: 0x7fb204c0  sq          $s2, 0x4C0($sp)
    ctx->pc = 0x1ce368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 18));
label_1ce36c:
    // 0x1ce36c: 0x7fb304d0  sq          $s3, 0x4D0($sp)
    ctx->pc = 0x1ce36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 19));
label_1ce370:
    // 0x1ce370: 0x7fb404e0  sq          $s4, 0x4E0($sp)
    ctx->pc = 0x1ce370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 20));
label_1ce374:
    // 0x1ce374: 0x7fb504f0  sq          $s5, 0x4F0($sp)
    ctx->pc = 0x1ce374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 21));
label_1ce378:
    // 0x1ce378: 0x7fb60500  sq          $s6, 0x500($sp)
    ctx->pc = 0x1ce378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 22));
label_1ce37c:
    // 0x1ce37c: 0x7fb70510  sq          $s7, 0x510($sp)
    ctx->pc = 0x1ce37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 23));
label_1ce380:
    // 0x1ce380: 0xffbf0530  sd          $ra, 0x530($sp)
    ctx->pc = 0x1ce380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1328), GPR_U64(ctx, 31));
label_1ce384:
    // 0x1ce384: 0xe7bf0590  swc1        $f31, 0x590($sp)
    ctx->pc = 0x1ce384u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1424), bits); }
label_1ce388:
    // 0x1ce388: 0xe7be0588  swc1        $f30, 0x588($sp)
    ctx->pc = 0x1ce388u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1416), bits); }
label_1ce38c:
    // 0x1ce38c: 0xe7bd0580  swc1        $f29, 0x580($sp)
    ctx->pc = 0x1ce38cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_1ce390:
    // 0x1ce390: 0xe7bc0578  swc1        $f28, 0x578($sp)
    ctx->pc = 0x1ce390u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
label_1ce394:
    // 0x1ce394: 0xe7bb0570  swc1        $f27, 0x570($sp)
    ctx->pc = 0x1ce394u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
label_1ce398:
    // 0x1ce398: 0xe7ba0568  swc1        $f26, 0x568($sp)
    ctx->pc = 0x1ce398u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1384), bits); }
label_1ce39c:
    // 0x1ce39c: 0xe7b90560  swc1        $f25, 0x560($sp)
    ctx->pc = 0x1ce39cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
label_1ce3a0:
    // 0x1ce3a0: 0xe7b80558  swc1        $f24, 0x558($sp)
    ctx->pc = 0x1ce3a0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
label_1ce3a4:
    // 0x1ce3a4: 0xe7b70550  swc1        $f23, 0x550($sp)
    ctx->pc = 0x1ce3a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
label_1ce3a8:
    // 0x1ce3a8: 0xe7b60548  swc1        $f22, 0x548($sp)
    ctx->pc = 0x1ce3a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1352), bits); }
label_1ce3ac:
    // 0x1ce3ac: 0xe7b50540  swc1        $f21, 0x540($sp)
    ctx->pc = 0x1ce3acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_1ce3b0:
    // 0x1ce3b0: 0xe7b40538  swc1        $f20, 0x538($sp)
    ctx->pc = 0x1ce3b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1336), bits); }
label_1ce3b4:
    // 0x1ce3b4: 0xafc40488  sw          $a0, 0x488($fp)
    ctx->pc = 0x1ce3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1160), GPR_U32(ctx, 4));
label_1ce3b8:
    // 0x1ce3b8: 0x8c62de14  lw          $v0, -0x21EC($v1)
    ctx->pc = 0x1ce3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958612)));
label_1ce3bc:
    // 0x1ce3bc: 0x40f809  jalr        $v0
label_1ce3c0:
    if (ctx->pc == 0x1CE3C0u) {
        ctx->pc = 0x1CE3C4u;
        goto label_1ce3c4;
    }
    ctx->pc = 0x1CE3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE3C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE3BCu, 0x1CE3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE3C4u;
label_1ce3c4:
    // 0x1ce3c4: 0xafde0490  sw          $fp, 0x490($fp)
    ctx->pc = 0x1ce3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1168), GPR_U32(ctx, 30));
label_1ce3c8:
    // 0x1ce3c8: 0xafc2048c  sw          $v0, 0x48C($fp)
    ctx->pc = 0x1ce3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1164), GPR_U32(ctx, 2));
label_1ce3cc:
    // 0x1ce3cc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ce3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ce3d0:
    // 0x1ce3d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ce3d4:
    if (ctx->pc == 0x1CE3D4u) {
        ctx->pc = 0x1CE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3D0u;
        // 0x1ce3d4: 0x8fc30488  lw          $v1, 0x488($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE3D8u;
        goto label_1ce3d8;
    }
    ctx->pc = 0x1CE3D0u;
    {
        const bool branch_taken_0x1ce3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3D0u;
        // 0x1ce3d4: 0x8fc30488  lw          $v1, 0x488($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3d0) {
            ctx->pc = 0x1CE3E0u;
            goto label_1ce3e0;
        }
    }
    ctx->pc = 0x1CE3D8u;
label_1ce3d8:
    // 0x1ce3d8: 0xc073468  jal         func_1CD1A0
label_1ce3dc:
    if (ctx->pc == 0x1CE3DCu) {
        ctx->pc = 0x1CE3E0u;
        goto label_1ce3e0;
    }
    ctx->pc = 0x1CE3D8u;
    SET_GPR_U32(ctx, 31, 0x1CE3E0u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CE3D8u, 0x1CE3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3E0u;
label_1ce3e0:
    // 0x1ce3e0: 0x8fc2048c  lw          $v0, 0x48C($fp)
    ctx->pc = 0x1ce3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
label_1ce3e4:
    // 0x1ce3e4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1ce3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_1ce3e8:
    // 0x1ce3e8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1ce3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
label_1ce3ec:
    // 0x1ce3ec: 0x8fc50490  lw          $a1, 0x490($fp)
    ctx->pc = 0x1ce3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1168)));
label_1ce3f0:
    // 0x1ce3f0: 0xc072eac  jal         func_1CBAB0
label_1ce3f4:
    if (ctx->pc == 0x1CE3F4u) {
        ctx->pc = 0x1CE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3F0u;
        // 0x1ce3f4: 0x2444e3e8  addiu       $a0, $v0, -0x1C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE3F8u;
        goto label_1ce3f8;
    }
    ctx->pc = 0x1CE3F0u;
    SET_GPR_U32(ctx, 31, 0x1CE3F8u);
    ctx->pc = 0x1CE3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE3F0u;
    // 0x1ce3f4: 0x2444e3e8  addiu       $a0, $v0, -0x1C18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBAB0u, 0x1CE3F0u, 0x1CE3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3F8u;
label_1ce3f8:
    // 0x1ce3f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ce3fc:
    if (ctx->pc == 0x1CE3FCu) {
        ctx->pc = 0x1CE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3F8u;
        // 0x1ce3fc: 0xafc20490  sw          $v0, 0x490($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE400u;
        goto label_1ce400;
    }
    ctx->pc = 0x1CE3F8u;
    {
        const bool branch_taken_0x1ce3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3F8u;
        // 0x1ce3fc: 0xafc20490  sw          $v0, 0x490($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3f8) {
            ctx->pc = 0x1CE410u;
            goto label_1ce410;
        }
    }
    ctx->pc = 0x1CE400u;
label_1ce400:
    // 0x1ce400: 0xc073468  jal         func_1CD1A0
label_1ce404:
    if (ctx->pc == 0x1CE404u) {
        ctx->pc = 0x1CE408u;
        goto label_1ce408;
    }
    ctx->pc = 0x1CE400u;
    SET_GPR_U32(ctx, 31, 0x1CE408u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CE400u, 0x1CE408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE408u;
label_1ce408:
    // 0x1ce408: 0x800008  jr          $a0
label_1ce40c:
    if (ctx->pc == 0x1CE40Cu) {
        ctx->pc = 0x1CE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE408u;
        // 0x1ce40c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE410u;
        goto label_1ce410;
    }
    ctx->pc = 0x1CE408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x1CE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE408u;
        // 0x1ce40c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE408u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CE410u;
label_1ce410:
    // 0x1ce410: 0x8fc30490  lw          $v1, 0x490($fp)
    ctx->pc = 0x1ce410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1168)));
label_1ce414:
    // 0x1ce414: 0x27c205a0  addiu       $v0, $fp, 0x5A0
    ctx->pc = 0x1ce414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1440));
label_1ce418:
    // 0x1ce418: 0x27c70480  addiu       $a3, $fp, 0x480
    ctx->pc = 0x1ce418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1152));
label_1ce41c:
    // 0x1ce41c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ce41cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ce420:
    // 0x1ce420: 0x8fc50530  lw          $a1, 0x530($fp)
    ctx->pc = 0x1ce420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1328)));
label_1ce424:
    // 0x1ce424: 0x8fc4048c  lw          $a0, 0x48C($fp)
    ctx->pc = 0x1ce424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
label_1ce428:
    // 0x1ce428: 0x8fc60490  lw          $a2, 0x490($fp)
    ctx->pc = 0x1ce428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1168)));
label_1ce42c:
    // 0x1ce42c: 0xc07379c  jal         func_1CDE70
label_1ce430:
    if (ctx->pc == 0x1CE430u) {
        ctx->pc = 0x1CE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE42Cu;
        // 0x1ce430: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE434u;
        goto label_1ce434;
    }
    ctx->pc = 0x1CE42Cu;
    SET_GPR_U32(ctx, 31, 0x1CE434u);
    ctx->pc = 0x1CE430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE42Cu;
    // 0x1ce430: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDE70u, 0x1CE42Cu, 0x1CE434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE434u;
label_1ce434:
    // 0x1ce434: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1ce434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
label_1ce438:
    // 0x1ce438: 0x24a5e408  addiu       $a1, $a1, -0x1BF8
    ctx->pc = 0x1ce438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960136));
label_1ce43c:
    // 0x1ce43c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ce440:
    // 0x1ce440: 0x8fc30480  lw          $v1, 0x480($fp)
    ctx->pc = 0x1ce440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1152)));
label_1ce444:
    // 0x1ce444: 0x8fc2048c  lw          $v0, 0x48C($fp)
    ctx->pc = 0x1ce444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1164)));
label_1ce448:
    // 0x1ce448: 0xafc50530  sw          $a1, 0x530($fp)
    ctx->pc = 0x1ce448u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1328), GPR_U32(ctx, 5));
label_1ce44c:
    // 0x1ce44c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x1ce44cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ce450:
    // 0x1ce450: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x1ce450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_1ce454:
    // 0x1ce454: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x1ce454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_1ce458:
    // 0x1ce458: 0x7bb204c0  lq          $s2, 0x4C0($sp)
    ctx->pc = 0x1ce458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_1ce45c:
    // 0x1ce45c: 0x7bb304d0  lq          $s3, 0x4D0($sp)
    ctx->pc = 0x1ce45cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_1ce460:
    // 0x1ce460: 0x7bb404e0  lq          $s4, 0x4E0($sp)
    ctx->pc = 0x1ce460u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_1ce464:
    // 0x1ce464: 0x7bb504f0  lq          $s5, 0x4F0($sp)
    ctx->pc = 0x1ce464u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_1ce468:
    // 0x1ce468: 0x7bb60500  lq          $s6, 0x500($sp)
    ctx->pc = 0x1ce468u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_1ce46c:
    // 0x1ce46c: 0x7bb70510  lq          $s7, 0x510($sp)
    ctx->pc = 0x1ce46cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_1ce470:
    // 0x1ce470: 0x7bbe0520  lq          $fp, 0x520($sp)
    ctx->pc = 0x1ce470u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_1ce474:
    // 0x1ce474: 0xdfbf0530  ld          $ra, 0x530($sp)
    ctx->pc = 0x1ce474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
label_1ce478:
    // 0x1ce478: 0xc7bf0590  lwc1        $f31, 0x590($sp)
    ctx->pc = 0x1ce478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_1ce47c:
    // 0x1ce47c: 0xc7be0588  lwc1        $f30, 0x588($sp)
    ctx->pc = 0x1ce47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_1ce480:
    // 0x1ce480: 0xc7bd0580  lwc1        $f29, 0x580($sp)
    ctx->pc = 0x1ce480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_1ce484:
    // 0x1ce484: 0xc7bc0578  lwc1        $f28, 0x578($sp)
    ctx->pc = 0x1ce484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_1ce488:
    // 0x1ce488: 0xc7bb0570  lwc1        $f27, 0x570($sp)
    ctx->pc = 0x1ce488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_1ce48c:
    // 0x1ce48c: 0xc7ba0568  lwc1        $f26, 0x568($sp)
    ctx->pc = 0x1ce48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_1ce490:
    // 0x1ce490: 0xc7b90560  lwc1        $f25, 0x560($sp)
    ctx->pc = 0x1ce490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1ce494:
    // 0x1ce494: 0xc7b80558  lwc1        $f24, 0x558($sp)
    ctx->pc = 0x1ce494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1ce498:
    // 0x1ce498: 0xc7b70550  lwc1        $f23, 0x550($sp)
    ctx->pc = 0x1ce498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1ce49c:
    // 0x1ce49c: 0xc7b60548  lwc1        $f22, 0x548($sp)
    ctx->pc = 0x1ce49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1ce4a0:
    // 0x1ce4a0: 0xc7b50540  lwc1        $f21, 0x540($sp)
    ctx->pc = 0x1ce4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ce4a4:
    // 0x1ce4a4: 0xc7b40538  lwc1        $f20, 0x538($sp)
    ctx->pc = 0x1ce4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ce4a8:
    // 0x1ce4a8: 0x3e00008  jr          $ra
label_1ce4ac:
    if (ctx->pc == 0x1CE4ACu) {
        ctx->pc = 0x1CE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4A8u;
        // 0x1ce4ac: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE4B0u;
        goto label_fallthrough_0x1ce4a8;
    }
    ctx->pc = 0x1CE4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4A8u;
        // 0x1ce4ac: 0x27bd05a0  addiu       $sp, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ce4a8:
    ctx->pc = 0x1CE4B0u;
}
