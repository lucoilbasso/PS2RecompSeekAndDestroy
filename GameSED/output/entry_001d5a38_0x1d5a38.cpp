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

// Function: entry_001d5a38
// Address: 0x1d5a38 - 0x1d5a60
void entry_001d5a38_0x1d5a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5a38_0x1d5a38");
#endif

    switch (ctx->pc) {
        case 0x1d5a50u: goto label_1d5a50;
        default: break;
    }

    ctx->pc = 0x1d5a38u;

    // 0x1d5a38: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5A38u;
    {
        const bool branch_taken_0x1d5a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a38) {
            ctx->pc = 0x1D5A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5A38u;
            // 0x1d5a3c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5A60u;
            return;
        }
    }
    ctx->pc = 0x1D5A40u;
    // 0x1d5a40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d5a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d5a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a48: 0xc0755ea  jal         func_1D57A8
    ctx->pc = 0x1D5A48u;
    SET_GPR_U32(ctx, 31, 0x1D5A50u);
    ctx->pc = 0x1D5A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A48u;
    // 0x1d5a4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D57A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D57A8u, 0x1D5A48u, 0x1D5A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A50u;
label_1d5a50:
    // 0x1d5a50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d5a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d5a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d5a58: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d5a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d5a5c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1d5a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d5a60u;
}
