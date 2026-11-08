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

// Function: entry_00108690
// Address: 0x108690 - 0x1086b0
void entry_00108690_0x108690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108690_0x108690");
#endif

    ctx->pc = 0x108690u;

    // 0x108690: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x108690u;
    {
        const bool branch_taken_0x108690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108690u;
        // 0x108694: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108690) {
            ctx->pc = 0x1086C4u;
            return;
        }
    }
    ctx->pc = 0x108698u;
    // 0x108698: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x108698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10869c: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x10869cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x1086a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1086a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1086a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086a8: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x1086A8u;
    SET_GPR_U32(ctx, 31, 0x1086B0u);
    ctx->pc = 0x1086ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086A8u;
    // 0x1086ac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x1086A8u, 0x1086B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086B0u;
}
