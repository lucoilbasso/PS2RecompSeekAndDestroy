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

// Function: Cmd_WORLD_VIEW_Entry__FP15BsSCDEntControl
// Address: 0x10d048 - 0x10d258
void Cmd_WORLD_VIEW_Entry__FP15BsSCDEntControl_0x10d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_WORLD_VIEW_Entry__FP15BsSCDEntControl_0x10d048");
#endif

    switch (ctx->pc) {
        case 0x10d080u: goto label_10d080;
        case 0x10d0b8u: goto label_10d0b8;
        case 0x10d0d0u: goto label_10d0d0;
        case 0x10d0f0u: goto label_10d0f0;
        case 0x10d1e0u: goto label_10d1e0;
        case 0x10d1f0u: goto label_10d1f0;
        case 0x10d208u: goto label_10d208;
        case 0x10d240u: goto label_10d240;
        default: break;
    }

    ctx->pc = 0x10d048u;

    // 0x10d048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d04c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d050: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10d050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10d054: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x10d054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x10d058: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d05c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10d05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10d060: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10d060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d064: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x10d064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x10d068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10d068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d06c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10d070: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x10d070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10d074: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x10d074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d078: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D078u;
    SET_GPR_U32(ctx, 31, 0x10D080u);
    ctx->pc = 0x10D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D078u;
    // 0x10d07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D078u, 0x10D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D080u;
label_10d080:
    // 0x10d080: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10d080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d084: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x10d084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10d088: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x10d088u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d08c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D08Cu;
    {
        const bool branch_taken_0x10d08c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D08Cu;
        // 0x10d090: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d08c) {
            ctx->pc = 0x10D0A0u;
            goto label_10d0a0;
        }
    }
    ctx->pc = 0x10D094u;
    // 0x10d094: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10D094u;
    {
        const bool branch_taken_0x10d094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D094u;
        // 0x10d098: 0x8c720164  lw          $s2, 0x164($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d094) {
            ctx->pc = 0x10D0D0u;
            goto label_10d0d0;
        }
    }
    ctx->pc = 0x10D09Cu;
    // 0x10d09c: 0x0  nop
    ctx->pc = 0x10d09cu;
    // NOP
label_10d0a0:
    // 0x10d0a0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D0A0u;
    {
        const bool branch_taken_0x10d0a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d0a0) {
            ctx->pc = 0x10D0B0u;
            goto label_10d0b0;
        }
    }
    ctx->pc = 0x10D0A8u;
    // 0x10d0a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10D0A8u;
    {
        const bool branch_taken_0x10d0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D0A8u;
        // 0x10d0ac: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0a8) {
            ctx->pc = 0x10D0D0u;
            goto label_10d0d0;
        }
    }
    ctx->pc = 0x10D0B0u;
label_10d0b0:
    // 0x10d0b0: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10D0B0u;
    SET_GPR_U32(ctx, 31, 0x10D0B8u);
    ctx->pc = 0x10D0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0B0u;
    // 0x10d0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10D0B0u, 0x10D0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0B8u;
label_10d0b8:
    // 0x10d0b8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10d0bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0c0: 0x24a53c70  addiu       $a1, $a1, 0x3C70
    ctx->pc = 0x10d0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15472));
    // 0x10d0c4: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10d0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10d0c8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10D0C8u;
    SET_GPR_U32(ctx, 31, 0x10D0D0u);
    ctx->pc = 0x10D0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0C8u;
    // 0x10d0cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10D0C8u, 0x10D0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0D0u;
label_10d0d0:
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
            goto label_10d1f8;
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
            goto label_10d244;
        }
    }
    ctx->pc = 0x10D1F8u;
label_10d1f8:
    // 0x10d1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d1fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10d1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d200: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x10D200u;
    SET_GPR_U32(ctx, 31, 0x10D208u);
    ctx->pc = 0x10D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D200u;
    // 0x10d204: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x10D200u, 0x10D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D208u;
label_10d208:
    // 0x10d208: 0xc7838054  lwc1        $f3, -0x7FAC($gp)
    ctx->pc = 0x10d208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10d20c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x10d20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10d210: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x10d210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x10d214: 0xc7818058  lwc1        $f1, -0x7FA8($gp)
    ctx->pc = 0x10d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d218: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x10d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x10d21c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x10d21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x10d220: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x10d220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10d224: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x10d224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d22c: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x10d22cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x10d230: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x10d230u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x10d234: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x10d234u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x10d238: 0xc061cf2  jal         func_1873C8
    ctx->pc = 0x10D238u;
    SET_GPR_U32(ctx, 31, 0x10D240u);
    ctx->pc = 0x10D23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D238u;
    // 0x10d23c: 0x460d1340  add.s       $f13, $f2, $f13 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1873C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1873C8u, 0x10D238u, 0x10D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D240u;
label_10d240:
    // 0x10d240: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10d240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10d244:
    // 0x10d244: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x10d244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10d248: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10d248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d24c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x10d24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10d250: 0x3e00008  jr          $ra
    ctx->pc = 0x10D250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D250u;
        // 0x10d254: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D258u;
}
