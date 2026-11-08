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

// Function: entry_00141398
// Address: 0x141398 - 0x1413a8
void entry_00141398_0x141398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141398_0x141398");
#endif

    switch (ctx->pc) {
        case 0x1413a4u: goto label_1413a4;
        default: break;
    }

    ctx->pc = 0x141398u;

    // 0x141398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14139c: 0xc05045e  jal         func_141178
    ctx->pc = 0x14139Cu;
    SET_GPR_U32(ctx, 31, 0x1413A4u);
    ctx->pc = 0x1413A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14139Cu;
    // 0x1413a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141178u, 0x14139Cu, 0x1413A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1413A4u;
label_1413a4:
    // 0x1413a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1413a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1413a8u;
}
