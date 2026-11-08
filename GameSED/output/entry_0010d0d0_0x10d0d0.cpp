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

// Function: entry_0010d0d0
// Address: 0x10d0d0 - 0x10d1f8
void entry_0010d0d0_0x10d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d0d0_0x10d0d0");
#endif

    switch (ctx->pc) {
        case 0x10d0f0u: goto label_10d0f0;
        case 0x10d1e0u: goto label_10d1e0;
        case 0x10d1f0u: goto label_10d1f0;
        default: break;
    }

    ctx->pc = 0x10d0d0u;

    // 0x10d0d0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10d0d4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x10d0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x10d0d8: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x10D0D8u;
    {
        const bool branch_taken_0x10d0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D0D8u;
        // 0x10d0dc: 0x26500190  addiu       $s0, $s2, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0d8) {
            ctx->pc = 0x10D1F8u;
            return;
        }
    }
    ctx->pc = 0x10D0E0u;
    // 0x10d0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10d0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0e8: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x10D0E8u;
    SET_GPR_U32(ctx, 31, 0x10D0F0u);
    ctx->pc = 0x10D0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0E8u;
    // 0x10d0ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x10D0E8u, 0x10D0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0F0u;
label_10d0f0:
    // 0x10d0f0: 0xc786804c  lwc1        $f6, -0x7FB4($gp)
    ctx->pc = 0x10d0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x10d0f4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x10d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d0f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10d0f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10d0fc: 0xc7858050  lwc1        $f5, -0x7FB0($gp)
    ctx->pc = 0x10d0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x10d100: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x10d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d104: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10d104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10d108: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10d108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10d10c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x10d10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10d110: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x10d110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10d114: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x10d114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x10d118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10d118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d11c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x10d11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10d120: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x10d120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x10d124: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x10d124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x10d128: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x10d128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x10d12c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x10d12cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x10d130: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x10d130u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x10d134: 0x46040182  mul.s       $f6, $f0, $f4
    ctx->pc = 0x10d134u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x10d138: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x10d138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x10d13c: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x10d13cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x10d140: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x10d140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10d144: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x10d144u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x10d148: 0x46000164  .word       0x46000164                   # cvt.w.s     $f5, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10d148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x10d14c: 0x44072800  mfc1        $a3, $f5
    ctx->pc = 0x10d14cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x10d150: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x10d150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x10d154: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10d154u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10d158: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x10d158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x10d15c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x10d15cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x10d160: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x10d160u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x10d164: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x10d164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x10d168: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x10d168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x10d16c: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10d16cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10d170: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x10d170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10d174: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10d174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10d178: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x10d178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10d17c: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x10d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x10d180: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x10d180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x10d184: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x10d184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x10d188: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x10d188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x10d18c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x10d18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x10d190: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x10d190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x10d194: 0x706218c8  pmaxw       $v1, $v1, $v0
    ctx->pc = 0x10d194u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10d198: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x10d198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x10d19c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x10d19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x10d1a0: 0x708220c8  pmaxw       $a0, $a0, $v0
    ctx->pc = 0x10d1a0u;
    SET_GPR_VEC(ctx, 4, PS2_PMAXW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10d1a4: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x10d1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x10d1a8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x10d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x10d1ac: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x10d1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x10d1b0: 0x70e238e8  pminw       $a3, $a3, $v0
    ctx->pc = 0x10d1b0u;
    SET_GPR_VEC(ctx, 7, PS2_PMINW(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x10d1b4: 0x73800  sll         $a3, $a3, 0
    ctx->pc = 0x10d1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x10d1b8: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x10d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x10d1bc: 0x70c230e8  pminw       $a2, $a2, $v0
    ctx->pc = 0x10d1bcu;
    SET_GPR_VEC(ctx, 6, PS2_PMINW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x10d1c0: 0x63000  sll         $a2, $a2, 0
    ctx->pc = 0x10d1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
    // 0x10d1c4: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x10d1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x10d1c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1cc: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x10d1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x10d1d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x10d1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10d1d4: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x10d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x10d1d8: 0xc061cea  jal         func_1873A8
    ctx->pc = 0x10D1D8u;
    SET_GPR_U32(ctx, 31, 0x10D1E0u);
    ctx->pc = 0x10D1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1D8u;
    // 0x10d1dc: 0xafa6001c  sw          $a2, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1873A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1873A8u, 0x10D1D8u, 0x10D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1E0u;
label_10d1e0:
    // 0x10d1e0: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x10d1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x10d1e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1e8: 0xc061cf2  jal         func_1873C8
    ctx->pc = 0x10D1E8u;
    SET_GPR_U32(ctx, 31, 0x10D1F0u);
    ctx->pc = 0x10D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D1E8u;
    // 0x10d1ec: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1873C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1873C8u, 0x10D1E8u, 0x10D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D1F0u;
label_10d1f0:
    // 0x10d1f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10D1F0u;
    {
        const bool branch_taken_0x10d1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D1F0u;
        // 0x10d1f4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d1f0) {
            ctx->pc = 0x10D244u;
            return;
        }
    }
    ctx->pc = 0x10D1F8u;
}
