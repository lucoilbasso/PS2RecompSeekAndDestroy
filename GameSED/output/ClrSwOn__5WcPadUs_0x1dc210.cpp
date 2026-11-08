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

// Function: ClrSwOn__5WcPadUs
// Address: 0x1dc210 - 0x1dc224
void ClrSwOn__5WcPadUs_0x1dc210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClrSwOn__5WcPadUs_0x1dc210");
#endif

    ctx->pc = 0x1dc210u;

    // 0x1dc210: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1dc210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1dc214: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1dc214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1dc218: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1dc218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1dc21c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC21Cu;
        // 0x1dc220: 0xa4a00022  sh          $zero, 0x22($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 34), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC224u;
}
