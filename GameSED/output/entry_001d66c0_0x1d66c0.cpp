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

// Function: entry_001d66c0
// Address: 0x1d66c0 - 0x1d66e8
void entry_001d66c0_0x1d66c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d66c0_0x1d66c0");
#endif

    switch (ctx->pc) {
        case 0x1d66ccu: goto label_1d66cc;
        default: break;
    }

    ctx->pc = 0x1d66c0u;

    // 0x1d66c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d66c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d66c4: 0xc06bf06  jal         func_1AFC18
    ctx->pc = 0x1D66C4u;
    SET_GPR_U32(ctx, 31, 0x1D66CCu);
    ctx->pc = 0x1D66C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D66C4u;
    // 0x1d66c8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFC18u, 0x1D66C4u, 0x1D66CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66CCu;
label_1d66cc:
    // 0x1d66cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d66ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d66d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d66d4: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D66D4u;
    {
        const bool branch_taken_0x1d66d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d66d4) {
            ctx->pc = 0x1D66D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D66D4u;
            // 0x1d66d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D66ECu;
            return;
        }
    }
    ctx->pc = 0x1D66DCu;
    // 0x1d66dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d66dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d66e0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D66E0u;
    {
        const bool branch_taken_0x1d66e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d66e0) {
            ctx->pc = 0x1D66E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D66E0u;
            // 0x1d66e4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D66E8u;
            return;
        }
    }
    ctx->pc = 0x1D66E8u;
}
