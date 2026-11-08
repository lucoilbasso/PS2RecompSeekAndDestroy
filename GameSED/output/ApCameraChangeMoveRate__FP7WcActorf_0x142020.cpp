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

// Function: ApCameraChangeMoveRate__FP7WcActorf
// Address: 0x142020 - 0x14207c
void ApCameraChangeMoveRate__FP7WcActorf_0x142020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraChangeMoveRate__FP7WcActorf_0x142020");
#endif

    switch (ctx->pc) {
        case 0x142044u: goto label_142044;
        default: break;
    }

    ctx->pc = 0x142020u;

    // 0x142020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142024: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x142024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x142028: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x142028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14202c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14202cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x142030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142034: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x142034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x142038: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14203c: 0xc061a46  jal         func_186918
    ctx->pc = 0x14203Cu;
    SET_GPR_U32(ctx, 31, 0x142044u);
    ctx->pc = 0x142040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14203Cu;
    // 0x142040: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x14203Cu, 0x142044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142044u;
label_142044:
    // 0x142044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x142044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142048: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142048u;
    {
        const bool branch_taken_0x142048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142048u;
        // 0x14204c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142048) {
            ctx->pc = 0x142064u;
            goto label_142064;
        }
    }
    ctx->pc = 0x142050u;
    // 0x142050: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x142050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x142054: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x142054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x142058: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x142058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x14205c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x14205Cu;
    {
        const bool branch_taken_0x14205c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14205c) {
            ctx->pc = 0x142060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14205Cu;
            // 0x142060: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142064u;
            goto label_142064;
        }
    }
    ctx->pc = 0x142064u;
label_142064:
    // 0x142064: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x142064u;
    {
        const bool branch_taken_0x142064 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x142064) {
            ctx->pc = 0x142068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142064u;
            // 0x142068: 0xe4b40140  swc1        $f20, 0x140($a1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 320), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14206Cu;
            goto label_14206c;
        }
    }
    ctx->pc = 0x14206Cu;
label_14206c:
    // 0x14206c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14206cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142070: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x142070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x142074: 0x3e00008  jr          $ra
    ctx->pc = 0x142074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142074u;
        // 0x142078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14207Cu;
}
