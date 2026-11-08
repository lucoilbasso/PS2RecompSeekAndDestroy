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

// Function: ApDaemonScanAround__FP7WcActorP9FVector3215ApScanActorTypef
// Address: 0x1392f8 - 0x13934c
void ApDaemonScanAround__FP7WcActorP9FVector3215ApScanActorTypef_0x1392f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonScanAround__FP7WcActorP9FVector3215ApScanActorTypef_0x1392f8");
#endif

    switch (ctx->pc) {
        case 0x139310u: goto label_139310;
        default: break;
    }

    ctx->pc = 0x1392f8u;

    // 0x1392f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1392f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1392fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1392fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139300: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x139300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x139304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139308: 0xc04dbd2  jal         func_136F48
    ctx->pc = 0x139308u;
    SET_GPR_U32(ctx, 31, 0x139310u);
    ctx->pc = 0x13930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139308u;
    // 0x13930c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F48u, 0x139308u, 0x139310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139310u;
label_139310:
    // 0x139310: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x139310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x139314: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x139314u;
    {
        const bool branch_taken_0x139314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139314u;
        // 0x139318: 0x2463bc50  addiu       $v1, $v1, -0x43B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139314) {
            ctx->pc = 0x139338u;
            goto label_139338;
        }
    }
    ctx->pc = 0x13931Cu;
    // 0x13931c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13931cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139320: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x139320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139324: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x139324u;
    {
        const bool branch_taken_0x139324 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x139324) {
            ctx->pc = 0x139328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139324u;
            // 0x139328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13933Cu;
            goto label_13933c;
        }
    }
    ctx->pc = 0x13932Cu;
    // 0x13932c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13932Cu;
    {
        const bool branch_taken_0x13932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13932Cu;
        // 0x139330: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13932c) {
            ctx->pc = 0x13933Cu;
            goto label_13933c;
        }
    }
    ctx->pc = 0x139334u;
    // 0x139334: 0x0  nop
    ctx->pc = 0x139334u;
    // NOP
label_139338:
    // 0x139338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x139338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13933c:
    // 0x13933c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13933cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139340: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x139340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x139344: 0x3e00008  jr          $ra
    ctx->pc = 0x139344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139344u;
        // 0x139348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13934Cu;
}
