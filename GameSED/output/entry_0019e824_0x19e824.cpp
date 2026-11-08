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

// Function: entry_0019e824
// Address: 0x19e824 - 0x19e838
void entry_0019e824_0x19e824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e824_0x19e824");
#endif

    ctx->pc = 0x19e824u;

    // 0x19e824: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x19e824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e828: 0x45010051  bc1t        . + 4 + (0x51 << 2)
    ctx->pc = 0x19E828u;
    {
        const bool branch_taken_0x19e828 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E828u;
        // 0x19e82c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e828) {
            ctx->pc = 0x19E970u;
            return;
        }
    }
    ctx->pc = 0x19E830u;
    // 0x19e830: 0x3e00008  jr          $ra
    ctx->pc = 0x19E830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E830u;
        // 0x19e834: 0x2402e000  addiu       $v0, $zero, -0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E838u;
}
