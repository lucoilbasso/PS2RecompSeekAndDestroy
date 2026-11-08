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

// Function: entry_0017fbfc
// Address: 0x17fbfc - 0x17fc1c
void entry_0017fbfc_0x17fbfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fbfc_0x17fbfc");
#endif

    switch (ctx->pc) {
        case 0x17fc04u: goto label_17fc04;
        default: break;
    }

    ctx->pc = 0x17fbfcu;

    // 0x17fbfc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17FBFCu;
    SET_GPR_U32(ctx, 31, 0x17FC04u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17FBFCu, 0x17FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC04u;
label_17fc04:
    // 0x17fc04: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x17fc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17fc08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17fc08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FC0Cu;
    {
        const bool branch_taken_0x17fc0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC0Cu;
        // 0x17fc10: 0xae060028  sw          $a2, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc0c) {
            ctx->pc = 0x17FC1Cu;
            return;
        }
    }
    ctx->pc = 0x17FC14u;
    // 0x17fc14: 0x54c00012  bnel        $a2, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x17FC14u;
    {
        const bool branch_taken_0x17fc14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fc14) {
            ctx->pc = 0x17FC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FC14u;
            // 0x17fc18: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FC60u;
            return;
        }
    }
    ctx->pc = 0x17FC1Cu;
}
