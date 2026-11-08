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

// Function: entry_0010f800
// Address: 0x10f800 - 0x10f810
void entry_0010f800_0x10f800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f800_0x10f800");
#endif

    ctx->pc = 0x10f800u;

    // 0x10f800: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f804: 0x102823  negu        $a1, $s0
    ctx->pc = 0x10f804u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x10f808: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x10F808u;
    SET_GPR_U32(ctx, 31, 0x10F810u);
    ctx->pc = 0x10F80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F808u;
    // 0x10f80c: 0x2484d178  addiu       $a0, $a0, -0x2E88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x10F808u, 0x10F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F810u;
}
