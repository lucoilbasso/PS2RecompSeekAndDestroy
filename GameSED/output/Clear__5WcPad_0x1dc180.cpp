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

// Function: Clear__5WcPad
// Address: 0x1dc180 - 0x1dc194
void Clear__5WcPad_0x1dc180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__5WcPad_0x1dc180");
#endif

    ctx->pc = 0x1dc180u;

    // 0x1dc180: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1dc180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1dc184: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x1dc184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1dc188: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1dc188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1dc18c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC18Cu;
        // 0x1dc190: 0xa4830014  sh          $v1, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC194u;
}
