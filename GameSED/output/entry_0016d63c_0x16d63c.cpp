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

// Function: entry_0016d63c
// Address: 0x16d63c - 0x16d734
void entry_0016d63c_0x16d63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d63c_0x16d63c");
#endif

    switch (ctx->pc) {
        case 0x16d68cu: goto label_16d68c;
        case 0x16d694u: goto label_16d694;
        case 0x16d6acu: goto label_16d6ac;
        case 0x16d6e0u: goto label_16d6e0;
        case 0x16d6e8u: goto label_16d6e8;
        case 0x16d708u: goto label_16d708;
        case 0x16d720u: goto label_16d720;
        default: break;
    }

    ctx->pc = 0x16d63cu;

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
            return;
        }
    }
    ctx->pc = 0x16D72Cu;
    // 0x16d72c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d730: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x16d730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
    ctx->pc = 0x16d734u;
}
