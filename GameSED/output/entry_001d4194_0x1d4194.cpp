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

// Function: entry_001d4194
// Address: 0x1d4194 - 0x1d41c4
void entry_001d4194_0x1d4194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4194_0x1d4194");
#endif

    switch (ctx->pc) {
        case 0x1d41a0u: goto label_1d41a0;
        default: break;
    }

    ctx->pc = 0x1d4194u;

    // 0x1d4194: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1d4194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4198: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D4198u;
    SET_GPR_U32(ctx, 31, 0x1D41A0u);
    ctx->pc = 0x1D419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4198u;
    // 0x1d419c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D4198u, 0x1D41A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41A0u;
label_1d41a0:
    // 0x1d41a0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1d41a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d41a4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D41A4u;
    {
        const bool branch_taken_0x1d41a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41A4u;
        // 0x1d41a8: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41a4) {
            ctx->pc = 0x1D41D0u;
            return;
        }
    }
    ctx->pc = 0x1D41ACu;
    // 0x1d41ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D41ACu;
    {
        const bool branch_taken_0x1d41ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41ACu;
        // 0x1d41b0: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41ac) {
            ctx->pc = 0x1D41C8u;
            return;
        }
    }
    ctx->pc = 0x1D41B4u;
    // 0x1d41b4: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D41B4u;
    {
        const bool branch_taken_0x1d41b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41B4u;
        // 0x1d41b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41b4) {
            ctx->pc = 0x1D41C4u;
            return;
        }
    }
    ctx->pc = 0x1D41BCu;
    // 0x1d41bc: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D41BCu;
    SET_GPR_U32(ctx, 31, 0x1D41C4u);
    ctx->pc = 0x1D41C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D41BCu;
    // 0x1d41c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D41BCu, 0x1D41C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41C4u;
}
