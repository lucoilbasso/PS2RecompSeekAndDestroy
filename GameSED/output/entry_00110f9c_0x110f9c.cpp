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

// Function: entry_00110f9c
// Address: 0x110f9c - 0x110fac
void entry_00110f9c_0x110f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110f9c_0x110f9c");
#endif

    switch (ctx->pc) {
        case 0x110fa8u: goto label_110fa8;
        default: break;
    }

    ctx->pc = 0x110f9cu;

    // 0x110f9c: 0x24a53eb8  addiu       $a1, $a1, 0x3EB8
    ctx->pc = 0x110f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16056));
    // 0x110fa0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x110FA0u;
    SET_GPR_U32(ctx, 31, 0x110FA8u);
    ctx->pc = 0x110FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FA0u;
    // 0x110fa4: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x110FA0u, 0x110FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FA8u;
label_110fa8:
    // 0x110fa8: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x110fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    ctx->pc = 0x110facu;
}
