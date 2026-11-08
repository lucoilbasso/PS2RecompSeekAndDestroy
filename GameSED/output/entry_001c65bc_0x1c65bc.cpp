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

// Function: entry_001c65bc
// Address: 0x1c65bc - 0x1c65c4
void entry_001c65bc_0x1c65bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c65bc_0x1c65bc");
#endif

    ctx->pc = 0x1c65bcu;

    // 0x1c65bc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C65BCu;
    SET_GPR_U32(ctx, 31, 0x1C65C4u);
    ctx->pc = 0x1C65C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C65BCu;
    // 0x1c65c0: 0x8e24ddfc  lw          $a0, -0x2204($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C65BCu, 0x1C65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65C4u;
}
