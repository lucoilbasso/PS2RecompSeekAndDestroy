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

// Function: entry_001cb710
// Address: 0x1cb710 - 0x1cb730
void entry_001cb710_0x1cb710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb710_0x1cb710");
#endif

    ctx->pc = 0x1cb710u;

label_1cb710:
    // 0x1cb710: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
label_1cb714:
    if (ctx->pc == 0x1CB714u) {
        ctx->pc = 0x1CB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB710u;
        // 0x1cb714: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB718u;
        goto label_1cb718;
    }
    ctx->pc = 0x1CB710u;
    {
        const bool branch_taken_0x1cb710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB710u;
        // 0x1cb714: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb710) {
            ctx->pc = 0x1CBA88u;
            return;
        }
    }
    ctx->pc = 0x1CB718u;
label_1cb718:
    // 0x1cb718: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1cb718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1cb71c:
    // 0x1cb71c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cb71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cb720:
    // 0x1cb720: 0x8c63c010  lw          $v1, -0x3FF0($v1)
    ctx->pc = 0x1cb720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950928)));
label_1cb724:
    // 0x1cb724: 0x600008  jr          $v1
label_1cb728:
    if (ctx->pc == 0x1CB728u) {
        ctx->pc = 0x1CB72Cu;
        goto label_1cb72c;
    }
    ctx->pc = 0x1CB724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB724u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CB72Cu;
label_1cb72c:
    // 0x1cb72c: 0x0  nop
    ctx->pc = 0x1cb72cu;
    // NOP
    ctx->pc = 0x1cb730u;
}
