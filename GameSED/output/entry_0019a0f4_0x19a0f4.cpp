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

// Function: entry_0019a0f4
// Address: 0x19a0f4 - 0x19a0fc
void entry_0019a0f4_0x19a0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a0f4_0x19a0f4");
#endif

    ctx->pc = 0x19a0f4u;

    // 0x19a0f4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x19A0F4u;
    SET_GPR_U32(ctx, 31, 0x19A0FCu);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x19A0F4u, 0x19A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A0FCu;
}
