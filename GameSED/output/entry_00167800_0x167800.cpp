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

// Function: entry_00167800
// Address: 0x167800 - 0x16794c
void entry_00167800_0x167800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167800_0x167800");
#endif

    switch (ctx->pc) {
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

    ctx->pc = 0x167800u;

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
    ctx->pc = 0x16794cu;
}
