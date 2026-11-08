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

// Function: entry_00110c80
// Address: 0x110c80 - 0x110c8c
void entry_00110c80_0x110c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110c80_0x110c80");
#endif

    switch (ctx->pc) {
        case 0x110c88u: goto label_110c88;
        default: break;
    }

    ctx->pc = 0x110c80u;

    // 0x110c80: 0xc052850  jal         func_14A140
    ctx->pc = 0x110C80u;
    SET_GPR_U32(ctx, 31, 0x110C88u);
    ctx->pc = 0x14A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A140u, 0x110C80u, 0x110C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C88u;
label_110c88:
    // 0x110c88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x110c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x110c8cu;
}
