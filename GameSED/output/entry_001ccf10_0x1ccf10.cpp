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

// Function: entry_001ccf10
// Address: 0x1ccf10 - 0x1ccf60
void entry_001ccf10_0x1ccf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccf10_0x1ccf10");
#endif

    switch (ctx->pc) {
        case 0x1ccf24u: goto label_1ccf24;
        case 0x1ccf3cu: goto label_1ccf3c;
        case 0x1ccf48u: goto label_1ccf48;
        case 0x1ccf58u: goto label_1ccf58;
        default: break;
    }

    ctx->pc = 0x1ccf10u;

    // 0x1ccf10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ccf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ccf14: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ccf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf18: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1ccf18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ccf1c: 0xc073a08  jal         func_1CE820
    ctx->pc = 0x1CCF1Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF24u);
    ctx->pc = 0x1CCF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF1Cu;
    // 0x1ccf20: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE820u, 0x1CCF1Cu, 0x1CCF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF24u;
label_1ccf24:
    // 0x1ccf24: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1CCF24u;
    {
        const bool branch_taken_0x1ccf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf24) {
            ctx->pc = 0x1CCF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCF24u;
            // 0x1ccf28: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCF60u;
            return;
        }
    }
    ctx->pc = 0x1CCF2Cu;
    // 0x1ccf2c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1ccf2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ccf30: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x1ccf30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x1ccf34: 0xc07358e  jal         func_1CD638
    ctx->pc = 0x1CCF34u;
    SET_GPR_U32(ctx, 31, 0x1CCF3Cu);
    ctx->pc = 0x1CCF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF34u;
    // 0x1ccf38: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD638u, 0x1CCF34u, 0x1CCF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF3Cu;
label_1ccf3c:
    // 0x1ccf3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ccf3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf40: 0xc07873a  jal         func_1E1CE8
    ctx->pc = 0x1CCF40u;
    SET_GPR_U32(ctx, 31, 0x1CCF48u);
    ctx->pc = 0x1CCF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF40u;
    // 0x1ccf44: 0xae150000  sw          $s5, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1CE8u, 0x1CCF40u, 0x1CCF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF48u;
label_1ccf48:
    // 0x1ccf48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ccf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf50: 0xc0732ee  jal         func_1CCBB8
    ctx->pc = 0x1CCF50u;
    SET_GPR_U32(ctx, 31, 0x1CCF58u);
    ctx->pc = 0x1CCF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF50u;
    // 0x1ccf54: 0x26861d48  addiu       $a2, $s4, 0x1D48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 7496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCBB8u, 0x1CCF50u, 0x1CCF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF58u;
label_1ccf58:
    // 0x1ccf58: 0xc073880  jal         func_1CE200
    ctx->pc = 0x1CCF58u;
    SET_GPR_U32(ctx, 31, 0x1CCF60u);
    ctx->pc = 0x1CE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE200u, 0x1CCF58u, 0x1CCF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF60u;
}
