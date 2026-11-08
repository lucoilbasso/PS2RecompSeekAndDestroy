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

// Function: entry_00194d40
// Address: 0x194d40 - 0x194d50
void entry_00194d40_0x194d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194d40_0x194d40");
#endif

    switch (ctx->pc) {
        case 0x194d4cu: goto label_194d4c;
        default: break;
    }

    ctx->pc = 0x194d40u;

    // 0x194d40: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x194d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x194d44: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x194D44u;
    SET_GPR_U32(ctx, 31, 0x194D4Cu);
    ctx->pc = 0x194D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D44u;
    // 0x194d48: 0x248463f0  addiu       $a0, $a0, 0x63F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x194D44u, 0x194D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D4Cu;
label_194d4c:
    // 0x194d4c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x194d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x194d50u;
}
