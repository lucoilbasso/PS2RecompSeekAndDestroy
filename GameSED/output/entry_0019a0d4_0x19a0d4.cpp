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

// Function: entry_0019a0d4
// Address: 0x19a0d4 - 0x19a0ec
void entry_0019a0d4_0x19a0d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a0d4_0x19a0d4");
#endif

    switch (ctx->pc) {
        case 0x19a0e0u: goto label_19a0e0;
        default: break;
    }

    ctx->pc = 0x19a0d4u;

    // 0x19a0d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a0d8: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x19A0D8u;
    SET_GPR_U32(ctx, 31, 0x19A0E0u);
    ctx->pc = 0x19A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0D8u;
    // 0x19a0dc: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x19A0D8u, 0x19A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A0E0u;
label_19a0e0:
    // 0x19a0e0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x19a0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19a0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0e8: 0x24a58498  addiu       $a1, $a1, -0x7B68
    ctx->pc = 0x19a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935704));
    ctx->pc = 0x19a0ecu;
}
