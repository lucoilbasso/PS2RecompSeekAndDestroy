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

// Function: entry_00148f5c
// Address: 0x148f5c - 0x148f90
void entry_00148f5c_0x148f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148f5c_0x148f5c");
#endif

    switch (ctx->pc) {
        case 0x148f74u: goto label_148f74;
        case 0x148f7cu: goto label_148f7c;
        case 0x148f8cu: goto label_148f8c;
        default: break;
    }

    ctx->pc = 0x148f5cu;

    // 0x148f5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x148f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x148f60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x148f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x148f64: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x148f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x148f68: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x148f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x148f6c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x148F6Cu;
    SET_GPR_U32(ctx, 31, 0x148F74u);
    ctx->pc = 0x148F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F6Cu;
    // 0x148f70: 0x8c710018  lw          $s1, 0x18($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x148F6Cu, 0x148F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F74u;
label_148f74:
    // 0x148f74: 0xc06a3d4  jal         func_1A8F50
    ctx->pc = 0x148F74u;
    SET_GPR_U32(ctx, 31, 0x148F7Cu);
    ctx->pc = 0x148F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F74u;
    // 0x148f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F50u, 0x148F74u, 0x148F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F7Cu;
label_148f7c:
    // 0x148f7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148F7Cu;
    {
        const bool branch_taken_0x148f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F7Cu;
        // 0x148f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f7c) {
            ctx->pc = 0x148F90u;
            return;
        }
    }
    ctx->pc = 0x148F84u;
    // 0x148f84: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x148F84u;
    SET_GPR_U32(ctx, 31, 0x148F8Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x148F84u, 0x148F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F8Cu;
label_148f8c:
    // 0x148f8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x148f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x148f90u;
}
