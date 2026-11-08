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

// Function: Finish__9ApcSndDrv
// Address: 0x11d750 - 0x11d794
void Finish__9ApcSndDrv_0x11d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9ApcSndDrv_0x11d750");
#endif

    switch (ctx->pc) {
        case 0x11d774u: goto label_11d774;
        case 0x11d77cu: goto label_11d77c;
        case 0x11d784u: goto label_11d784;
        default: break;
    }

    ctx->pc = 0x11d750u;

    // 0x11d750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d75c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11d75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11d760: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x11d760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x11d764: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x11d764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x11d768: 0x8c84c030  lw          $a0, -0x3FD0($a0)
    ctx->pc = 0x11d768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950960)));
    // 0x11d76c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x11D76Cu;
    SET_GPR_U32(ctx, 31, 0x11D774u);
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x11D76Cu, 0x11D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D774u;
label_11d774:
    // 0x11d774: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x11D774u;
    SET_GPR_U32(ctx, 31, 0x11D77Cu);
    ctx->pc = 0x11D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D774u;
    // 0x11d778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x11D774u, 0x11D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D77Cu;
label_11d77c:
    // 0x11d77c: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x11D77Cu;
    SET_GPR_U32(ctx, 31, 0x11D784u);
    ctx->pc = 0x11D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D77Cu;
    // 0x11d780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x11D77Cu, 0x11D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D784u;
label_11d784:
    // 0x11d784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d788: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11d788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d78c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D78Cu;
        // 0x11d790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D794u;
}
