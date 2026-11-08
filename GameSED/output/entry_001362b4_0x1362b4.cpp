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

// Function: entry_001362b4
// Address: 0x1362b4 - 0x1362d8
void entry_001362b4_0x1362b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001362b4_0x1362b4");
#endif

    ctx->pc = 0x1362b4u;

label_1362b4:
    // 0x1362b4: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x1362b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1362b8:
    // 0x1362b8: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_1362bc:
    if (ctx->pc == 0x1362BCu) {
        ctx->pc = 0x1362BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362B8u;
        // 0x1362bc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362C0u;
        goto label_1362c0;
    }
    ctx->pc = 0x1362B8u;
    {
        const bool branch_taken_0x1362b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1362BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362B8u;
        // 0x1362bc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362b8) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x1362C0u;
label_1362c0:
    // 0x1362c0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1362c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1362c4:
    // 0x1362c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1362c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1362c8:
    // 0x1362c8: 0x8c636710  lw          $v1, 0x6710($v1)
    ctx->pc = 0x1362c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26384)));
label_1362cc:
    // 0x1362cc: 0x600008  jr          $v1
label_1362d0:
    if (ctx->pc == 0x1362D0u) {
        ctx->pc = 0x1362D4u;
        goto label_1362d4;
    }
    ctx->pc = 0x1362CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1362CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1362D4u;
label_1362d4:
    // 0x1362d4: 0x0  nop
    ctx->pc = 0x1362d4u;
    // NOP
    ctx->pc = 0x1362d8u;
}
