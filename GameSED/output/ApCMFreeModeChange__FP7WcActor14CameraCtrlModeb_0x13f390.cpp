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

// Function: ApCMFreeModeChange__FP7WcActor14CameraCtrlModeb
// Address: 0x13f390 - 0x13f430
void ApCMFreeModeChange__FP7WcActor14CameraCtrlModeb_0x13f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMFreeModeChange__FP7WcActor14CameraCtrlModeb_0x13f390");
#endif

    switch (ctx->pc) {
        case 0x13f3a4u: goto label_13f3a4;
        default: break;
    }

    ctx->pc = 0x13f390u;

    // 0x13f390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f398: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13f398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13f39c: 0xc04fbc0  jal         func_13EF00
    ctx->pc = 0x13F39Cu;
    SET_GPR_U32(ctx, 31, 0x13F3A4u);
    ctx->pc = 0x13F3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F39Cu;
    // 0x13f3a0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF00u, 0x13F39Cu, 0x13F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F3A4u;
label_13f3a4:
    // 0x13f3a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x13f3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3a8: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x13f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x13f3ac: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x13f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13f3b0: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x13f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x13f3b4: 0x2405ff7f  addiu       $a1, $zero, -0x81
    ctx->pc = 0x13f3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x13f3b8: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x13f3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x13f3bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f3c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13f3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13f3c4: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x13f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x13f3c8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x13f3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x13f3cc: 0x24050888  addiu       $a1, $zero, 0x888
    ctx->pc = 0x13f3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2184));
    // 0x13f3d0: 0xc7808138  lwc1        $f0, -0x7EC8($gp)
    ctx->pc = 0x13f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f3d4: 0x2406efff  addiu       $a2, $zero, -0x1001
    ctx->pc = 0x13f3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x13f3d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13f3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13f3dc: 0x2484f598  addiu       $a0, $a0, -0xA68
    ctx->pc = 0x13f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964632));
    // 0x13f3e0: 0x464024  and         $t0, $v0, $a2
    ctx->pc = 0x13f3e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x13f3e4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x13f3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f3e8: 0x34663000  ori         $a2, $v1, 0x3000
    ctx->pc = 0x13f3e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x13f3ec: 0xe4e00144  swc1        $f0, 0x144($a3)
    ctx->pc = 0x13f3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 324), bits); }
    // 0x13f3f0: 0xe4e10148  swc1        $f1, 0x148($a3)
    ctx->pc = 0x13f3f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 328), bits); }
    // 0x13f3f4: 0xace5014c  sw          $a1, 0x14C($a3)
    ctx->pc = 0x13f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 332), GPR_U32(ctx, 5));
    // 0x13f3f8: 0xace40020  sw          $a0, 0x20($a3)
    ctx->pc = 0x13f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 4));
    // 0x13f3fc: 0xace3001c  sw          $v1, 0x1C($a3)
    ctx->pc = 0x13f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
    // 0x13f400: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F400u;
    {
        const bool branch_taken_0x13f400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F400u;
        // 0x13f404: 0xe4e10140  swc1        $f1, 0x140($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f400) {
            ctx->pc = 0x13F410u;
            goto label_13f410;
        }
    }
    ctx->pc = 0x13F408u;
    // 0x13f408: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F408u;
    {
        const bool branch_taken_0x13f408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F408u;
        // 0x13f40c: 0xace6001c  sw          $a2, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f408) {
            ctx->pc = 0x13F414u;
            goto label_13f414;
        }
    }
    ctx->pc = 0x13F410u;
label_13f410:
    // 0x13f410: 0xace8001c  sw          $t0, 0x1C($a3)
    ctx->pc = 0x13f410u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 8));
label_13f414:
    // 0x13f414: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x13f414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13f418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f41c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13f41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f420: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x13f420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x13f424: 0xace3001c  sw          $v1, 0x1C($a3)
    ctx->pc = 0x13f424u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
    // 0x13f428: 0x3e00008  jr          $ra
    ctx->pc = 0x13F428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F428u;
        // 0x13f42c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F430u;
}
