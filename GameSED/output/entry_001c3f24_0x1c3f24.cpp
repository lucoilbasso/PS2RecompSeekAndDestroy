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

// Function: entry_001c3f24
// Address: 0x1c3f24 - 0x1c3f40
void entry_001c3f24_0x1c3f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3f24_0x1c3f24");
#endif

    switch (ctx->pc) {
        case 0x1c3f2cu: goto label_1c3f2c;
        case 0x1c3f38u: goto label_1c3f38;
        default: break;
    }

    ctx->pc = 0x1c3f24u;

    // 0x1c3f24: 0xc06c004  jal         func_1B0010
    ctx->pc = 0x1C3F24u;
    SET_GPR_U32(ctx, 31, 0x1C3F2Cu);
    ctx->pc = 0x1C3F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F24u;
    // 0x1c3f28: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0010u, 0x1C3F24u, 0x1C3F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F2Cu;
label_1c3f2c:
    // 0x1c3f2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c3f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f30: 0xc06bc64  jal         func_1AF190
    ctx->pc = 0x1C3F30u;
    SET_GPR_U32(ctx, 31, 0x1C3F38u);
    ctx->pc = 0x1C3F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F30u;
    // 0x1c3f34: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF190u, 0x1C3F30u, 0x1C3F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F38u;
label_1c3f38:
    // 0x1c3f38: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1C3F38u;
    {
        const bool branch_taken_0x1c3f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F38u;
        // 0x1c3f3c: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f38) {
            ctx->pc = 0x1C3FBCu;
            return;
        }
    }
    ctx->pc = 0x1C3F40u;
}
