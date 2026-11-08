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

// Function: entry_001a49d0
// Address: 0x1a49d0 - 0x1a49ec
void entry_001a49d0_0x1a49d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a49d0_0x1a49d0");
#endif

    switch (ctx->pc) {
        case 0x1a49e0u: goto label_1a49e0;
        default: break;
    }

    ctx->pc = 0x1a49d0u;

label_1a49d0:
    // 0x1a49d0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a49d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a49d4:
    // 0x1a49d4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a49d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a49d8:
    // 0x1a49d8: 0x40f809  jalr        $v0
label_1a49dc:
    if (ctx->pc == 0x1A49DCu) {
        ctx->pc = 0x1A49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49D8u;
        // 0x1a49dc: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49E0u;
        goto label_1a49e0;
    }
    ctx->pc = 0x1A49D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A49E0u);
        ctx->pc = 0x1A49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49D8u;
        // 0x1a49dc: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49D8u, 0x1A49E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A49E0u;
label_1a49e0:
    // 0x1a49e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a49e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a49e4:
    // 0x1a49e4: 0x3e00008  jr          $ra
label_1a49e8:
    if (ctx->pc == 0x1A49E8u) {
        ctx->pc = 0x1A49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49E4u;
        // 0x1a49e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49ECu;
        goto label_fallthrough_0x1a49e4;
    }
    ctx->pc = 0x1A49E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49E4u;
        // 0x1a49e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a49e4:
    ctx->pc = 0x1A49ECu;
}
