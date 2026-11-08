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

// Function: entry_001790ac
// Address: 0x1790ac - 0x1790d8
void entry_001790ac_0x1790ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001790ac_0x1790ac");
#endif

    switch (ctx->pc) {
        case 0x1790ccu: goto label_1790cc;
        default: break;
    }

    ctx->pc = 0x1790acu;

    // 0x1790ac: 0x1080004f  beqz        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1790ACu;
    {
        const bool branch_taken_0x1790ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1790B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790ACu;
        // 0x1790b0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790ac) {
            ctx->pc = 0x1791ECu;
            return;
        }
    }
    ctx->pc = 0x1790B4u;
    // 0x1790b4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1790b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1790b8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1790B8u;
    {
        const bool branch_taken_0x1790b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1790b8) {
            ctx->pc = 0x1790BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1790B8u;
            // 0x1790bc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1790D8u;
            return;
        }
    }
    ctx->pc = 0x1790C0u;
    // 0x1790c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1790c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1790c4: 0xc05e700  jal         func_179C00
    ctx->pc = 0x1790C4u;
    SET_GPR_U32(ctx, 31, 0x1790CCu);
    ctx->pc = 0x1790C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790C4u;
    // 0x1790c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C00u, 0x1790C4u, 0x1790CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1790CCu;
label_1790cc:
    // 0x1790cc: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1790CCu;
    {
        const bool branch_taken_0x1790cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1790D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790CCu;
        // 0x1790d0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790cc) {
            ctx->pc = 0x1791ECu;
            return;
        }
    }
    ctx->pc = 0x1790D4u;
    // 0x1790d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1790d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x1790d8u;
}
