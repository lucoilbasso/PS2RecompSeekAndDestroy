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

// Function: entry_001cd52c
// Address: 0x1cd52c - 0x1cd544
void entry_001cd52c_0x1cd52c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd52c_0x1cd52c");
#endif

    switch (ctx->pc) {
        case 0x1cd534u: goto label_1cd534;
        default: break;
    }

    ctx->pc = 0x1cd52cu;

label_1cd52c:
    // 0x1cd52c: 0x40f809  jalr        $v0
label_1cd530:
    if (ctx->pc == 0x1CD530u) {
        ctx->pc = 0x1CD534u;
        goto label_1cd534;
    }
    ctx->pc = 0x1CD52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD534u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD52Cu, 0x1CD534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD534u;
label_1cd534:
    // 0x1cd534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd538:
    // 0x1cd538: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cd53c:
    // 0x1cd53c: 0x3e00008  jr          $ra
label_1cd540:
    if (ctx->pc == 0x1CD540u) {
        ctx->pc = 0x1CD540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD53Cu;
        // 0x1cd540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD544u;
        goto label_fallthrough_0x1cd53c;
    }
    ctx->pc = 0x1CD53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD53Cu;
        // 0x1cd540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cd53c:
    ctx->pc = 0x1CD544u;
}
