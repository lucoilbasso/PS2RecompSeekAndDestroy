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

// Function: entry_001bb4c4
// Address: 0x1bb4c4 - 0x1bb4dc
void entry_001bb4c4_0x1bb4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb4c4_0x1bb4c4");
#endif

    switch (ctx->pc) {
        case 0x1bb4d8u: goto label_1bb4d8;
        default: break;
    }

    ctx->pc = 0x1bb4c4u;

    // 0x1bb4c4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bb4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bb4c8: 0x2111825  or          $v1, $s0, $s1
    ctx->pc = 0x1bb4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x1bb4cc: 0x8c44c0ac  lw          $a0, -0x3F54($v0)
    ctx->pc = 0x1bb4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24C0ACu));
    // 0x1bb4d0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BB4D0u;
    SET_GPR_U32(ctx, 31, 0x1BB4D8u);
    ctx->pc = 0x1BB4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4D0u;
    // 0x1bb4d4: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BB4D0u, 0x1BB4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4D8u;
label_1bb4d8:
    // 0x1bb4d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bb4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb4dcu;
}
