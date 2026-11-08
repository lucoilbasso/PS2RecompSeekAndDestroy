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

// Function: entry_00145eb0
// Address: 0x145eb0 - 0x145ebc
void entry_00145eb0_0x145eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145eb0_0x145eb0");
#endif

    ctx->pc = 0x145eb0u;

    // 0x145eb0: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x145eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x145eb4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145EB4u;
    SET_GPR_U32(ctx, 31, 0x145EBCu);
    ctx->pc = 0x145EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145EB4u;
    // 0x145eb8: 0x24a56a68  addiu       $a1, $a1, 0x6A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145EB4u, 0x145EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EBCu;
}
