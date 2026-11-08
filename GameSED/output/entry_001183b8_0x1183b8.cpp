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

// Function: entry_001183b8
// Address: 0x1183b8 - 0x1183d0
void entry_001183b8_0x1183b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001183b8_0x1183b8");
#endif

    ctx->pc = 0x1183b8u;

    // 0x1183b8: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1183B8u;
    {
        const bool branch_taken_0x1183b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1183BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183B8u;
        // 0x1183bc: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183b8) {
            ctx->pc = 0x1183D0u;
            return;
        }
    }
    ctx->pc = 0x1183C0u;
    // 0x1183c0: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1183c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1183c4: 0xaf80896c  sw          $zero, -0x7694($gp)
    ctx->pc = 0x1183c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 0));
    // 0x1183c8: 0xc046378  jal         func_118DE0
    ctx->pc = 0x1183C8u;
    SET_GPR_U32(ctx, 31, 0x1183D0u);
    ctx->pc = 0x1183CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183C8u;
    // 0x1183cc: 0x248433b0  addiu       $a0, $a0, 0x33B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DE0u, 0x1183C8u, 0x1183D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183D0u;
}
