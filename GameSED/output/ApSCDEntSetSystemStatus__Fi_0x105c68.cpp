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

// Function: ApSCDEntSetSystemStatus__Fi
// Address: 0x105c68 - 0x105cac
void ApSCDEntSetSystemStatus__Fi_0x105c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntSetSystemStatus__Fi_0x105c68");
#endif

    switch (ctx->pc) {
        case 0x105c84u: goto label_105c84;
        case 0x105c98u: goto label_105c98;
        default: break;
    }

    ctx->pc = 0x105c68u;

    // 0x105c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x105c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x105c6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c74: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105C74u;
    {
        const bool branch_taken_0x105c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C74u;
        // 0x105c78: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c74) {
            ctx->pc = 0x105C90u;
            goto label_105c90;
        }
    }
    ctx->pc = 0x105C7Cu;
    // 0x105c7c: 0xc06a1b0  jal         func_1A86C0
    ctx->pc = 0x105C7Cu;
    SET_GPR_U32(ctx, 31, 0x105C84u);
    ctx->pc = 0x105C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105C7Cu;
    // 0x105c80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A86C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A86C0u, 0x105C7Cu, 0x105C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C84u;
label_105c84:
    // 0x105c84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x105C84u;
    {
        const bool branch_taken_0x105c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C84u;
        // 0x105c88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c84) {
            ctx->pc = 0x105C9Cu;
            goto label_105c9c;
        }
    }
    ctx->pc = 0x105C8Cu;
    // 0x105c8c: 0x0  nop
    ctx->pc = 0x105c8cu;
    // NOP
label_105c90:
    // 0x105c90: 0xc06a1d8  jal         func_1A8760
    ctx->pc = 0x105C90u;
    SET_GPR_U32(ctx, 31, 0x105C98u);
    ctx->pc = 0x1A8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8760u, 0x105C90u, 0x105C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C98u;
label_105c98:
    // 0x105c98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105c9c:
    // 0x105c9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105ca0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x105ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x105CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CA4u;
        // 0x105ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105CACu;
}
