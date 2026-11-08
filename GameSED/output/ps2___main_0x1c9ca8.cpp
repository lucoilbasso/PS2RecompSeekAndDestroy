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

// Function: __main
// Address: 0x1c9ca8 - 0x1c9ce0
void ps2___main_0x1c9ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x1c9ca8");
#endif

    ctx->pc = 0x1c9ca8u;

    // 0x1c9ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9cac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c9cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9cb4: 0x24440458  addiu       $a0, $v0, 0x458
    ctx->pc = 0x1c9cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1112));
    // 0x1c9cb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c9cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410458u));
    // 0x1c9cbc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9CBCu;
    {
        const bool branch_taken_0x1c9cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CBCu;
        // 0x1c9cc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9cbc) {
            ctx->pc = 0x1C9CD8u;
            goto label_1c9cd8;
        }
    }
    ctx->pc = 0x1C9CC4u;
    // 0x1c9cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9cc8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1c9cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1c9ccc: 0x80726fa  j           func_1C9BE8
    ctx->pc = 0x1C9CCCu;
    ctx->pc = 0x1C9CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9CCCu;
    // 0x1c9cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9BE8u;
    ps2___do_global_ctors_0x1c9be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9CD4u;
    // 0x1c9cd4: 0x0  nop
    ctx->pc = 0x1c9cd4u;
    // NOP
label_1c9cd8:
    // 0x1c9cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CD8u;
        // 0x1c9cdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9CE0u;
}
