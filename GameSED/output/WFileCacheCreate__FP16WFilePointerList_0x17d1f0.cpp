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

// Function: WFileCacheCreate__FP16WFilePointerList
// Address: 0x17d1f0 - 0x17d224
void WFileCacheCreate__FP16WFilePointerList_0x17d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WFileCacheCreate__FP16WFilePointerList_0x17d1f0");
#endif

    switch (ctx->pc) {
        case 0x17d200u: goto label_17d200;
        default: break;
    }

    ctx->pc = 0x17d1f0u;

    // 0x17d1f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d1f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17D1F4u;
    {
        const bool branch_taken_0x17d1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1F4u;
        // 0x17d1f8: 0xaf848d28  sw          $a0, -0x72D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1f4) {
            ctx->pc = 0x17D21Cu;
            goto label_17d21c;
        }
    }
    ctx->pc = 0x17D1FCu;
    // 0x17d1fc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_17d200:
    // 0x17d200: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x17d200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x17d204: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d208: 0x0  nop
    ctx->pc = 0x17d208u;
    // NOP
    // 0x17d20c: 0x0  nop
    ctx->pc = 0x17d20cu;
    // NOP
    // 0x17d210: 0x0  nop
    ctx->pc = 0x17d210u;
    // NOP
    // 0x17d214: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17D214u;
    {
        const bool branch_taken_0x17d214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d214) {
            ctx->pc = 0x17D218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D214u;
            // 0x17d218: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d200;
        }
    }
    ctx->pc = 0x17D21Cu;
label_17d21c:
    // 0x17d21c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D224u;
}
