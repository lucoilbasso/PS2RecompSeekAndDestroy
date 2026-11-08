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

// Function: sceDevConsClose
// Address: 0x1ad270 - 0x1ad2a4
void sceDevConsClose_0x1ad270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsClose_0x1ad270");
#endif

    switch (ctx->pc) {
        case 0x1ad288u: goto label_1ad288;
        default: break;
    }

    ctx->pc = 0x1ad270u;

    // 0x1ad270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ad270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ad274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ad278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ad27c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad280: 0xc06b9ae  jal         func_1AE6B8
    ctx->pc = 0x1AD280u;
    SET_GPR_U32(ctx, 31, 0x1AD288u);
    ctx->pc = 0x1AD284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD280u;
    // 0x1ad284: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE6B8u, 0x1AD280u, 0x1AD288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD288u;
label_1ad288:
    // 0x1ad288: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ad288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1ad28c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ad28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ad290: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ad290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1ad294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad29c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD29Cu;
        // 0x1ad2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD2A4u;
}
