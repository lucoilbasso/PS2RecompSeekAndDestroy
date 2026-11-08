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

// Function: entry_001c6b14
// Address: 0x1c6b14 - 0x1c6b24
void entry_001c6b14_0x1c6b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6b14_0x1c6b14");
#endif

    switch (ctx->pc) {
        case 0x1c6b20u: goto label_1c6b20;
        default: break;
    }

    ctx->pc = 0x1c6b14u;

    // 0x1c6b14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c6b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b18: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6B18u;
    SET_GPR_U32(ctx, 31, 0x1C6B20u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6B18u, 0x1C6B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B20u;
label_1c6b20:
    // 0x1c6b20: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c6b20u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1c6b24u;
}
