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

// Function: entry_00128a40
// Address: 0x128a40 - 0x128a58
void entry_00128a40_0x128a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128a40_0x128a40");
#endif

    switch (ctx->pc) {
        case 0x128a4cu: goto label_128a4c;
        default: break;
    }

    ctx->pc = 0x128a40u;

    // 0x128a40: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x128a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x128a44: 0xc067a86  jal         func_19EA18
    ctx->pc = 0x128A44u;
    SET_GPR_U32(ctx, 31, 0x128A4Cu);
    ctx->pc = 0x128A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A44u;
    // 0x128a48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EA18u, 0x128A44u, 0x128A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A4Cu;
label_128a4c:
    // 0x128a4c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x128a4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a50: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x128a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x128a54: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x128a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->pc = 0x128a58u;
}
