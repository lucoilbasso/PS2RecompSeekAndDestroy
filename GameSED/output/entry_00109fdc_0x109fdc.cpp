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

// Function: entry_00109fdc
// Address: 0x109fdc - 0x10a09c
void entry_00109fdc_0x109fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109fdc_0x109fdc");
#endif

    switch (ctx->pc) {
        case 0x109ff0u: goto label_109ff0;
        case 0x10a004u: goto label_10a004;
        default: break;
    }

    ctx->pc = 0x109fdcu;

    // 0x109fdc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x109fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x109fe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109fe4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x109fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x109fe8: 0xc04110c  jal         func_104430
    ctx->pc = 0x109FE8u;
    SET_GPR_U32(ctx, 31, 0x109FF0u);
    ctx->pc = 0x109FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109FE8u;
    // 0x109fec: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x109FE8u, 0x109FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109FF0u;
label_109ff0:
    // 0x109ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ff4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ff8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x109ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109ffc: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x109FFCu;
    SET_GPR_U32(ctx, 31, 0x10A004u);
    ctx->pc = 0x10A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109FFCu;
    // 0x10a000: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x109FFCu, 0x10A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A004u;
label_10a004:
    // 0x10a004: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x10a004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10a008: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x10a008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10a00c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x10a00cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x10a010: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10a010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10a014: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a018: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x10a018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x10a01c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10a01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10a020: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x10a020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x10a024: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x10a024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x10a028: 0xa4c0000e  sh          $zero, 0xE($a2)
    ctx->pc = 0x10a028u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10a02c: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x10a02cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x10a030: 0xe4c40028  swc1        $f4, 0x28($a2)
    ctx->pc = 0x10a030u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x10a034: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x10a034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10a038: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x10a038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x10a03c: 0xe4c3002c  swc1        $f3, 0x2C($a2)
    ctx->pc = 0x10a03cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
    // 0x10a040: 0xe4c10020  swc1        $f1, 0x20($a2)
    ctx->pc = 0x10a040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x10a044: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x10a044u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x10a048: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x10a048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x10a04c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x10a04cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x10a050: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x10a050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10a054: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x10a054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10a058: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x10a058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10a05c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10a060: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10a060u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10a064: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10a064u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10a068: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10a068u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10a06c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x10a06cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x10a070: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x10a070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x10a074: 0xc4c1002c  lwc1        $f1, 0x2C($a2)
    ctx->pc = 0x10a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10a078: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x10a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10a07c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10a07cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10a080: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x10a080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10a084: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x10a084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10a088: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10a088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10a08c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10a08cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10a090: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10a090u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10a094: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10a094u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10a098: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x10a098u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x10a09cu;
}
