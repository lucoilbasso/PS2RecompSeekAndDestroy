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

// Function: entry_00155ecc
// Address: 0x155ecc - 0x155ed4
void entry_00155ecc_0x155ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155ecc_0x155ecc");
#endif

    ctx->pc = 0x155eccu;

    // 0x155ecc: 0xc052e82  jal         func_14BA08
    ctx->pc = 0x155ECCu;
    SET_GPR_U32(ctx, 31, 0x155ED4u);
    ctx->pc = 0x14BA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BA08u, 0x155ECCu, 0x155ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155ED4u;
}
