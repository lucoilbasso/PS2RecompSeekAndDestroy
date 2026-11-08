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

// Function: entry_001d3b94
// Address: 0x1d3b94 - 0x1d3bec
void entry_001d3b94_0x1d3b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3b94_0x1d3b94");
#endif

    switch (ctx->pc) {
        case 0x1d3bc0u: goto label_1d3bc0;
        case 0x1d3bd4u: goto label_1d3bd4;
        case 0x1d3be4u: goto label_1d3be4;
        default: break;
    }

    ctx->pc = 0x1d3b94u;

    // 0x1d3b94: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D3B94u;
    {
        const bool branch_taken_0x1d3b94 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B94u;
        // 0x1d3b98: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b94) {
            ctx->pc = 0x1D3C24u;
            return;
        }
    }
    ctx->pc = 0x1D3B9Cu;
    // 0x1d3b9c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1d3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1d3ba0: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D3BA0u;
    {
        const bool branch_taken_0x1d3ba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BA0u;
        // 0x1d3ba4: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ba0) {
            ctx->pc = 0x1D3C10u;
            return;
        }
    }
    ctx->pc = 0x1D3BA8u;
    // 0x1d3ba8: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D3BA8u;
    {
        const bool branch_taken_0x1d3ba8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1D3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3BA8u;
        // 0x1d3bac: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ba8) {
            ctx->pc = 0x1D3BECu;
            return;
        }
    }
    ctx->pc = 0x1D3BB0u;
    // 0x1d3bb0: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1d3bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d3bb4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bb8: 0xc07566e  jal         func_1D59B8
    ctx->pc = 0x1D3BB8u;
    SET_GPR_U32(ctx, 31, 0x1D3BC0u);
    ctx->pc = 0x1D3BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BB8u;
    // 0x1d3bbc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59B8u, 0x1D3BB8u, 0x1D3BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3BC0u;
label_1d3bc0:
    // 0x1d3bc0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bc4: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1d3bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3bc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bcc: 0xc0755ea  jal         func_1D57A8
    ctx->pc = 0x1D3BCCu;
    SET_GPR_U32(ctx, 31, 0x1D3BD4u);
    ctx->pc = 0x1D3BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BCCu;
    // 0x1d3bd0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D57A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D57A8u, 0x1D3BCCu, 0x1D3BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3BD4u;
label_1d3bd4:
    // 0x1d3bd4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bd8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d3bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3bdc: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D3BDCu;
    SET_GPR_U32(ctx, 31, 0x1D3BE4u);
    ctx->pc = 0x1D3BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3BDCu;
    // 0x1d3be0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D3BDCu, 0x1D3BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3BE4u;
label_1d3be4:
    // 0x1d3be4: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x1d3be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
    // 0x1d3be8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1d3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->pc = 0x1d3becu;
}
