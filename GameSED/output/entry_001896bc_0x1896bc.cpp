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

// Function: entry_001896bc
// Address: 0x1896bc - 0x1896d4
void entry_001896bc_0x1896bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001896bc_0x1896bc");
#endif

    switch (ctx->pc) {
        case 0x1896c8u: goto label_1896c8;
        default: break;
    }

    ctx->pc = 0x1896bcu;

label_1896bc:
    // 0x1896bc: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x1896bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
label_1896c0:
    // 0x1896c0: 0x40f809  jalr        $v0
label_1896c4:
    if (ctx->pc == 0x1896C4u) {
        ctx->pc = 0x1896C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896C0u;
        // 0x1896c4: 0x8cc5015c  lw          $a1, 0x15C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896C8u;
        goto label_1896c8;
    }
    ctx->pc = 0x1896C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1896C8u);
        ctx->pc = 0x1896C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896C0u;
        // 0x1896c4: 0x8cc5015c  lw          $a1, 0x15C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1896C0u, 0x1896C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1896C8u;
label_1896c8:
    // 0x1896c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1896c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1896cc:
    // 0x1896cc: 0x3e00008  jr          $ra
label_1896d0:
    if (ctx->pc == 0x1896D0u) {
        ctx->pc = 0x1896D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896CCu;
        // 0x1896d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896D4u;
        goto label_fallthrough_0x1896cc;
    }
    ctx->pc = 0x1896CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1896D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896CCu;
        // 0x1896d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1896CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1896cc:
    ctx->pc = 0x1896D4u;
}
