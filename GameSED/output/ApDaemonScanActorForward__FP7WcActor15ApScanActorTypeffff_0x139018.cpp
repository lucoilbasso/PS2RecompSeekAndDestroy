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

// Function: ApDaemonScanActorForward__FP7WcActor15ApScanActorTypeffff
// Address: 0x139018 - 0x139058
void ApDaemonScanActorForward__FP7WcActor15ApScanActorTypeffff_0x139018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonScanActorForward__FP7WcActor15ApScanActorTypeffff_0x139018");
#endif

    switch (ctx->pc) {
        case 0x13904cu: goto label_13904c;
        default: break;
    }

    ctx->pc = 0x139018u;

    // 0x139018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13901c: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x13901cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x139020: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139024: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x139024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139028: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x139028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x13902c: 0x24458f98  addiu       $a1, $v0, -0x7068
    ctx->pc = 0x13902cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938520));
    // 0x139030: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x139030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x139034: 0xe7af0004  swc1        $f15, 0x4($sp)
    ctx->pc = 0x139034u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x139038: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x139038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13903c: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x13903cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x139040: 0xe7ad000c  swc1        $f13, 0xC($sp)
    ctx->pc = 0x139040u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x139044: 0xc04dea6  jal         func_137A98
    ctx->pc = 0x139044u;
    SET_GPR_U32(ctx, 31, 0x13904Cu);
    ctx->pc = 0x139048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139044u;
    // 0x139048: 0xe7ae0010  swc1        $f14, 0x10($sp) (Delay Slot)
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x137A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A98u, 0x139044u, 0x13904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13904Cu;
label_13904c:
    // 0x13904c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13904cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139050: 0x3e00008  jr          $ra
    ctx->pc = 0x139050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139050u;
        // 0x139054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139058u;
}
