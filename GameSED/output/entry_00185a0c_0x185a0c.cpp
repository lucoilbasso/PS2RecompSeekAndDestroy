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

// Function: entry_00185a0c
// Address: 0x185a0c - 0x185a20
void entry_00185a0c_0x185a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185a0c_0x185a0c");
#endif

    switch (ctx->pc) {
        case 0x185a1cu: goto label_185a1c;
        default: break;
    }

    ctx->pc = 0x185a0cu;

    // 0x185a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x185a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a14: 0xc068866  jal         func_1A2198
    ctx->pc = 0x185A14u;
    SET_GPR_U32(ctx, 31, 0x185A1Cu);
    ctx->pc = 0x185A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A14u;
    // 0x185a18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x185A14u, 0x185A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185A1Cu;
label_185a1c:
    // 0x185a1c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x185a1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x185a20u;
}
