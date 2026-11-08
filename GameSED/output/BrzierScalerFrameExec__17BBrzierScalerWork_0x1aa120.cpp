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

// Function: BrzierScalerFrameExec__17BBrzierScalerWork
// Address: 0x1aa120 - 0x1aa230
void BrzierScalerFrameExec__17BBrzierScalerWork_0x1aa120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BrzierScalerFrameExec__17BBrzierScalerWork_0x1aa120");
#endif

    switch (ctx->pc) {
        case 0x1aa168u: goto label_1aa168;
        case 0x1aa180u: goto label_1aa180;
        default: break;
    }

    ctx->pc = 0x1aa120u;

    // 0x1aa120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa128: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aa12c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa130: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aa130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aa134: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x1aa134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1aa138: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aa138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aa13c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aa13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa140: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1aa140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aa144: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1aa144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1aa148: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1aa148u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1aa14c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1AA14Cu;
    {
        const bool branch_taken_0x1aa14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA14Cu;
        // 0x1aa150: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa14c) {
            ctx->pc = 0x1AA18Cu;
            goto label_1aa18c;
        }
    }
    ctx->pc = 0x1AA154u;
    // 0x1aa154: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1aa154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1aa158: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1aa158u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa15c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1aa15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1aa160: 0xc06a80a  jal         func_1AA028
    ctx->pc = 0x1AA160u;
    SET_GPR_U32(ctx, 31, 0x1AA168u);
    ctx->pc = 0x1AA164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA160u;
    // 0x1aa164: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA028u, 0x1AA160u, 0x1AA168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA168u;
label_1aa168:
    // 0x1aa168: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA168u;
    {
        const bool branch_taken_0x1aa168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1AA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA168u;
        // 0x1aa16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa168) {
            ctx->pc = 0x1AA178u;
            goto label_1aa178;
        }
    }
    ctx->pc = 0x1AA170u;
    // 0x1aa170: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1AA170u;
    {
        const bool branch_taken_0x1aa170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA170u;
        // 0x1aa174: 0xae320040  sw          $s2, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa170) {
            ctx->pc = 0x1AA214u;
            goto label_1aa214;
        }
    }
    ctx->pc = 0x1AA178u;
label_1aa178:
    // 0x1aa178: 0xc06a894  jal         func_1AA250
    ctx->pc = 0x1AA178u;
    SET_GPR_U32(ctx, 31, 0x1AA180u);
    ctx->pc = 0x1AA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA250u, 0x1AA178u, 0x1AA180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA180u;
label_1aa180:
    // 0x1aa180: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1aa180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1aa184: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1aa184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1aa188: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aa188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1aa18c:
    // 0x1aa18c: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x1aa18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1aa190: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1aa190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1aa194: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x1aa194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1aa198: 0xc6070004  lwc1        $f7, 0x4($s0)
    ctx->pc = 0x1aa198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1aa19c: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x1aa19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x1aa1a0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1aa1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1aa1a4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1aa1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1aa1a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa1ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1aa1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aa1b0: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x1aa1b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x1aa1b4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1aa1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa1b8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1aa1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa1bc: 0x0  nop
    ctx->pc = 0x1aa1bcu;
    // NOP
    // 0x1aa1c0: 0x0  nop
    ctx->pc = 0x1aa1c0u;
    // NOP
    // 0x1aa1c4: 0x46072103  div.s       $f4, $f4, $f7
    ctx->pc = 0x1aa1c4u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[7]); }
    // 0x1aa1c8: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x1aa1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1aa1cc: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x1aa1ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1aa1d0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1aa1d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1aa1d4: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x1aa1d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1aa1d8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1aa1d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1aa1dc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1aa1dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1aa1e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1aa1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1aa1e4: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x1aa1e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1aa1e8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1aa1e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1aa1ec: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1aa1ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1aa1f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1aa1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1aa1f4: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x1aa1f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1aa1f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1aa1f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1aa1fc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1aa1fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1aa200: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1aa200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1aa204: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1aa204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1aa208: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aa208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aa20c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1aa20cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1aa210: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x1aa210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_1aa214:
    // 0x1aa214: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1aa214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1aa218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa21c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa220: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa224: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aa224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa228: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA228u;
        // 0x1aa22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA230u;
}
