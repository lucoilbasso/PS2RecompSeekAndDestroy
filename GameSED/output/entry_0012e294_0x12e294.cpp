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

// Function: entry_0012e294
// Address: 0x12e294 - 0x12e2c0
void entry_0012e294_0x12e294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e294_0x12e294");
#endif

    switch (ctx->pc) {
        case 0x12e2a4u: goto label_12e2a4;
        default: break;
    }

    ctx->pc = 0x12e294u;

    // 0x12e294: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x12e294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x12e298: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e29c: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E29Cu;
    SET_GPR_U32(ctx, 31, 0x12E2A4u);
    ctx->pc = 0x12E2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E29Cu;
    // 0x12e2a0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E29Cu, 0x12E2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2A4u;
label_12e2a4:
    // 0x12e2a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2a8: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E2A8u;
    {
        const bool branch_taken_0x12e2a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e2a8) {
            ctx->pc = 0x12E2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E2A8u;
            // 0x12e2ac: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E2C8u;
            return;
        }
    }
    ctx->pc = 0x12E2B0u;
    // 0x12e2b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12e2b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12E2B4u;
    {
        const bool branch_taken_0x12e2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2B4u;
        // 0x12e2b8: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2b4) {
            ctx->pc = 0x12E2C8u;
            return;
        }
    }
    ctx->pc = 0x12E2BCu;
    // 0x12e2bc: 0x0  nop
    ctx->pc = 0x12e2bcu;
    // NOP
    ctx->pc = 0x12e2c0u;
}
