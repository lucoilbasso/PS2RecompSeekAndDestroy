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

// Function: ApCameraChangeRotRate__FP7WcActorf
// Address: 0x142140 - 0x14219c
void ApCameraChangeRotRate__FP7WcActorf_0x142140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraChangeRotRate__FP7WcActorf_0x142140");
#endif

    switch (ctx->pc) {
        case 0x142164u: goto label_142164;
        default: break;
    }

    ctx->pc = 0x142140u;

    // 0x142140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142144: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x142144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x142148: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x142148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14214c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14214cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x142150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142154: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x142154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x142158: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14215c: 0xc061a46  jal         func_186918
    ctx->pc = 0x14215Cu;
    SET_GPR_U32(ctx, 31, 0x142164u);
    ctx->pc = 0x142160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14215Cu;
    // 0x142160: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x14215Cu, 0x142164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142164u;
label_142164:
    // 0x142164: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x142164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142168: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142168u;
    {
        const bool branch_taken_0x142168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142168u;
        // 0x14216c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142168) {
            ctx->pc = 0x142184u;
            goto label_142184;
        }
    }
    ctx->pc = 0x142170u;
    // 0x142170: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x142170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x142174: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x142174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x142178: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x142178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x14217c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x14217Cu;
    {
        const bool branch_taken_0x14217c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14217c) {
            ctx->pc = 0x142180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14217Cu;
            // 0x142180: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142184u;
            goto label_142184;
        }
    }
    ctx->pc = 0x142184u;
label_142184:
    // 0x142184: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x142184u;
    {
        const bool branch_taken_0x142184 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x142184) {
            ctx->pc = 0x142188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142184u;
            // 0x142188: 0xe4b40148  swc1        $f20, 0x148($a1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 328), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14218Cu;
            goto label_14218c;
        }
    }
    ctx->pc = 0x14218Cu;
label_14218c:
    // 0x14218c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14218cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142190: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x142190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x142194: 0x3e00008  jr          $ra
    ctx->pc = 0x142194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142194u;
        // 0x142198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14219Cu;
}
