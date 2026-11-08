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

// Function: entry_001cbfbc
// Address: 0x1cbfbc - 0x1cbfdc
void entry_001cbfbc_0x1cbfbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbfbc_0x1cbfbc");
#endif

    switch (ctx->pc) {
        case 0x1cbfc4u: goto label_1cbfc4;
        default: break;
    }

    ctx->pc = 0x1cbfbcu;

    // 0x1cbfbc: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CBFBCu;
    SET_GPR_U32(ctx, 31, 0x1CBFC4u);
    ctx->pc = 0x1CBFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBFBCu;
    // 0x1cbfc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CBFBCu, 0x1CBFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFC4u;
label_1cbfc4:
    // 0x1cbfc4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBFC4u;
    {
        const bool branch_taken_0x1cbfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbfc4) {
            ctx->pc = 0x1CBFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBFC4u;
            // 0x1cbfc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBFE4u;
            return;
        }
    }
    ctx->pc = 0x1CBFCCu;
    // 0x1cbfcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cbfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbfd0: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x1cbfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x1cbfd4: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1cbfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1cbfd8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1cbfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x1cbfdcu;
}
