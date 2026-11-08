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

// Function: ApStudioInitLocal__FP9ApcStudio
// Address: 0x114168 - 0x1141b0
void ApStudioInitLocal__FP9ApcStudio_0x114168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApStudioInitLocal__FP9ApcStudio_0x114168");
#endif

    switch (ctx->pc) {
        case 0x11417cu: goto label_11417c;
        case 0x1141a0u: goto label_1141a0;
        default: break;
    }

    ctx->pc = 0x114168u;

    // 0x114168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11416c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114170: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x114170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x114174: 0xc05beb6  jal         func_16FAD8
    ctx->pc = 0x114174u;
    SET_GPR_U32(ctx, 31, 0x11417Cu);
    ctx->pc = 0x114178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114174u;
    // 0x114178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FAD8u, 0x114174u, 0x11417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11417Cu;
label_11417c:
    // 0x11417c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x114180: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x114180u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x114184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114188: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x114188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11418c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x11418cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x114190: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114190u;
    {
        const bool branch_taken_0x114190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114190u;
        // 0x114194: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114190) {
            ctx->pc = 0x1141A0u;
            goto label_1141a0;
        }
    }
    ctx->pc = 0x114198u;
    // 0x114198: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x114198u;
    SET_GPR_U32(ctx, 31, 0x1141A0u);
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x114198u, 0x1141A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1141A0u;
label_1141a0:
    // 0x1141a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1141a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1141a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1141a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1141a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1141A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1141ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141A8u;
        // 0x1141ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1141A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1141B0u;
}
