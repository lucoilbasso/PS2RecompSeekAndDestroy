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

// Function: entry_001dd814
// Address: 0x1dd814 - 0x1dd834
void entry_001dd814_0x1dd814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd814_0x1dd814");
#endif

    ctx->pc = 0x1dd814u;

    // 0x1dd814: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1dd814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1dd818: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd81c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1dd81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1dd820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd824: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x1dd824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x1dd828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd82c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD82Cu;
        // 0x1dd830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD834u;
}
