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

// Function: BrzierVectorFrameExec__17BBrzierVectorWork
// Address: 0x1a99e8 - 0x1a9ba8
void BrzierVectorFrameExec__17BBrzierVectorWork_0x1a99e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BrzierVectorFrameExec__17BBrzierVectorWork_0x1a99e8");
#endif

    switch (ctx->pc) {
        case 0x1a9a30u: goto label_1a9a30;
        case 0x1a9a48u: goto label_1a9a48;
        default: break;
    }

    ctx->pc = 0x1a99e8u;

    // 0x1a99e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a99e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a99ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a99ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a99f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a99f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a99f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a99f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a99f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a99f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a99fc: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x1a99fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a9a00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a9a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a9a04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9a08: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a9a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a9a0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a9a10: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a9a10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a9a14: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A9A14u;
    {
        const bool branch_taken_0x1a9a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A14u;
        // 0x1a9a18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a14) {
            ctx->pc = 0x1A9A54u;
            goto label_1a9a54;
        }
    }
    ctx->pc = 0x1A9A1Cu;
    // 0x1a9a1c: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x1a9a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x1a9a20: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a9a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9a24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a9a28: 0xc06a75a  jal         func_1A9D68
    ctx->pc = 0x1A9A28u;
    SET_GPR_U32(ctx, 31, 0x1A9A30u);
    ctx->pc = 0x1A9A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A28u;
    // 0x1a9a2c: 0xae4200e8  sw          $v0, 0xE8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9D68u, 0x1A9A28u, 0x1A9A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A30u;
label_1a9a30:
    // 0x1a9a30: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9A30u;
    {
        const bool branch_taken_0x1a9a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1A9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A30u;
        // 0x1a9a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a30) {
            ctx->pc = 0x1A9A40u;
            goto label_1a9a40;
        }
    }
    ctx->pc = 0x1A9A38u;
    // 0x1a9a38: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1A9A38u;
    {
        const bool branch_taken_0x1a9a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A38u;
        // 0x1a9a3c: 0xae5100e0  sw          $s1, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a38) {
            ctx->pc = 0x1A9B8Cu;
            goto label_1a9b8c;
        }
    }
    ctx->pc = 0x1A9A40u;
label_1a9a40:
    // 0x1a9a40: 0xc06a798  jal         func_1A9E60
    ctx->pc = 0x1A9A40u;
    SET_GPR_U32(ctx, 31, 0x1A9A48u);
    ctx->pc = 0x1A9E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9E60u, 0x1A9A40u, 0x1A9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A48u;
label_1a9a48:
    // 0x1a9a48: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1a9a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1a9a4c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1a9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a9a50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a9a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a9a54:
    // 0x1a9a54: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x1a9a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a9a58: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1a9a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1a9a5c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a9a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1a9a60: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1a9a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1a9a64: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x1a9a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a9a68: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1a9a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1a9a6c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x1a9a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9a70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9a74: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1a9a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a9a78: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x1a9a78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x1a9a7c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1a9a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9a80: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1a9a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9a84: 0x0  nop
    ctx->pc = 0x1a9a84u;
    // NOP
    // 0x1a9a88: 0x0  nop
    ctx->pc = 0x1a9a88u;
    // NOP
    // 0x1a9a8c: 0x46062103  div.s       $f4, $f4, $f6
    ctx->pc = 0x1a9a8cu;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[6]); }
    // 0x1a9a90: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x1a9a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9a94: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1a9a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x1a9a98: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x1a9a98u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1a9a9c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1a9a9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a9aa0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9aa4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9aa4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9aa8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9aac: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9aacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9ab0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9ab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9ab4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9ab4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9ab8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9abc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9abcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9ac0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1a9ac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a9ac4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9ac4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9ac8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9ac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9acc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a9accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a9ad0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9ad4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a9ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a9ad8: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1a9ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1a9adc: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x1a9adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9ae0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1a9ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9ae4: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x1a9ae4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x1a9ae8: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1a9ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9aec: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9af0: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x1a9af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9af4: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1a9af4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x1a9af8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9af8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9afc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1a9afcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a9b00: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9b00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9b04: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9b04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9b08: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9b08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9b0c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9b0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9b10: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9b14: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9b14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9b18: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9b18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9b1c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9b1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9b20: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1a9b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a9b24: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a9b24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a9b28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9b2c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a9b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a9b30: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x1a9b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x1a9b34: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x1a9b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9b38: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1a9b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9b3c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x1a9b3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x1a9b40: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1a9b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9b44: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9b48: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x1a9b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9b4c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1a9b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x1a9b50: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9b50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9b54: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1a9b54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a9b58: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9b58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9b5c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9b5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9b60: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9b60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9b64: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9b64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9b68: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9b6c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9b6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9b70: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9b70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9b74: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9b74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9b78: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1a9b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a9b7c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a9b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a9b80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9b84: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a9b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a9b88: 0xe64000f8  swc1        $f0, 0xF8($s2)
    ctx->pc = 0x1a9b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
label_1a9b8c:
    // 0x1a9b8c: 0x8e4200e0  lw          $v0, 0xE0($s2)
    ctx->pc = 0x1a9b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x1a9b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9b94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9b98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a9b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9b9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a9b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BA0u;
        // 0x1a9ba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9BA8u;
}
