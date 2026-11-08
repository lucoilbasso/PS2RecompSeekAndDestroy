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

// Function: entry_00109ba8
// Address: 0x109ba8 - 0x109bb8
void entry_00109ba8_0x109ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109ba8_0x109ba8");
#endif

    switch (ctx->pc) {
        case 0x109bb4u: goto label_109bb4;
        default: break;
    }

    ctx->pc = 0x109ba8u;

    // 0x109ba8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bac: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x109BACu;
    SET_GPR_U32(ctx, 31, 0x109BB4u);
    ctx->pc = 0x109BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BACu;
    // 0x109bb0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x109BACu, 0x109BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BB4u;
label_109bb4:
    // 0x109bb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109bb8u;
}
