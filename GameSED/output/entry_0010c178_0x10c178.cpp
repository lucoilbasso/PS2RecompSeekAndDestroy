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

// Function: entry_0010c178
// Address: 0x10c178 - 0x10c194
void entry_0010c178_0x10c178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c178_0x10c178");
#endif

    ctx->pc = 0x10c178u;

    // 0x10c178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c17c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c180: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10c180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10c184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c188: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c18c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C18Cu;
    SET_GPR_U32(ctx, 31, 0x10C194u);
    ctx->pc = 0x10C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C18Cu;
    // 0x10c190: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C18Cu, 0x10C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C194u;
}
