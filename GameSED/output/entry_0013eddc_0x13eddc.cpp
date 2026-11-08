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

// Function: entry_0013eddc
// Address: 0x13eddc - 0x13ede8
void entry_0013eddc_0x13eddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eddc_0x13eddc");
#endif

    ctx->pc = 0x13eddcu;

    // 0x13eddc: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x13eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x13ede0: 0xc04f604  jal         func_13D810
    ctx->pc = 0x13EDE0u;
    SET_GPR_U32(ctx, 31, 0x13EDE8u);
    ctx->pc = 0x13EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EDE0u;
    // 0x13ede4: 0x24a5e140  addiu       $a1, $a1, -0x1EC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D810u, 0x13EDE0u, 0x13EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDE8u;
}
