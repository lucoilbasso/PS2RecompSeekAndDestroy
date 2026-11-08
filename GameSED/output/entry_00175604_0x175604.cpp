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

// Function: entry_00175604
// Address: 0x175604 - 0x175610
void entry_00175604_0x175604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175604_0x175604");
#endif

    switch (ctx->pc) {
        case 0x17560cu: goto label_17560c;
        default: break;
    }

    ctx->pc = 0x175604u;

    // 0x175604: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x175604u;
    SET_GPR_U32(ctx, 31, 0x17560Cu);
    ctx->pc = 0x175608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175604u;
    // 0x175608: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x175604u, 0x17560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17560Cu;
label_17560c:
    // 0x17560c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x175610u;
}
