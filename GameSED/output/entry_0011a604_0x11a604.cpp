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

// Function: entry_0011a604
// Address: 0x11a604 - 0x11a624
void entry_0011a604_0x11a604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a604_0x11a604");
#endif

    ctx->pc = 0x11a604u;

    // 0x11a604: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A604u;
    {
        const bool branch_taken_0x11a604 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A604u;
        // 0x11a608: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a604) {
            ctx->pc = 0x11A624u;
            return;
        }
    }
    ctx->pc = 0x11A60Cu;
    // 0x11a60c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x11a610: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11a610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11a614: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x11a614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x11a618: 0x24a542f8  addiu       $a1, $a1, 0x42F8
    ctx->pc = 0x11a618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17144));
    // 0x11a61c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11A61Cu;
    SET_GPR_U32(ctx, 31, 0x11A624u);
    ctx->pc = 0x11A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A61Cu;
    // 0x11a620: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11A61Cu, 0x11A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A624u;
}
