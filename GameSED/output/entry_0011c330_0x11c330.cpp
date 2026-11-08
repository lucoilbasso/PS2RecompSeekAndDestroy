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

// Function: entry_0011c330
// Address: 0x11c330 - 0x11c33c
void entry_0011c330_0x11c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c330_0x11c330");
#endif

    ctx->pc = 0x11c330u;

    // 0x11c330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c334: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x11C334u;
    SET_GPR_U32(ctx, 31, 0x11C33Cu);
    ctx->pc = 0x11C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C334u;
    // 0x11c338: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x11C334u, 0x11C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C33Cu;
}
