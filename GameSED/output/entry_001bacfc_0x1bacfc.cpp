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

// Function: entry_001bacfc
// Address: 0x1bacfc - 0x1bad10
void entry_001bacfc_0x1bacfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bacfc_0x1bacfc");
#endif

    switch (ctx->pc) {
        case 0x1bad04u: goto label_1bad04;
        case 0x1bad0cu: goto label_1bad0c;
        default: break;
    }

    ctx->pc = 0x1bacfcu;

    // 0x1bacfc: 0xc06e810  jal         func_1BA040
    ctx->pc = 0x1BACFCu;
    SET_GPR_U32(ctx, 31, 0x1BAD04u);
    ctx->pc = 0x1BA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA040u, 0x1BACFCu, 0x1BAD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD04u;
label_1bad04:
    // 0x1bad04: 0xc06e88a  jal         func_1BA228
    ctx->pc = 0x1BAD04u;
    SET_GPR_U32(ctx, 31, 0x1BAD0Cu);
    ctx->pc = 0x1BA228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA228u, 0x1BAD04u, 0x1BAD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD0Cu;
label_1bad0c:
    // 0x1bad0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bad0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bad10u;
}
