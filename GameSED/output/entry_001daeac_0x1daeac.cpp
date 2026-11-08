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

// Function: entry_001daeac
// Address: 0x1daeac - 0x1daecc
void entry_001daeac_0x1daeac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daeac_0x1daeac");
#endif

    ctx->pc = 0x1daeacu;

    // 0x1daeac: 0x0  nop
    ctx->pc = 0x1daeacu;
    // NOP
    // 0x1daeb0: 0x0  nop
    ctx->pc = 0x1daeb0u;
    // NOP
    // 0x1daeb4: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DAEB4u;
    {
        const bool branch_taken_0x1daeb4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEB4u;
        // 0x1daeb8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daeb4) {
            ctx->pc = 0x1DAE98u;
            return;
        }
    }
    ctx->pc = 0x1DAEBCu;
    // 0x1daebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1daebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daec0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1daec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1daec4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEC4u;
        // 0x1daec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAECCu;
}
