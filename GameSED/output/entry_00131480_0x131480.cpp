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

// Function: entry_00131480
// Address: 0x131480 - 0x131490
void entry_00131480_0x131480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131480_0x131480");
#endif

    ctx->pc = 0x131480u;

    // 0x131480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131484: 0x8f878a14  lw          $a3, -0x75EC($gp)
    ctx->pc = 0x131484u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
    // 0x131488: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x131488u;
    SET_GPR_U32(ctx, 31, 0x131490u);
    ctx->pc = 0x13148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131488u;
    // 0x13148c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x131488u, 0x131490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131490u;
}
