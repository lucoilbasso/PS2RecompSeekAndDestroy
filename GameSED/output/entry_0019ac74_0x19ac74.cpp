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

// Function: entry_0019ac74
// Address: 0x19ac74 - 0x19aca4
void entry_0019ac74_0x19ac74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ac74_0x19ac74");
#endif

    switch (ctx->pc) {
        case 0x19ac7cu: goto label_19ac7c;
        case 0x19ac98u: goto label_19ac98;
        default: break;
    }

    ctx->pc = 0x19ac74u;

label_19ac74:
    // 0x19ac74: 0xc072536  jal         func_1C94D8
    ctx->pc = 0x19AC74u;
    SET_GPR_U32(ctx, 31, 0x19AC7Cu);
    ctx->pc = 0x19AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC74u;
    // 0x19ac78: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C94D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C94D8u, 0x19AC74u, 0x19AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC7Cu;
label_19ac7c:
    // 0x19ac7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ac7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac80: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x19ac80u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x19ac84: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19ac88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ac88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ac8c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x19ac8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19ac90: 0xc0723d6  jal         func_1C8F58
    ctx->pc = 0x19AC90u;
    SET_GPR_U32(ctx, 31, 0x19AC98u);
    ctx->pc = 0x19AC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC90u;
    // 0x19ac94: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F58u, 0x19AC90u, 0x19AC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC98u;
label_19ac98:
    // 0x19ac98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ac98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac9c: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19AC9Cu;
    {
        const bool branch_taken_0x19ac9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC9Cu;
        // 0x19aca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac9c) {
            ctx->pc = 0x19AC74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ac74;
        }
    }
    ctx->pc = 0x19ACA4u;
}
