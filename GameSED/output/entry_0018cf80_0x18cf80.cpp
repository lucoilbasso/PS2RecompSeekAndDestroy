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

// Function: entry_0018cf80
// Address: 0x18cf80 - 0x18cfb0
void entry_0018cf80_0x18cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cf80_0x18cf80");
#endif

    switch (ctx->pc) {
        case 0x18cfa4u: goto label_18cfa4;
        default: break;
    }

    ctx->pc = 0x18cf80u;

    // 0x18cf80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18cf80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf84: 0x12400056  beqz        $s2, . + 4 + (0x56 << 2)
    ctx->pc = 0x18CF84u;
    {
        const bool branch_taken_0x18cf84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF84u;
        // 0x18cf88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf84) {
            ctx->pc = 0x18D0E0u;
            return;
        }
    }
    ctx->pc = 0x18CF8Cu;
    // 0x18cf8c: 0x8602023c  lh          $v0, 0x23C($s0)
    ctx->pc = 0x18cf8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x18cf90: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18CF90u;
    {
        const bool branch_taken_0x18cf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cf90) {
            ctx->pc = 0x18CF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CF90u;
            // 0x18cf94: 0x8e020228  lw          $v0, 0x228($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CFB0u;
            return;
        }
    }
    ctx->pc = 0x18CF98u;
    // 0x18cf98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cf98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf9c: 0xc0632e6  jal         func_18CB98
    ctx->pc = 0x18CF9Cu;
    SET_GPR_U32(ctx, 31, 0x18CFA4u);
    ctx->pc = 0x18CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF9Cu;
    // 0x18cfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CB98u, 0x18CF9Cu, 0x18CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFA4u;
label_18cfa4:
    // 0x18cfa4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x18CFA4u;
    {
        const bool branch_taken_0x18cfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFA4u;
        // 0x18cfa8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfa4) {
            ctx->pc = 0x18D0D0u;
            return;
        }
    }
    ctx->pc = 0x18CFACu;
    // 0x18cfac: 0x0  nop
    ctx->pc = 0x18cfacu;
    // NOP
    ctx->pc = 0x18cfb0u;
}
