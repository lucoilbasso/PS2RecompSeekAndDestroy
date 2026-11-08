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

// Function: entry_00199614
// Address: 0x199614 - 0x199630
void entry_00199614_0x199614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199614_0x199614");
#endif

    switch (ctx->pc) {
        case 0x199620u: goto label_199620;
        default: break;
    }

    ctx->pc = 0x199614u;

    // 0x199614: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x199614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x199618: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x199618u;
    SET_GPR_U32(ctx, 31, 0x199620u);
    ctx->pc = 0x19961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199618u;
    // 0x19961c: 0x2484de80  addiu       $a0, $a0, -0x2180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x199618u, 0x199620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199620u;
label_199620:
    // 0x199620: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x199620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x199624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199628: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x199628u;
    SET_GPR_U32(ctx, 31, 0x199630u);
    ctx->pc = 0x19962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199628u;
    // 0x19962c: 0x2484de98  addiu       $a0, $a0, -0x2168 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x199628u, 0x199630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199630u;
}
