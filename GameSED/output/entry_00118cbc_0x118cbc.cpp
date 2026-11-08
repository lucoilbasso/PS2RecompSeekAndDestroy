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

// Function: entry_00118cbc
// Address: 0x118cbc - 0x118cc0
void entry_00118cbc_0x118cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118cbc_0x118cbc");
#endif

    ctx->pc = 0x118cbcu;

    // 0x118cbc: 0xc045360  jal         func_114D80
    ctx->pc = 0x118CBCu;
    SET_GPR_U32(ctx, 31, 0x118CC4u);
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x118CBCu, 0x118CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CC4u;
}
