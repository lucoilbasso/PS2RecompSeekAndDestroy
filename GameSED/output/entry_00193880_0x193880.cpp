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

// Function: entry_00193880
// Address: 0x193880 - 0x193890
void entry_00193880_0x193880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193880_0x193880");
#endif

    switch (ctx->pc) {
        case 0x19388cu: goto label_19388c;
        default: break;
    }

    ctx->pc = 0x193880u;

    // 0x193880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193884: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x193884u;
    SET_GPR_U32(ctx, 31, 0x19388Cu);
    ctx->pc = 0x193888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193884u;
    // 0x193888: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x193884u, 0x19388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19388Cu;
label_19388c:
    // 0x19388c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19388cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x193890u;
}
