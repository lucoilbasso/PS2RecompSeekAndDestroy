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

// Function: entry_00156b84
// Address: 0x156b84 - 0x156b8c
void entry_00156b84_0x156b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156b84_0x156b84");
#endif

    ctx->pc = 0x156b84u;

    // 0x156b84: 0xc055ae6  jal         func_156B98
    ctx->pc = 0x156B84u;
    SET_GPR_U32(ctx, 31, 0x156B8Cu);
    ctx->pc = 0x156B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B84u;
    // 0x156b88: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156B98u, 0x156B84u, 0x156B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B8Cu;
}
