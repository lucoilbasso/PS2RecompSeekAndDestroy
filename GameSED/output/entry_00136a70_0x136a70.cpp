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

// Function: entry_00136a70
// Address: 0x136a70 - 0x136a80
void entry_00136a70_0x136a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136a70_0x136a70");
#endif

    switch (ctx->pc) {
        case 0x136a7cu: goto label_136a7c;
        default: break;
    }

    ctx->pc = 0x136a70u;

    // 0x136a70: 0x36851000  ori         $a1, $s4, 0x1000
    ctx->pc = 0x136a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4096);
    // 0x136a74: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x136A74u;
    SET_GPR_U32(ctx, 31, 0x136A7Cu);
    ctx->pc = 0x136A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A74u;
    // 0x136a78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x136A74u, 0x136A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A7Cu;
label_136a7c:
    // 0x136a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x136a80u;
}
