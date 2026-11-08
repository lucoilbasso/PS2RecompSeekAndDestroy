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

// Function: entry_0014c94c
// Address: 0x14c94c - 0x14c958
void entry_0014c94c_0x14c94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c94c_0x14c94c");
#endif

    ctx->pc = 0x14c94cu;

    // 0x14c94c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x14c94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c950: 0xc041228  jal         func_1048A0
    ctx->pc = 0x14C950u;
    SET_GPR_U32(ctx, 31, 0x14C958u);
    ctx->pc = 0x14C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C950u;
    // 0x14c954: 0x8ce801b4  lw          $t0, 0x1B4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x14C950u, 0x14C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C958u;
}
