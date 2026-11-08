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

// Function: entry_00155c38
// Address: 0x155c38 - 0x155c40
void entry_00155c38_0x155c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155c38_0x155c38");
#endif

    ctx->pc = 0x155c38u;

    // 0x155c38: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x155C38u;
    SET_GPR_U32(ctx, 31, 0x155C40u);
    ctx->pc = 0x155C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C38u;
    // 0x155c3c: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x155C38u, 0x155C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C40u;
}
