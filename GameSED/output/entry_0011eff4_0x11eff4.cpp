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

// Function: entry_0011eff4
// Address: 0x11eff4 - 0x11f00c
void entry_0011eff4_0x11eff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eff4_0x11eff4");
#endif

    ctx->pc = 0x11eff4u;

    // 0x11eff4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11eff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11eff8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x11eff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11effc: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x11effcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x11f000: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x11f000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x11f004: 0xc067a86  jal         func_19EA18
    ctx->pc = 0x11F004u;
    SET_GPR_U32(ctx, 31, 0x11F00Cu);
    ctx->pc = 0x11F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F004u;
    // 0x11f008: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EA18u, 0x11F004u, 0x11F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F00Cu;
}
