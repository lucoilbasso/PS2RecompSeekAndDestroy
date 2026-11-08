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

// Function: entry_001a0ab0
// Address: 0x1a0ab0 - 0x1a0ac0
void entry_001a0ab0_0x1a0ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0ab0_0x1a0ab0");
#endif

    switch (ctx->pc) {
        case 0x1a0abcu: goto label_1a0abc;
        default: break;
    }

    ctx->pc = 0x1a0ab0u;

    // 0x1a0ab0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1a0ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ab4: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0AB4u;
    SET_GPR_U32(ctx, 31, 0x1A0ABCu);
    ctx->pc = 0x1A0AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0AB4u;
    // 0x1a0ab8: 0x248490b8  addiu       $a0, $a0, -0x6F48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0AB4u, 0x1A0ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0ABCu;
label_1a0abc:
    // 0x1a0abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a0ac0u;
}
