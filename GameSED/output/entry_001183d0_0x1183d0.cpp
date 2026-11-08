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

// Function: entry_001183d0
// Address: 0x1183d0 - 0x1183e0
void entry_001183d0_0x1183d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001183d0_0x1183d0");
#endif

    switch (ctx->pc) {
        case 0x1183dcu: goto label_1183dc;
        default: break;
    }

    ctx->pc = 0x1183d0u;

    // 0x1183d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1183d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183d4: 0xc046104  jal         func_118410
    ctx->pc = 0x1183D4u;
    SET_GPR_U32(ctx, 31, 0x1183DCu);
    ctx->pc = 0x1183D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183D4u;
    // 0x1183d8: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x1183D4u, 0x1183DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183DCu;
label_1183dc:
    // 0x1183dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1183dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1183e0u;
}
