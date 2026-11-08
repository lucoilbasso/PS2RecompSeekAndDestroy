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

// Function: entry_0011a488
// Address: 0x11a488 - 0x11a49c
void entry_0011a488_0x11a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a488_0x11a488");
#endif

    ctx->pc = 0x11a488u;

    // 0x11a488: 0x4c1ffef  bgez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11A488u;
    {
        const bool branch_taken_0x11a488 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A488u;
        // 0x11a48c: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a488) {
            ctx->pc = 0x11A448u;
            return;
        }
    }
    ctx->pc = 0x11A490u;
    // 0x11a490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a494: 0x3e00008  jr          $ra
    ctx->pc = 0x11A494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A494u;
        // 0x11a498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A49Cu;
}
