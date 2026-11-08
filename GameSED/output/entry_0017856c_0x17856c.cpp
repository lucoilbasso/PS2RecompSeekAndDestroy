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

// Function: entry_0017856c
// Address: 0x17856c - 0x178590
void entry_0017856c_0x17856c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017856c_0x17856c");
#endif

    switch (ctx->pc) {
        case 0x178578u: goto label_178578;
        case 0x178580u: goto label_178580;
        case 0x178588u: goto label_178588;
        default: break;
    }

    ctx->pc = 0x17856cu;

    // 0x17856c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x178570: 0xc06e742  jal         func_1B9D08
    ctx->pc = 0x178570u;
    SET_GPR_U32(ctx, 31, 0x178578u);
    ctx->pc = 0x178574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178570u;
    // 0x178574: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D08u, 0x178570u, 0x178578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178578u;
label_178578:
    // 0x178578: 0xc06bcac  jal         func_1AF2B0
    ctx->pc = 0x178578u;
    SET_GPR_U32(ctx, 31, 0x178580u);
    ctx->pc = 0x17857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178578u;
    // 0x17857c: 0x8e041018  lw          $a0, 0x1018($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2B0u, 0x178578u, 0x178580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178580u;
label_178580:
    // 0x178580: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x178580u;
    SET_GPR_U32(ctx, 31, 0x178588u);
    ctx->pc = 0x178584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178580u;
    // 0x178584: 0x8e041010  lw          $a0, 0x1010($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x178580u, 0x178588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178588u;
label_178588:
    // 0x178588: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x178588u;
    SET_GPR_U32(ctx, 31, 0x178590u);
    ctx->pc = 0x17858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178588u;
    // 0x17858c: 0x8e041014  lw          $a0, 0x1014($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x178588u, 0x178590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178590u;
}
