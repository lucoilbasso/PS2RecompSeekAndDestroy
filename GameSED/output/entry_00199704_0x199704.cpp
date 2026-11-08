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

// Function: entry_00199704
// Address: 0x199704 - 0x19970c
void entry_00199704_0x199704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199704_0x199704");
#endif

    ctx->pc = 0x199704u;

    // 0x199704: 0xc066622  jal         func_199888
    ctx->pc = 0x199704u;
    SET_GPR_U32(ctx, 31, 0x19970Cu);
    ctx->pc = 0x199708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199704u;
    // 0x199708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199888u, 0x199704u, 0x19970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19970Cu;
}
