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

// Function: entry_0014aa80
// Address: 0x14aa80 - 0x14aaa4
void entry_0014aa80_0x14aa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aa80_0x14aa80");
#endif

    switch (ctx->pc) {
        case 0x14aa8cu: goto label_14aa8c;
        case 0x14aa94u: goto label_14aa94;
        default: break;
    }

    ctx->pc = 0x14aa80u;

label_14aa80:
    // 0x14aa80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14aa80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14aa84: 0xc0532f2  jal         func_14CBC8
    ctx->pc = 0x14AA84u;
    SET_GPR_U32(ctx, 31, 0x14AA8Cu);
    ctx->pc = 0x14AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA84u;
    // 0x14aa88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x14AA84u, 0x14AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA8Cu;
label_14aa8c:
    // 0x14aa8c: 0xc056832  jal         func_15A0C8
    ctx->pc = 0x14AA8Cu;
    SET_GPR_U32(ctx, 31, 0x14AA94u);
    ctx->pc = 0x14AA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA8Cu;
    // 0x14aa90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0C8u, 0x14AA8Cu, 0x14AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA94u;
label_14aa94:
    // 0x14aa94: 0x922201ab  lbu         $v0, 0x1AB($s1)
    ctx->pc = 0x14aa94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 427)));
    // 0x14aa98: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14aa98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14aa9c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14AA9Cu;
    {
        const bool branch_taken_0x14aa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aa9c) {
            ctx->pc = 0x14AAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA9Cu;
            // 0x14aaa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14aa80;
        }
    }
    ctx->pc = 0x14AAA4u;
}
