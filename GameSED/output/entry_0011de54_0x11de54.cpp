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

// Function: entry_0011de54
// Address: 0x11de54 - 0x11de5c
void entry_0011de54_0x11de54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011de54_0x11de54");
#endif

    ctx->pc = 0x11de54u;

    // 0x11de54: 0xc05f06e  jal         func_17C1B8
    ctx->pc = 0x11DE54u;
    SET_GPR_U32(ctx, 31, 0x11DE5Cu);
    ctx->pc = 0x11DE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE54u;
    // 0x11de58: 0x8c440038  lw          $a0, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C1B8u, 0x11DE54u, 0x11DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE5Cu;
}
