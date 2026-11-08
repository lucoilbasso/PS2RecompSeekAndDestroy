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

// Function: entry_0013bc70
// Address: 0x13bc70 - 0x13bc88
void entry_0013bc70_0x13bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bc70_0x13bc70");
#endif

    switch (ctx->pc) {
        case 0x13bc84u: goto label_13bc84;
        default: break;
    }

    ctx->pc = 0x13bc70u;

    // 0x13bc70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13bc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13bc74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc78: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x13bc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc7c: 0xc04ef3e  jal         func_13BCF8
    ctx->pc = 0x13BC7Cu;
    SET_GPR_U32(ctx, 31, 0x13BC84u);
    ctx->pc = 0x13BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC7Cu;
    // 0x13bc80: 0xae800028  sw          $zero, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BCF8u, 0x13BC7Cu, 0x13BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC84u;
label_13bc84:
    // 0x13bc84: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x13bc84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13bc88u;
}
