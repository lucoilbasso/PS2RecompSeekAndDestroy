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

// Function: entry_00107be8
// Address: 0x107be8 - 0x107c0c
void entry_00107be8_0x107be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107be8_0x107be8");
#endif

    switch (ctx->pc) {
        case 0x107bf0u: goto label_107bf0;
        case 0x107bfcu: goto label_107bfc;
        default: break;
    }

    ctx->pc = 0x107be8u;

label_107be8:
    // 0x107be8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x107BE8u;
    SET_GPR_U32(ctx, 31, 0x107BF0u);
    ctx->pc = 0x107BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BE8u;
    // 0x107bec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107BE8u, 0x107BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BF0u;
label_107bf0:
    // 0x107bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107bf4: 0xc040d98  jal         func_103660
    ctx->pc = 0x107BF4u;
    SET_GPR_U32(ctx, 31, 0x107BFCu);
    ctx->pc = 0x107BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BF4u;
    // 0x107bf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103660u, 0x107BF4u, 0x107BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BFCu;
label_107bfc:
    // 0x107bfc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x107bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x107c00: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x107c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x107c04: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x107C04u;
    {
        const bool branch_taken_0x107c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C04u;
        // 0x107c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c04) {
            ctx->pc = 0x107BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107be8;
        }
    }
    ctx->pc = 0x107C0Cu;
}
