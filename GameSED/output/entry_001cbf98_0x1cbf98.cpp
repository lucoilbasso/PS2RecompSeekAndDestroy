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

// Function: entry_001cbf98
// Address: 0x1cbf98 - 0x1cbfb8
void entry_001cbf98_0x1cbf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbf98_0x1cbf98");
#endif

    switch (ctx->pc) {
        case 0x1cbfa8u: goto label_1cbfa8;
        default: break;
    }

    ctx->pc = 0x1cbf98u;

    // 0x1cbf98: 0x168a0007  bne         $s4, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBF98u;
    {
        const bool branch_taken_0x1cbf98 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 10));
        ctx->pc = 0x1CBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF98u;
        // 0x1cbf9c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf98) {
            ctx->pc = 0x1CBFB8u;
            return;
        }
    }
    ctx->pc = 0x1CBFA0u;
    // 0x1cbfa0: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CBFA0u;
    SET_GPR_U32(ctx, 31, 0x1CBFA8u);
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CBFA0u, 0x1CBFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFA8u;
label_1cbfa8:
    // 0x1cbfa8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBFA8u;
    {
        const bool branch_taken_0x1cbfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFA8u;
        // 0x1cbfac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfa8) {
            ctx->pc = 0x1CBFBCu;
            return;
        }
    }
    ctx->pc = 0x1CBFB0u;
    // 0x1cbfb0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CBFB0u;
    {
        const bool branch_taken_0x1cbfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFB0u;
        // 0x1cbfb4: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfb0) {
            ctx->pc = 0x1CBFDCu;
            return;
        }
    }
    ctx->pc = 0x1CBFB8u;
}
