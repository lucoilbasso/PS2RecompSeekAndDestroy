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

// Function: entry_001864b4
// Address: 0x1864b4 - 0x1864bc
void entry_001864b4_0x1864b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001864b4_0x1864b4");
#endif

    ctx->pc = 0x1864b4u;

    // 0x1864b4: 0xc061934  jal         func_1864D0
    ctx->pc = 0x1864B4u;
    SET_GPR_U32(ctx, 31, 0x1864BCu);
    ctx->pc = 0x1864B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1864B4u;
    // 0x1864b8: 0xa6230002  sh          $v1, 0x2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1864D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1864D0u, 0x1864B4u, 0x1864BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1864BCu;
}
