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

// Function: entry_0014cfac
// Address: 0x14cfac - 0x14cfb4
void entry_0014cfac_0x14cfac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cfac_0x14cfac");
#endif

    ctx->pc = 0x14cfacu;

    // 0x14cfac: 0xc052f32  jal         func_14BCC8
    ctx->pc = 0x14CFACu;
    SET_GPR_U32(ctx, 31, 0x14CFB4u);
    ctx->pc = 0x14BCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BCC8u, 0x14CFACu, 0x14CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CFB4u;
}
