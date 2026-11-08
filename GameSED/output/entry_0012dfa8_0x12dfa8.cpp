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

// Function: entry_0012dfa8
// Address: 0x12dfa8 - 0x12dfd4
void entry_0012dfa8_0x12dfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dfa8_0x12dfa8");
#endif

    switch (ctx->pc) {
        case 0x12dfb4u: goto label_12dfb4;
        case 0x12dfccu: goto label_12dfcc;
        default: break;
    }

    ctx->pc = 0x12dfa8u;

label_12dfa8:
    // 0x12dfa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12dfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfac: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12DFACu;
    SET_GPR_U32(ctx, 31, 0x12DFB4u);
    ctx->pc = 0x12DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DFACu;
    // 0x12dfb0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12DFACu, 0x12DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFB4u;
label_12dfb4:
    // 0x12dfb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12dfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12dfbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dfc0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x12dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x12dfc4: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x12DFC4u;
    SET_GPR_U32(ctx, 31, 0x12DFCCu);
    ctx->pc = 0x12DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DFC4u;
    // 0x12dfc8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x12DFC4u, 0x12DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFCCu;
label_12dfcc:
    // 0x12dfcc: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12DFCCu;
    {
        const bool branch_taken_0x12dfcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFCCu;
        // 0x12dfd0: 0x8e3100c4  lw          $s1, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfcc) {
            ctx->pc = 0x12DFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dfa8;
        }
    }
    ctx->pc = 0x12DFD4u;
}
