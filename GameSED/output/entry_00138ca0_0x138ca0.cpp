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

// Function: entry_00138ca0
// Address: 0x138ca0 - 0x138cac
void entry_00138ca0_0x138ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138ca0_0x138ca0");
#endif

    ctx->pc = 0x138ca0u;

    // 0x138ca0: 0x8ce801b4  lw          $t0, 0x1B4($a3)
    ctx->pc = 0x138ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x138ca4: 0xc041228  jal         func_1048A0
    ctx->pc = 0x138CA4u;
    SET_GPR_U32(ctx, 31, 0x138CACu);
    ctx->pc = 0x138CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138CA4u;
    // 0x138ca8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x138CA4u, 0x138CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138CACu;
}
