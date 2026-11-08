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

// Function: entry_00184ee0
// Address: 0x184ee0 - 0x184eec
void entry_00184ee0_0x184ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184ee0_0x184ee0");
#endif

    switch (ctx->pc) {
        case 0x184ee8u: goto label_184ee8;
        default: break;
    }

    ctx->pc = 0x184ee0u;

    // 0x184ee0: 0xc067a86  jal         func_19EA18
    ctx->pc = 0x184EE0u;
    SET_GPR_U32(ctx, 31, 0x184EE8u);
    ctx->pc = 0x184EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184EE0u;
    // 0x184ee4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EA18u, 0x184EE0u, 0x184EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184EE8u;
label_184ee8:
    // 0x184ee8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x184ee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->pc = 0x184eecu;
}
