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

// Function: entry_0017b370
// Address: 0x17b370 - 0x17b390
void entry_0017b370_0x17b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b370_0x17b370");
#endif

    switch (ctx->pc) {
        case 0x17b388u: goto label_17b388;
        default: break;
    }

    ctx->pc = 0x17b370u;

    // 0x17b370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b374: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x17b374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x17b378: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x17b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x17b37c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x17b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x17b380: 0xc05ef22  jal         func_17BC88
    ctx->pc = 0x17B380u;
    SET_GPR_U32(ctx, 31, 0x17B388u);
    ctx->pc = 0x17B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B380u;
    // 0x17b384: 0x24840380  addiu       $a0, $a0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC88u, 0x17B380u, 0x17B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B388u;
label_17b388:
    // 0x17b388: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x17B388u;
    {
        const bool branch_taken_0x17b388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B388u;
        // 0x17b38c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b388) {
            ctx->pc = 0x17B360u;
            return;
        }
    }
    ctx->pc = 0x17B390u;
}
