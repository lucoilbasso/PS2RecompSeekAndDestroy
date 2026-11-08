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

// Function: entry_0012ed0c
// Address: 0x12ed0c - 0x12ed1c
void entry_0012ed0c_0x12ed0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ed0c_0x12ed0c");
#endif

    ctx->pc = 0x12ed0cu;

    // 0x12ed0c: 0xae510154  sw          $s1, 0x154($s2)
    ctx->pc = 0x12ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 17));
    // 0x12ed10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ed10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed14: 0xc04bbf0  jal         func_12EFC0
    ctx->pc = 0x12ED14u;
    SET_GPR_U32(ctx, 31, 0x12ED1Cu);
    ctx->pc = 0x12ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED14u;
    // 0x12ed18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFC0u, 0x12ED14u, 0x12ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED1Cu;
}
