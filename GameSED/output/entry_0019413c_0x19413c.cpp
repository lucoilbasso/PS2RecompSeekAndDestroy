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

// Function: entry_0019413c
// Address: 0x19413c - 0x19416c
void entry_0019413c_0x19413c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019413c_0x19413c");
#endif

    switch (ctx->pc) {
        case 0x19414cu: goto label_19414c;
        case 0x194154u: goto label_194154;
        case 0x19415cu: goto label_19415c;
        case 0x194164u: goto label_194164;
        default: break;
    }

    ctx->pc = 0x19413cu;

    // 0x19413c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x194140: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x194140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x194144: 0xc05fe96  jal         func_17FA58
    ctx->pc = 0x194144u;
    SET_GPR_U32(ctx, 31, 0x19414Cu);
    ctx->pc = 0x194148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194144u;
    // 0x194148: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FA58u, 0x194144u, 0x19414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19414Cu;
label_19414c:
    // 0x19414c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x19414Cu;
    SET_GPR_U32(ctx, 31, 0x194154u);
    ctx->pc = 0x194150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19414Cu;
    // 0x194150: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19414Cu, 0x194154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194154u;
label_194154:
    // 0x194154: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x194154u;
    SET_GPR_U32(ctx, 31, 0x19415Cu);
    ctx->pc = 0x194158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194154u;
    // 0x194158: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x194154u, 0x19415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19415Cu;
label_19415c:
    // 0x19415c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x19415Cu;
    SET_GPR_U32(ctx, 31, 0x194164u);
    ctx->pc = 0x194160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19415Cu;
    // 0x194160: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19415Cu, 0x194164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194164u;
label_194164:
    // 0x194164: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x194164u;
    SET_GPR_U32(ctx, 31, 0x19416Cu);
    ctx->pc = 0x194168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194164u;
    // 0x194168: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x194164u, 0x19416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19416Cu;
}
