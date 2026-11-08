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

// Function: entry_00116a8c
// Address: 0x116a8c - 0x116ac4
void entry_00116a8c_0x116a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116a8c_0x116a8c");
#endif

    switch (ctx->pc) {
        case 0x116aa4u: goto label_116aa4;
        case 0x116ac0u: goto label_116ac0;
        default: break;
    }

    ctx->pc = 0x116a8cu;

    // 0x116a8c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x116a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x116a90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x116a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116a94: 0x1071000b  beq         $v1, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x116A94u;
    {
        const bool branch_taken_0x116a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x116a94) {
            ctx->pc = 0x116AC4u;
            return;
        }
    }
    ctx->pc = 0x116A9Cu;
    // 0x116a9c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x116A9Cu;
    SET_GPR_U32(ctx, 31, 0x116AA4u);
    ctx->pc = 0x116AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A9Cu;
    // 0x116aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x116A9Cu, 0x116AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AA4u;
label_116aa4:
    // 0x116aa4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x116aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116aa8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x116aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x116aac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x116aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116ab0: 0x10710004  beq         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x116AB0u;
    {
        const bool branch_taken_0x116ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x116ab0) {
            ctx->pc = 0x116AC4u;
            return;
        }
    }
    ctx->pc = 0x116AB8u;
    // 0x116ab8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x116AB8u;
    SET_GPR_U32(ctx, 31, 0x116AC0u);
    ctx->pc = 0x116ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AB8u;
    // 0x116abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x116AB8u, 0x116AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AC0u;
label_116ac0:
    // 0x116ac0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x116ac0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116ac4u;
}
