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

// Function: entry_001144fc
// Address: 0x1144fc - 0x11450c
void entry_001144fc_0x1144fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001144fc_0x1144fc");
#endif

    switch (ctx->pc) {
        case 0x114508u: goto label_114508;
        default: break;
    }

    ctx->pc = 0x1144fcu;

    // 0x1144fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1144fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x114500: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114500u;
    SET_GPR_U32(ctx, 31, 0x114508u);
    ctx->pc = 0x114504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114500u;
    // 0x114504: 0x24060036  addiu       $a2, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114500u, 0x114508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114508u;
label_114508:
    // 0x114508: 0x97838920  lhu         $v1, -0x76E0($gp)
    ctx->pc = 0x114508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936864)));
    ctx->pc = 0x11450cu;
}
