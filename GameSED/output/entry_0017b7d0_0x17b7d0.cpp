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

// Function: entry_0017b7d0
// Address: 0x17b7d0 - 0x17b7f0
void entry_0017b7d0_0x17b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b7d0_0x17b7d0");
#endif

    switch (ctx->pc) {
        case 0x17b7e4u: goto label_17b7e4;
        default: break;
    }

    ctx->pc = 0x17b7d0u;

    // 0x17b7d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b7d4: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B7D4u;
    {
        const bool branch_taken_0x17b7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7D4u;
        // 0x17b7d8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7d4) {
            ctx->pc = 0x17B7F0u;
            return;
        }
    }
    ctx->pc = 0x17B7DCu;
    // 0x17b7dc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17B7DCu;
    SET_GPR_U32(ctx, 31, 0x17B7E4u);
    ctx->pc = 0x17B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B7DCu;
    // 0x17b7e0: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17B7DCu, 0x17B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B7E4u;
label_17b7e4:
    // 0x17b7e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17B7E4u;
    {
        const bool branch_taken_0x17b7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7E4u;
        // 0x17b7e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7e4) {
            ctx->pc = 0x17B808u;
            return;
        }
    }
    ctx->pc = 0x17B7ECu;
    // 0x17b7ec: 0x0  nop
    ctx->pc = 0x17b7ecu;
    // NOP
    ctx->pc = 0x17b7f0u;
}
