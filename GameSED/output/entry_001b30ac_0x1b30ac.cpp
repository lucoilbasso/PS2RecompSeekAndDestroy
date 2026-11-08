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

// Function: entry_001b30ac
// Address: 0x1b30ac - 0x1b30cc
void entry_001b30ac_0x1b30ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b30ac_0x1b30ac");
#endif

    switch (ctx->pc) {
        case 0x1b30b4u: goto label_1b30b4;
        case 0x1b30c4u: goto label_1b30c4;
        default: break;
    }

    ctx->pc = 0x1b30acu;

    // 0x1b30ac: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B30ACu;
    SET_GPR_U32(ctx, 31, 0x1B30B4u);
    ctx->pc = 0x1B30B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30ACu;
    // 0x1b30b0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B30ACu, 0x1B30B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30B4u;
label_1b30b4:
    // 0x1b30b4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B30B4u;
    {
        const bool branch_taken_0x1b30b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30B4u;
        // 0x1b30b8: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30b4) {
            ctx->pc = 0x1B30CCu;
            return;
        }
    }
    ctx->pc = 0x1B30BCu;
    // 0x1b30bc: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B30BCu;
    SET_GPR_U32(ctx, 31, 0x1B30C4u);
    ctx->pc = 0x1B30C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30BCu;
    // 0x1b30c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B30BCu, 0x1B30C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30C4u;
label_1b30c4:
    // 0x1b30c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B30C4u;
    {
        const bool branch_taken_0x1b30c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30C4u;
        // 0x1b30c8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30c4) {
            ctx->pc = 0x1B30F8u;
            return;
        }
    }
    ctx->pc = 0x1B30CCu;
}
