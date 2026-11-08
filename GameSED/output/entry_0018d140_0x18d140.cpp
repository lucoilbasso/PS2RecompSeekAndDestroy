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

// Function: entry_0018d140
// Address: 0x18d140 - 0x18d170
void entry_0018d140_0x18d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d140_0x18d140");
#endif

    switch (ctx->pc) {
        case 0x18d14cu: goto label_18d14c;
        case 0x18d168u: goto label_18d168;
        default: break;
    }

    ctx->pc = 0x18d140u;

    // 0x18d140: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18d144: 0xc067444  jal         func_19D110
    ctx->pc = 0x18D144u;
    SET_GPR_U32(ctx, 31, 0x18D14Cu);
    ctx->pc = 0x18D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D144u;
    // 0x18d148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D110u, 0x18D144u, 0x18D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D14Cu;
label_18d14c:
    // 0x18d14c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D14Cu;
    {
        const bool branch_taken_0x18d14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d14c) {
            ctx->pc = 0x18D150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D14Cu;
            // 0x18d150: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D170u;
            return;
        }
    }
    ctx->pc = 0x18D154u;
    // 0x18d154: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x18d154u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18d158: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18d158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18d15c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x18d15cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x18d160: 0xc06744c  jal         func_19D130
    ctx->pc = 0x18D160u;
    SET_GPR_U32(ctx, 31, 0x18D168u);
    ctx->pc = 0x18D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D160u;
    // 0x18d164: 0x2042025  or          $a0, $s0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D130u, 0x18D160u, 0x18D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D168u;
label_18d168:
    // 0x18d168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d16c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x18d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x18d170u;
}
