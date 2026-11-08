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

// Function: entry_0011227c
// Address: 0x11227c - 0x112298
void entry_0011227c_0x11227c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011227c_0x11227c");
#endif

    switch (ctx->pc) {
        case 0x11228cu: goto label_11228c;
        default: break;
    }

    ctx->pc = 0x11227cu;

    // 0x11227c: 0x3c160026  lui         $s6, 0x26
    ctx->pc = 0x11227cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)38 << 16));
    // 0x112280: 0x26d6f720  addiu       $s6, $s6, -0x8E0
    ctx->pc = 0x112280u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965024));
    // 0x112284: 0xc061468  jal         func_1851A0
    ctx->pc = 0x112284u;
    SET_GPR_U32(ctx, 31, 0x11228Cu);
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x112284u, 0x11228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11228Cu;
label_11228c:
    // 0x11228c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x11228Cu;
    {
        const bool branch_taken_0x11228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11228c) {
            ctx->pc = 0x1123F8u;
            return;
        }
    }
    ctx->pc = 0x112294u;
    // 0x112294: 0x0  nop
    ctx->pc = 0x112294u;
    // NOP
    ctx->pc = 0x112298u;
}
