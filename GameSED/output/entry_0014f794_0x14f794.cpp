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

// Function: entry_0014f794
// Address: 0x14f794 - 0x14f7a0
void entry_0014f794_0x14f794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f794_0x14f794");
#endif

    switch (ctx->pc) {
        case 0x14f79cu: goto label_14f79c;
        default: break;
    }

    ctx->pc = 0x14f794u;

    // 0x14f794: 0xc066eea  jal         func_19BBA8
    ctx->pc = 0x14F794u;
    SET_GPR_U32(ctx, 31, 0x14F79Cu);
    ctx->pc = 0x14F798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F794u;
    // 0x14f798: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x14F794u, 0x14F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F79Cu;
label_14f79c:
    // 0x14f79c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x14f7a0u;
}
