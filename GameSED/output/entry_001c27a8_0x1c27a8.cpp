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

// Function: entry_001c27a8
// Address: 0x1c27a8 - 0x1c27bc
void entry_001c27a8_0x1c27a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c27a8_0x1c27a8");
#endif

    ctx->pc = 0x1c27a8u;

    // 0x1c27a8: 0x8cc401ac  lw          $a0, 0x1AC($a2)
    ctx->pc = 0x1c27a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
    // 0x1c27ac: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1c27acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c27b0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1c27b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1c27b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C27B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C27B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27B4u;
        // 0x1c27b8: 0xacc20850  sw          $v0, 0x850($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C27B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C27BCu;
}
