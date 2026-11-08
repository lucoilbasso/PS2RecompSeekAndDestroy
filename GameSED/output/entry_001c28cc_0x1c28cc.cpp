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

// Function: entry_001c28cc
// Address: 0x1c28cc - 0x1c28ec
void entry_001c28cc_0x1c28cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c28cc_0x1c28cc");
#endif

    switch (ctx->pc) {
        case 0x1c28d8u: goto label_1c28d8;
        default: break;
    }

    ctx->pc = 0x1c28ccu;

    // 0x1c28cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c28ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28d0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C28D0u;
    SET_GPR_U32(ctx, 31, 0x1C28D8u);
    ctx->pc = 0x1C28D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28D0u;
    // 0x1c28d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C28D0u, 0x1C28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28D8u;
label_1c28d8:
    // 0x1c28d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C28D8u;
    {
        const bool branch_taken_0x1c28d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28D8u;
        // 0x1c28dc: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28d8) {
            ctx->pc = 0x1C28ECu;
            return;
        }
    }
    ctx->pc = 0x1C28E0u;
    // 0x1c28e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c28e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28e4: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C28E4u;
    SET_GPR_U32(ctx, 31, 0x1C28ECu);
    ctx->pc = 0x1C28E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28E4u;
    // 0x1c28e8: 0x24a5b650  addiu       $a1, $a1, -0x49B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C28E4u, 0x1C28ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28ECu;
}
