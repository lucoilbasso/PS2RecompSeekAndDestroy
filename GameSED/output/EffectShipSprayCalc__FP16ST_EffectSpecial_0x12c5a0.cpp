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

// Function: EffectShipSprayCalc__FP16ST_EffectSpecial
// Address: 0x12c5a0 - 0x12c654
void EffectShipSprayCalc__FP16ST_EffectSpecial_0x12c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectShipSprayCalc__FP16ST_EffectSpecial_0x12c5a0");
#endif

    switch (ctx->pc) {
        case 0x12c5c4u: goto label_12c5c4;
        default: break;
    }

    ctx->pc = 0x12c5a0u;

    // 0x12c5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c5a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c5a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12c5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c5ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c5b0: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x12c5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x12c5b4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x12c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12c5b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c5bc: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12C5BCu;
    SET_GPR_U32(ctx, 31, 0x12C5C4u);
    ctx->pc = 0x12C5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C5BCu;
    // 0x12c5c0: 0x262501c4  addiu       $a1, $s1, 0x1C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12C5BCu, 0x12C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C5C4u;
label_12c5c4:
    // 0x12c5c4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x12c5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c5c8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x12c5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c5cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12c5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12c5d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12c5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12c5d4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x12c5d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12c5d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c5dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12c5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12c5e0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x12c5e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12c5e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x12C5E4u;
    {
        const bool branch_taken_0x12c5e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C5E4u;
        // 0x12c5e8: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5e4) {
            ctx->pc = 0x12C5F8u;
            goto label_12c5f8;
        }
    }
    ctx->pc = 0x12C5ECu;
    // 0x12c5ec: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x12c5ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x12c5f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c5f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12c5f4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x12c5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_12c5f8:
    // 0x12c5f8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x12c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c5fc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x12c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c600: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12c600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12c604: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x12c604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12c608: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12C608u;
    {
        const bool branch_taken_0x12c608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C608u;
        // 0x12c60c: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c608) {
            ctx->pc = 0x12C618u;
            goto label_12c618;
        }
    }
    ctx->pc = 0x12C610u;
    // 0x12c610: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x12c610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x12c614: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x12c614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_12c618:
    // 0x12c618: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x12c618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x12c61c: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x12c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x12c620: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C620u;
    {
        const bool branch_taken_0x12c620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c620) {
            ctx->pc = 0x12C624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C620u;
            // 0x12c624: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C644u;
            goto label_12c644;
        }
    }
    ctx->pc = 0x12C628u;
    // 0x12c628: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x12c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x12c62c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x12c62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x12c630: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12c630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12c634: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x12c634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c638: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12c638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12c63c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x12c63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x12c640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c644:
    // 0x12c644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c64c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C64Cu;
        // 0x12c650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C654u;
}
