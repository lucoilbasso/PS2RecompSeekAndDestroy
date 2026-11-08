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

// Function: entry_001bcf40
// Address: 0x1bcf40 - 0x1bcf50
void entry_001bcf40_0x1bcf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcf40_0x1bcf40");
#endif

    switch (ctx->pc) {
        case 0x1bcf4cu: goto label_1bcf4c;
        default: break;
    }

    ctx->pc = 0x1bcf40u;

    // 0x1bcf40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf44: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCF44u;
    SET_GPR_U32(ctx, 31, 0x1BCF4Cu);
    ctx->pc = 0x1BCF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF44u;
    // 0x1bcf48: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCF44u, 0x1BCF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF4Cu;
label_1bcf4c:
    // 0x1bcf4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bcf50u;
}
