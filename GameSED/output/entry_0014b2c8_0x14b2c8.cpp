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

// Function: entry_0014b2c8
// Address: 0x14b2c8 - 0x14b2f8
void entry_0014b2c8_0x14b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b2c8_0x14b2c8");
#endif

    switch (ctx->pc) {
        case 0x14b2d4u: goto label_14b2d4;
        default: break;
    }

    ctx->pc = 0x14b2c8u;

    // 0x14b2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2cc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14B2CCu;
    SET_GPR_U32(ctx, 31, 0x14B2D4u);
    ctx->pc = 0x14B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2CCu;
    // 0x14b2d0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14B2CCu, 0x14B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2D4u;
label_14b2d4:
    // 0x14b2d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14b2d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b2dc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14B2DCu;
    {
        const bool branch_taken_0x14b2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2DCu;
        // 0x14b2e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2dc) {
            ctx->pc = 0x14B2F8u;
            return;
        }
    }
    ctx->pc = 0x14B2E4u;
    // 0x14b2e4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14B2E4u;
    {
        const bool branch_taken_0x14b2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b2e4) {
            ctx->pc = 0x14B328u;
            return;
        }
    }
    ctx->pc = 0x14B2ECu;
    // 0x14b2ec: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x14B2ECu;
    {
        const bool branch_taken_0x14b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2ECu;
        // 0x14b2f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2ec) {
            ctx->pc = 0x14B4ECu;
            return;
        }
    }
    ctx->pc = 0x14B2F4u;
    // 0x14b2f4: 0x0  nop
    ctx->pc = 0x14b2f4u;
    // NOP
    ctx->pc = 0x14b2f8u;
}
