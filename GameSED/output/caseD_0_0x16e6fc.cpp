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

// Function: caseD_0
// Address: 0x16e6fc - 0x16e768
void caseD_0_0x16e6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x16e6fc");
#endif

    switch (ctx->pc) {
        case 0x16e728u: goto label_16e728;
        case 0x16e758u: goto label_16e758;
        default: break;
    }

    ctx->pc = 0x16e6fcu;

    // 0x16e6fc: 0x12600024  beqz        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x16E6FCu;
    {
        const bool branch_taken_0x16e6fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e6fc) {
            ctx->pc = 0x16E790u;
            return;
        }
    }
    ctx->pc = 0x16E704u;
    // 0x16e704: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x16e704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16e708: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x16e708u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e70c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x16e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x16e710: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16e710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e714: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16e714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16e718: 0x8e240154  lw          $a0, 0x154($s1)
    ctx->pc = 0x16e718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16e71c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16e71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e720: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x16E720u;
    SET_GPR_U32(ctx, 31, 0x16E728u);
    ctx->pc = 0x16E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E720u;
    // 0x16e724: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x16E720u, 0x16E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E728u;
label_16e728:
    // 0x16e728: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x16e728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16e72c: 0x46006045  abs.s       $f1, $f12
    ctx->pc = 0x16e72cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[12]);
    // 0x16e730: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x16e730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16e734: 0x46006805  abs.s       $f0, $f13
    ctx->pc = 0x16e734u;
    ctx->f[0] = FPU_ABS_S(ctx->f[13]);
    // 0x16e738: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x16e738u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16e73c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16e73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16e740: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x16e740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16e744: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x16e744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e748: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x16E748u;
    {
        const bool branch_taken_0x16e748 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e748) {
            ctx->pc = 0x16E74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E748u;
            // 0x16e74c: 0xc7ac0024  lwc1        $f12, 0x24($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E768u;
            return;
        }
    }
    ctx->pc = 0x16E750u;
    // 0x16e750: 0xc067a02  jal         func_19E808
    ctx->pc = 0x16E750u;
    SET_GPR_U32(ctx, 31, 0x16E758u);
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x16E750u, 0x16E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E758u;
label_16e758:
    // 0x16e758: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x16e758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16e75c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e760: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x16e760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x16e764: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x16e764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x16e768u;
}
