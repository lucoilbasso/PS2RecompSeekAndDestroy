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

// Function: entry_001a8498
// Address: 0x1a8498 - 0x1a84b8
void entry_001a8498_0x1a8498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8498_0x1a8498");
#endif

    switch (ctx->pc) {
        case 0x1a84acu: goto label_1a84ac;
        default: break;
    }

    ctx->pc = 0x1a8498u;

    // 0x1a8498: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8498u;
    {
        const bool branch_taken_0x1a8498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8498u;
        // 0x1a849c: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8498) {
            ctx->pc = 0x1A84B8u;
            return;
        }
    }
    ctx->pc = 0x1A84A0u;
    // 0x1a84a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a84a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84a4: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1A84A4u;
    SET_GPR_U32(ctx, 31, 0x1A84ACu);
    ctx->pc = 0x1A84A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84A4u;
    // 0x1a84a8: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1A84A4u, 0x1A84ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84ACu;
label_1a84ac:
    // 0x1a84ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A84ACu;
    {
        const bool branch_taken_0x1a84ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84ACu;
        // 0x1a84b0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84ac) {
            ctx->pc = 0x1A8510u;
            return;
        }
    }
    ctx->pc = 0x1A84B4u;
    // 0x1a84b4: 0x0  nop
    ctx->pc = 0x1a84b4u;
    // NOP
    ctx->pc = 0x1a84b8u;
}
