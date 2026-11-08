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

// Function: entry_0017c0bc
// Address: 0x17c0bc - 0x17c0c4
void entry_0017c0bc_0x17c0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c0bc_0x17c0bc");
#endif

    ctx->pc = 0x17c0bcu;

    // 0x17c0bc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17C0BCu;
    SET_GPR_U32(ctx, 31, 0x17C0C4u);
    ctx->pc = 0x17C0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C0BCu;
    // 0x17c0c0: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17C0BCu, 0x17C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0C4u;
}
