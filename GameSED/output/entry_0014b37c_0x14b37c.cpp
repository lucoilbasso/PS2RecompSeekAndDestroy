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

// Function: entry_0014b37c
// Address: 0x14b37c - 0x14b4e8
void entry_0014b37c_0x14b37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b37c_0x14b37c");
#endif

    switch (ctx->pc) {
        case 0x14b384u: goto label_14b384;
        case 0x14b38cu: goto label_14b38c;
        case 0x14b3a8u: goto label_14b3a8;
        case 0x14b3b8u: goto label_14b3b8;
        case 0x14b3f4u: goto label_14b3f4;
        case 0x14b4e4u: goto label_14b4e4;
        default: break;
    }

    ctx->pc = 0x14b37cu;

label_14b37c:
    // 0x14b37c: 0xc0682b2  jal         func_1A0AC8
label_14b380:
    if (ctx->pc == 0x14B380u) {
        ctx->pc = 0x14B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B37Cu;
        // 0x14b380: 0x24040186  addiu       $a0, $zero, 0x186 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B384u;
        goto label_14b384;
    }
    ctx->pc = 0x14B37Cu;
    SET_GPR_U32(ctx, 31, 0x14B384u);
    ctx->pc = 0x14B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B37Cu;
    // 0x14b380: 0x24040186  addiu       $a0, $zero, 0x186 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x14B37Cu, 0x14B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B384u;
label_14b384:
    // 0x14b384: 0xc0682b6  jal         func_1A0AD8
label_14b388:
    if (ctx->pc == 0x14B388u) {
        ctx->pc = 0x14B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B384u;
        // 0x14b388: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B38Cu;
        goto label_14b38c;
    }
    ctx->pc = 0x14B384u;
    SET_GPR_U32(ctx, 31, 0x14B38Cu);
    ctx->pc = 0x14B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B384u;
    // 0x14b388: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x14B384u, 0x14B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B38Cu;
label_14b38c:
    // 0x14b38c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14b38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14b390:
    // 0x14b390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14b394:
    // 0x14b394: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14b394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_14b398:
    // 0x14b398: 0x2442f460  addiu       $v0, $v0, -0xBA0
    ctx->pc = 0x14b398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964320));
label_14b39c:
    // 0x14b39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b3a0:
    // 0x14b3a0: 0xc05ac70  jal         func_16B1C0
label_14b3a4:
    if (ctx->pc == 0x14B3A4u) {
        ctx->pc = 0x14B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3A0u;
        // 0x14b3a4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B3A8u;
        goto label_14b3a8;
    }
    ctx->pc = 0x14B3A0u;
    SET_GPR_U32(ctx, 31, 0x14B3A8u);
    ctx->pc = 0x14B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3A0u;
    // 0x14b3a4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B1C0u, 0x14B3A0u, 0x14B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3A8u;
label_14b3a8:
    // 0x14b3a8: 0xae1201e0  sw          $s2, 0x1E0($s0)
    ctx->pc = 0x14b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 18));
label_14b3ac:
    // 0x14b3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b3b0:
    // 0x14b3b0: 0xc06825c  jal         func_1A0970
label_14b3b4:
    if (ctx->pc == 0x14B3B4u) {
        ctx->pc = 0x14B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3B0u;
        // 0x14b3b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B3B8u;
        goto label_14b3b8;
    }
    ctx->pc = 0x14B3B0u;
    SET_GPR_U32(ctx, 31, 0x14B3B8u);
    ctx->pc = 0x14B3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B3B0u;
    // 0x14b3b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x14B3B0u, 0x14B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B3B8u;
label_14b3b8:
    // 0x14b3b8: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x14b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_14b3bc:
    // 0x14b3bc: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x14b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_14b3c0:
    // 0x14b3c0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14b3c4:
    // 0x14b3c4: 0x8c85b830  lw          $a1, -0x47D0($a0)
    ctx->pc = 0x14b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948912)));
label_14b3c8:
    // 0x14b3c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x14b3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_14b3cc:
    // 0x14b3cc: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x14b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_14b3d0:
    // 0x14b3d0: 0xae0201e8  sw          $v0, 0x1E8($s0)
    ctx->pc = 0x14b3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 2));
label_14b3d4:
    // 0x14b3d4: 0x8ca70044  lw          $a3, 0x44($a1)
    ctx->pc = 0x14b3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_14b3d8:
    // 0x14b3d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b3dc:
    // 0x14b3dc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x14b3dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_14b3e0:
    // 0x14b3e0: 0xae0701e4  sw          $a3, 0x1E4($s0)
    ctx->pc = 0x14b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 7));
label_14b3e4:
    // 0x14b3e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14b3e8:
    // 0x14b3e8: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x14b3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_14b3ec:
    // 0x14b3ec: 0x40f809  jalr        $v0
label_14b3f0:
    if (ctx->pc == 0x14B3F0u) {
        ctx->pc = 0x14B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3ECu;
        // 0x14b3f0: 0x8ce50124  lw          $a1, 0x124($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B3F4u;
        goto label_14b3f4;
    }
    ctx->pc = 0x14B3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14B3F4u);
        ctx->pc = 0x14B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B3ECu;
        // 0x14b3f0: 0x8ce50124  lw          $a1, 0x124($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B3ECu, 0x14B3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14B3F4u;
label_14b3f4:
    // 0x14b3f4: 0x260701f0  addiu       $a3, $s0, 0x1F0
    ctx->pc = 0x14b3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_14b3f8:
    // 0x14b3f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14b3f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14b3fc:
    // 0x14b3fc: 0x4402b800  mfc1        $v0, $f23
    ctx->pc = 0x14b3fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14b400:
    // 0x14b400: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14b400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14b404:
    // 0x14b404: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x14b404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14b408:
    // 0x14b408: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14b408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14b40c:
    // 0x14b40c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14b40cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14b410:
    // 0x14b410: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14b410u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14b414:
    // 0x14b414: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14b414u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14b418:
    // 0x14b418: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14b418u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_14b41c:
    // 0x14b41c: 0x26060200  addiu       $a2, $s0, 0x200
    ctx->pc = 0x14b41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_14b420:
    // 0x14b420: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x14b420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14b424:
    // 0x14b424: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14b424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14b428:
    // 0x14b428: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x14b428u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14b42c:
    // 0x14b42c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14b430:
    // 0x14b430: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14b430u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14b434:
    // 0x14b434: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14b434u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14b438:
    // 0x14b438: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14b438u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14b43c:
    // 0x14b43c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14b43cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_14b440:
    // 0x14b440: 0x26070210  addiu       $a3, $s0, 0x210
    ctx->pc = 0x14b440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
label_14b444:
    // 0x14b444: 0x4402b800  mfc1        $v0, $f23
    ctx->pc = 0x14b444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14b448:
    // 0x14b448: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14b448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14b44c:
    // 0x14b44c: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x14b44cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14b450:
    // 0x14b450: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14b450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14b454:
    // 0x14b454: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14b454u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14b458:
    // 0x14b458: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14b458u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14b45c:
    // 0x14b45c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14b45cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14b460:
    // 0x14b460: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14b460u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_14b464:
    // 0x14b464: 0x26060220  addiu       $a2, $s0, 0x220
    ctx->pc = 0x14b464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_14b468:
    // 0x14b468: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x14b468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14b46c:
    // 0x14b46c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14b46cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14b470:
    // 0x14b470: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x14b470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14b474:
    // 0x14b474: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14b474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14b478:
    // 0x14b478: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14b478u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14b47c:
    // 0x14b47c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14b47cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14b480:
    // 0x14b480: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14b480u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14b484:
    // 0x14b484: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14b484u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_14b488:
    // 0x14b488: 0x4616b880  add.s       $f2, $f23, $f22
    ctx->pc = 0x14b488u;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_14b48c:
    // 0x14b48c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14b48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_14b490:
    // 0x14b490: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14b490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14b494:
    // 0x14b494: 0x4614a800  add.s       $f0, $f21, $f20
    ctx->pc = 0x14b494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_14b498:
    // 0x14b498: 0x26060230  addiu       $a2, $s0, 0x230
    ctx->pc = 0x14b498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_14b49c:
    // 0x14b49c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14b49cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_14b4a0:
    // 0x14b4a0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x14b4a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_14b4a4:
    // 0x14b4a4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x14b4a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_14b4a8:
    // 0x14b4a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14b4a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_14b4ac:
    // 0x14b4ac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14b4acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14b4b0:
    // 0x14b4b0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14b4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_14b4b4:
    // 0x14b4b4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14b4b4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_14b4b8:
    // 0x14b4b8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14b4b8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_14b4bc:
    // 0x14b4bc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14b4bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_14b4c0:
    // 0x14b4c0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14b4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_14b4c4:
    // 0x14b4c4: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x14b4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_14b4c8:
    // 0x14b4c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b4cc:
    // 0x14b4cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b4d0:
    // 0x14b4d0: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x14b4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_14b4d4:
    // 0x14b4d4: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x14b4d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_14b4d8:
    // 0x14b4d8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x14b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_14b4dc:
    // 0x14b4dc: 0x40f809  jalr        $v0
label_14b4e0:
    if (ctx->pc == 0x14B4E0u) {
        ctx->pc = 0x14B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4DCu;
        // 0x14b4e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B4E4u;
        goto label_14b4e4;
    }
    ctx->pc = 0x14B4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14B4E4u);
        ctx->pc = 0x14B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4DCu;
        // 0x14b4e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B4DCu, 0x14B4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14B4E4u;
label_14b4e4:
    // 0x14b4e4: 0xae5001c4  sw          $s0, 0x1C4($s2)
    ctx->pc = 0x14b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 16));
    ctx->pc = 0x14b4e8u;
}
