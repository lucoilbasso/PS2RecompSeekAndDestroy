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

// Function: entry_0018a958
// Address: 0x18a958 - 0x18a960
void entry_0018a958_0x18a958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a958_0x18a958");
#endif

    ctx->pc = 0x18a958u;

    // 0x18a958: 0xc0629a2  jal         func_18A688
    ctx->pc = 0x18A958u;
    SET_GPR_U32(ctx, 31, 0x18A960u);
    ctx->pc = 0x18A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A958u;
    // 0x18a95c: 0xa620000e  sh          $zero, 0xE($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A688u, 0x18A958u, 0x18A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A960u;
}
