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

// Function: entry_00160b80
// Address: 0x160b80 - 0x160b8c
void entry_00160b80_0x160b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b80_0x160b80");
#endif

    switch (ctx->pc) {
        case 0x160b88u: goto label_160b88;
        default: break;
    }

    ctx->pc = 0x160b80u;

    // 0x160b80: 0xc0573e2  jal         func_15CF88
    ctx->pc = 0x160B80u;
    SET_GPR_U32(ctx, 31, 0x160B88u);
    ctx->pc = 0x160B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160B80u;
    // 0x160b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF88u, 0x160B80u, 0x160B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B88u;
label_160b88:
    // 0x160b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x160b8cu;
}
