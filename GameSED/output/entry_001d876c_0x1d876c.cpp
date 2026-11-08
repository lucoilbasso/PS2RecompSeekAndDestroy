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

// Function: entry_001d876c
// Address: 0x1d876c - 0x1d878c
void entry_001d876c_0x1d876c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d876c_0x1d876c");
#endif

    switch (ctx->pc) {
        case 0x1d8774u: goto label_1d8774;
        default: break;
    }

    ctx->pc = 0x1d876cu;

label_1d876c:
    // 0x1d876c: 0x60f809  jalr        $v1
label_1d8770:
    if (ctx->pc == 0x1D8770u) {
        ctx->pc = 0x1D8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D876Cu;
        // 0x1d8770: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8774u;
        goto label_1d8774;
    }
    ctx->pc = 0x1D876Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8774u);
        ctx->pc = 0x1D8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D876Cu;
        // 0x1d8770: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D876Cu, 0x1D8774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8774u;
label_1d8774:
    // 0x1d8774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8778:
    // 0x1d8778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d877c:
    // 0x1d877c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d877cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8780:
    // 0x1d8780: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d8780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d8784:
    // 0x1d8784: 0x3e00008  jr          $ra
label_1d8788:
    if (ctx->pc == 0x1D8788u) {
        ctx->pc = 0x1D8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8784u;
        // 0x1d8788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D878Cu;
        goto label_fallthrough_0x1d8784;
    }
    ctx->pc = 0x1D8784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8784u;
        // 0x1d8788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d8784:
    ctx->pc = 0x1D878Cu;
}
