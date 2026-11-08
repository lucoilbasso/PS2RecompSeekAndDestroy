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

// Function: entry_0011cc68
// Address: 0x11cc68 - 0x11cc78
void entry_0011cc68_0x11cc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cc68_0x11cc68");
#endif

    ctx->pc = 0x11cc68u;

    // 0x11cc68: 0x26254600  addiu       $a1, $s1, 0x4600
    ctx->pc = 0x11cc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17920));
    // 0x11cc6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc70: 0xc06cc4a  jal         func_1B3128
    ctx->pc = 0x11CC70u;
    SET_GPR_U32(ctx, 31, 0x11CC78u);
    ctx->pc = 0x11CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC70u;
    // 0x11cc74: 0x34069800  ori         $a2, $zero, 0x9800 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3128u, 0x11CC70u, 0x11CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC78u;
}
