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

// Function: entry_0016ef00
// Address: 0x16ef00 - 0x16ef0c
void entry_0016ef00_0x16ef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ef00_0x16ef00");
#endif

    switch (ctx->pc) {
        case 0x16ef08u: goto label_16ef08;
        default: break;
    }

    ctx->pc = 0x16ef00u;

    // 0x16ef00: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x16EF00u;
    SET_GPR_U32(ctx, 31, 0x16EF08u);
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x16EF00u, 0x16EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF08u;
label_16ef08:
    // 0x16ef08: 0xe62002e4  swc1        $f0, 0x2E4($s1)
    ctx->pc = 0x16ef08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 740), bits); }
    ctx->pc = 0x16ef0cu;
}
