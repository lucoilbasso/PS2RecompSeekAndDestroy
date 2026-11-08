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

// Function: eh_context_free
// Address: 0x1cd248 - 0x1cd26c
void eh_context_free_0x1cd248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eh_context_free_0x1cd248");
#endif

    ctx->pc = 0x1cd248u;

    // 0x1cd248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd24c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD24Cu;
    {
        const bool branch_taken_0x1cd24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD24Cu;
        // 0x1cd250: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd24c) {
            ctx->pc = 0x1CD260u;
            goto label_1cd260;
        }
    }
    ctx->pc = 0x1CD254u;
    // 0x1cd254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd258: 0x8073d72  j           func_1CF5C8
    ctx->pc = 0x1CD258u;
    ctx->pc = 0x1CD25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD258u;
    // 0x1cd25c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5C8u;
    free_0x1cf5c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CD260u;
label_1cd260:
    // 0x1cd260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd264: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD264u;
        // 0x1cd268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD26Cu;
}
