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

// Function: ApDaemonScanActorTank__FP7WcActor15ApScanActorTypef
// Address: 0x139110 - 0x139160
void ApDaemonScanActorTank__FP7WcActor15ApScanActorTypef_0x139110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonScanActorTank__FP7WcActor15ApScanActorTypef_0x139110");
#endif

    switch (ctx->pc) {
        case 0x139154u: goto label_139154;
        default: break;
    }

    ctx->pc = 0x139110u;

    // 0x139110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139114: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x139114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x139118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x139118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13911c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139120: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x139120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x139124: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x139124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x139128: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x139128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13912c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13912cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139130: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x139130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x139134: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x139134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x139138: 0x24659090  addiu       $a1, $v1, -0x6F70
    ctx->pc = 0x139138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938768));
    // 0x13913c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13913cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139140: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x139140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x139144: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x139144u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x139148: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x139148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x13914c: 0xc04dea6  jal         func_137A98
    ctx->pc = 0x13914Cu;
    SET_GPR_U32(ctx, 31, 0x139154u);
    ctx->pc = 0x139150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13914Cu;
    // 0x139150: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x137A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A98u, 0x13914Cu, 0x139154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139154u;
label_139154:
    // 0x139154: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139158: 0x3e00008  jr          $ra
    ctx->pc = 0x139158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139158u;
        // 0x13915c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139160u;
}
