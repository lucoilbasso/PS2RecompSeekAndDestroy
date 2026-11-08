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

// Function: entry_00136cd0
// Address: 0x136cd0 - 0x136cf0
void entry_00136cd0_0x136cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136cd0_0x136cd0");
#endif

    switch (ctx->pc) {
        case 0x136ce4u: goto label_136ce4;
        default: break;
    }

    ctx->pc = 0x136cd0u;

    // 0x136cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cd8: 0x24c667a8  addiu       $a2, $a2, 0x67A8
    ctx->pc = 0x136cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26536));
    // 0x136cdc: 0xc041606  jal         func_105818
    ctx->pc = 0x136CDCu;
    SET_GPR_U32(ctx, 31, 0x136CE4u);
    ctx->pc = 0x136CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CDCu;
    // 0x136ce0: 0x24070035  addiu       $a3, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105818u, 0x136CDCu, 0x136CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CE4u;
label_136ce4:
    // 0x136ce4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x136CE4u;
    {
        const bool branch_taken_0x136ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CE4u;
        // 0x136ce8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ce4) {
            ctx->pc = 0x136D14u;
            return;
        }
    }
    ctx->pc = 0x136CECu;
    // 0x136cec: 0x0  nop
    ctx->pc = 0x136cecu;
    // NOP
    ctx->pc = 0x136cf0u;
}
