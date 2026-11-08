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

// Function: HoberEffectSet__10ApcHetoleg
// Address: 0x16d630 - 0x16d8f0
void HoberEffectSet__10ApcHetoleg_0x16d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HoberEffectSet__10ApcHetoleg_0x16d630");
#endif

    switch (ctx->pc) {
        case 0x16d68cu: goto label_16d68c;
        case 0x16d694u: goto label_16d694;
        case 0x16d6acu: goto label_16d6ac;
        case 0x16d6e0u: goto label_16d6e0;
        case 0x16d6e8u: goto label_16d6e8;
        case 0x16d708u: goto label_16d708;
        case 0x16d720u: goto label_16d720;
        case 0x16d76cu: goto label_16d76c;
        case 0x16d778u: goto label_16d778;
        case 0x16d794u: goto label_16d794;
        case 0x16d7acu: goto label_16d7ac;
        case 0x16d7f0u: goto label_16d7f0;
        case 0x16d7f8u: goto label_16d7f8;
        case 0x16d814u: goto label_16d814;
        case 0x16d82cu: goto label_16d82c;
        case 0x16d848u: goto label_16d848;
        case 0x16d870u: goto label_16d870;
        case 0x16d888u: goto label_16d888;
        case 0x16d8b4u: goto label_16d8b4;
        default: break;
    }

    ctx->pc = 0x16d630u;

    // 0x16d630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16d630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16d634: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16d634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16d638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16d638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d63c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x16d63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16d640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d644: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x16d644u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x16d648: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x16d648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x16d64c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x16d64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16d650: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x16d650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x16d654: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16d658: 0xe7b60058  swc1        $f22, 0x58($sp)
    ctx->pc = 0x16d658u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x16d65c: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x16d65cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x16d660: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16d660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16d664: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16d664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16d668: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16d668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16d66c: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x16d66cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d670: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16d670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16d674: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16d674u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16d678: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16d678u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16d67c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16d67cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16d680: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16d680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16d684: 0xc04c99a  jal         func_132668
    ctx->pc = 0x16D684u;
    SET_GPR_U32(ctx, 31, 0x16D68Cu);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x16D684u, 0x16D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D68Cu;
label_16d68c:
    // 0x16d68c: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x16D68Cu;
    SET_GPR_U32(ctx, 31, 0x16D694u);
    ctx->pc = 0x16D690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D68Cu;
    // 0x16d690: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x16D68Cu, 0x16D694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D694u;
label_16d694:
    // 0x16d694: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x16d694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x16d698: 0x240400b2  addiu       $a0, $zero, 0xB2
    ctx->pc = 0x16d698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x16d69c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d6a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16d6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d6a4: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x16D6A4u;
    SET_GPR_U32(ctx, 31, 0x16D6ACu);
    ctx->pc = 0x16D6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6A4u;
    // 0x16d6a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x16D6A4u, 0x16D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6ACu;
label_16d6ac:
    // 0x16d6ac: 0xc7818498  lwc1        $f1, -0x7B68($gp)
    ctx->pc = 0x16d6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d6b0: 0xae0202c8  sw          $v0, 0x2C8($s0)
    ctx->pc = 0x16d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
    // 0x16d6b4: 0xc780849c  lwc1        $f0, -0x7B64($gp)
    ctx->pc = 0x16d6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d6b8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16d6b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16d6bc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16d6bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16d6c0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16d6c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d6c4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16d6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16d6c8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16d6c8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16d6cc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16d6ccu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16d6d0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16d6d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16d6d4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16d6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16d6d8: 0xc04c99a  jal         func_132668
    ctx->pc = 0x16D6D8u;
    SET_GPR_U32(ctx, 31, 0x16D6E0u);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x16D6D8u, 0x16D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6E0u;
label_16d6e0:
    // 0x16d6e0: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x16D6E0u;
    SET_GPR_U32(ctx, 31, 0x16D6E8u);
    ctx->pc = 0x16D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6E0u;
    // 0x16d6e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x16D6E0u, 0x16D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6E8u;
label_16d6e8:
    // 0x16d6e8: 0x2402016c  addiu       $v0, $zero, 0x16C
    ctx->pc = 0x16d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
    // 0x16d6ec: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x16d6ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16d6f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d6f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x16d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x16d6f8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x16d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x16d6fc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x16d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x16d700: 0xc04c9e8  jal         func_1327A0
    ctx->pc = 0x16D700u;
    SET_GPR_U32(ctx, 31, 0x16D708u);
    ctx->pc = 0x16D704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D700u;
    // 0x16d704: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327A0u, 0x16D700u, 0x16D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D708u;
label_16d708:
    // 0x16d708: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x16d708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x16d70c: 0x240400b3  addiu       $a0, $zero, 0xB3
    ctx->pc = 0x16d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x16d710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d714: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d718: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x16D718u;
    SET_GPR_U32(ctx, 31, 0x16D720u);
    ctx->pc = 0x16D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D718u;
    // 0x16d71c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x16D718u, 0x16D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D720u;
label_16d720:
    // 0x16d720: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16d720u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d724: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D724u;
    {
        const bool branch_taken_0x16d724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D724u;
        // 0x16d728: 0xae0302cc  sw          $v1, 0x2CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d724) {
            ctx->pc = 0x16D734u;
            goto label_16d734;
        }
    }
    ctx->pc = 0x16D72Cu;
    // 0x16d72c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d730: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x16d730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
label_16d734:
    // 0x16d734: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x16d734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x16d738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16d738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d73c: 0xc79684a0  lwc1        $f22, -0x7B60($gp)
    ctx->pc = 0x16d73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16d740: 0xc79584a4  lwc1        $f21, -0x7B5C($gp)
    ctx->pc = 0x16d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16d744: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16d744u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16d748: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x16d748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16d74c: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x16d74cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d750: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16d750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16d754: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16d754u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16d758: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16d758u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16d75c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16d75cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16d760: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16d760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16d764: 0xc04c99a  jal         func_132668
    ctx->pc = 0x16D764u;
    SET_GPR_U32(ctx, 31, 0x16D76Cu);
    ctx->pc = 0x16D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D764u;
    // 0x16d768: 0x2413071c  addiu       $s3, $zero, 0x71C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x16D764u, 0x16D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D76Cu;
label_16d76c:
    // 0x16d76c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d770: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x16D770u;
    SET_GPR_U32(ctx, 31, 0x16D778u);
    ctx->pc = 0x16D774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D770u;
    // 0x16d774: 0x24124000  addiu       $s2, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x16D770u, 0x16D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D778u;
label_16d778:
    // 0x16d778: 0x2402f556  addiu       $v0, $zero, -0xAAA
    ctx->pc = 0x16d778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964566));
    // 0x16d77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d780: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x16d780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x16d784: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x16d784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x16d788: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x16d788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    // 0x16d78c: 0xc04c9e8  jal         func_1327A0
    ctx->pc = 0x16D78Cu;
    SET_GPR_U32(ctx, 31, 0x16D794u);
    ctx->pc = 0x16D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D78Cu;
    // 0x16d790: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327A0u, 0x16D78Cu, 0x16D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D794u;
label_16d794:
    // 0x16d794: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x16d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x16d798: 0x240400b3  addiu       $a0, $zero, 0xB3
    ctx->pc = 0x16d798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x16d79c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d79cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d7a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7a4: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x16D7A4u;
    SET_GPR_U32(ctx, 31, 0x16D7ACu);
    ctx->pc = 0x16D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7A4u;
    // 0x16d7a8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x16D7A4u, 0x16D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7ACu;
label_16d7ac:
    // 0x16d7ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16d7acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D7B0u;
    {
        const bool branch_taken_0x16d7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7B0u;
        // 0x16d7b4: 0xae0302d0  sw          $v1, 0x2D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7b0) {
            ctx->pc = 0x16D7C0u;
            goto label_16d7c0;
        }
    }
    ctx->pc = 0x16D7B8u;
    // 0x16d7b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d7bc: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x16d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
label_16d7c0:
    // 0x16d7c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x16d7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x16d7c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16d7c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d7c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16d7c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16d7cc: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x16d7ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16d7d0: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x16d7d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d7d4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16d7d8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16d7d8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16d7dc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16d7dcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16d7e0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16d7e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16d7e4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16d7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16d7e8: 0xc04c99a  jal         func_132668
    ctx->pc = 0x16D7E8u;
    SET_GPR_U32(ctx, 31, 0x16D7F0u);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x16D7E8u, 0x16D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7F0u;
label_16d7f0:
    // 0x16d7f0: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x16D7F0u;
    SET_GPR_U32(ctx, 31, 0x16D7F8u);
    ctx->pc = 0x16D7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7F0u;
    // 0x16d7f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x16D7F0u, 0x16D7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7F8u;
label_16d7f8:
    // 0x16d7f8: 0x24020aaa  addiu       $v0, $zero, 0xAAA
    ctx->pc = 0x16d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2730));
    // 0x16d7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d800: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x16d800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x16d804: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x16d804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x16d808: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x16d808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    // 0x16d80c: 0xc04c9e8  jal         func_1327A0
    ctx->pc = 0x16D80Cu;
    SET_GPR_U32(ctx, 31, 0x16D814u);
    ctx->pc = 0x16D810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D80Cu;
    // 0x16d810: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1327A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1327A0u, 0x16D80Cu, 0x16D814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D814u;
label_16d814:
    // 0x16d814: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x16d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x16d818: 0x240400b3  addiu       $a0, $zero, 0xB3
    ctx->pc = 0x16d818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x16d81c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d824: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x16D824u;
    SET_GPR_U32(ctx, 31, 0x16D82Cu);
    ctx->pc = 0x16D828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D824u;
    // 0x16d828: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x16D824u, 0x16D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D82Cu;
label_16d82c:
    // 0x16d82c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16d82cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d830: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D830u;
    {
        const bool branch_taken_0x16d830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D830u;
        // 0x16d834: 0xae0302d4  sw          $v1, 0x2D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d830) {
            ctx->pc = 0x16D840u;
            goto label_16d840;
        }
    }
    ctx->pc = 0x16D838u;
    // 0x16d838: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d83c: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x16d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
label_16d840:
    // 0x16d840: 0xc04c99a  jal         func_132668
    ctx->pc = 0x16D840u;
    SET_GPR_U32(ctx, 31, 0x16D848u);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x16D840u, 0x16D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D848u;
label_16d848:
    // 0x16d848: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16d848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16d84c: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x16d84cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16d850: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x16d850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d854: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16d854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16d858: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16d858u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16d85c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16d85cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x16d860: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16d860u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16d864: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16d864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16d868: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x16D868u;
    SET_GPR_U32(ctx, 31, 0x16D870u);
    ctx->pc = 0x16D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D868u;
    // 0x16d86c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x16D868u, 0x16D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D870u;
label_16d870:
    // 0x16d870: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x16d870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x16d874: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x16d874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x16d878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d87c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16d87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d880: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x16D880u;
    SET_GPR_U32(ctx, 31, 0x16D888u);
    ctx->pc = 0x16D884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D880u;
    // 0x16d884: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x16D880u, 0x16D888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D888u;
label_16d888:
    // 0x16d888: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16d888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d88c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D88Cu;
    {
        const bool branch_taken_0x16d88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D88Cu;
        // 0x16d890: 0xae0302d8  sw          $v1, 0x2D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d88c) {
            ctx->pc = 0x16D89Cu;
            goto label_16d89c;
        }
    }
    ctx->pc = 0x16D894u;
    // 0x16d894: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d898: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x16d898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
label_16d89c:
    // 0x16d89c: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x16d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x16d8a0: 0x240400b1  addiu       $a0, $zero, 0xB1
    ctx->pc = 0x16d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x16d8a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8ac: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x16D8ACu;
    SET_GPR_U32(ctx, 31, 0x16D8B4u);
    ctx->pc = 0x16D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D8ACu;
    // 0x16d8b0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x16D8ACu, 0x16D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8B4u;
label_16d8b4:
    // 0x16d8b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16d8b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D8B8u;
    {
        const bool branch_taken_0x16d8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8B8u;
        // 0x16d8bc: 0xae0302dc  sw          $v1, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8b8) {
            ctx->pc = 0x16D8C8u;
            goto label_16d8c8;
        }
    }
    ctx->pc = 0x16D8C0u;
    // 0x16d8c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d8c4: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x16d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
label_16d8c8:
    // 0x16d8c8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x16d8c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d8cc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x16d8ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d8d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x16d8d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d8d4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x16d8d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d8d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16d8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d8dc: 0xc7b60058  lwc1        $f22, 0x58($sp)
    ctx->pc = 0x16d8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16d8e0: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x16d8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16d8e4: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x16d8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16d8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16D8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8E8u;
        // 0x16d8ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D8F0u;
}
