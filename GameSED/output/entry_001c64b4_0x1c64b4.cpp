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

// Function: entry_001c64b4
// Address: 0x1c64b4 - 0x1c64bc
void entry_001c64b4_0x1c64b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c64b4_0x1c64b4");
#endif

    ctx->pc = 0x1c64b4u;

    // 0x1c64b4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C64B4u;
    SET_GPR_U32(ctx, 31, 0x1C64BCu);
    ctx->pc = 0x1C64B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64B4u;
    // 0x1c64b8: 0x8e64ddfc  lw          $a0, -0x2204($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C64B4u, 0x1C64BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64BCu;
}
