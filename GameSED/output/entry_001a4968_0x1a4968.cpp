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

// Function: entry_001a4968
// Address: 0x1a4968 - 0x1a497c
void entry_001a4968_0x1a4968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4968_0x1a4968");
#endif

    ctx->pc = 0x1a4968u;

    // 0x1a4968: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a4968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a496c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a496cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4970: 0x24a59268  addiu       $a1, $a1, -0x6D98
    ctx->pc = 0x1a4970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939240));
    // 0x1a4974: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A4974u;
    SET_GPR_U32(ctx, 31, 0x1A497Cu);
    ctx->pc = 0x1A4978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4974u;
    // 0x1a4978: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A4974u, 0x1A497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A497Cu;
}
