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

// Function: entry_00106828
// Address: 0x106828 - 0x10685c
void entry_00106828_0x106828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106828_0x106828");
#endif

    switch (ctx->pc) {
        case 0x10683cu: goto label_10683c;
        case 0x106858u: goto label_106858;
        default: break;
    }

    ctx->pc = 0x106828u;

    // 0x106828: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x106828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10682c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x106830: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x106830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x106834: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x106834u;
    SET_GPR_U32(ctx, 31, 0x10683Cu);
    ctx->pc = 0x106838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106834u;
    // 0x106838: 0x8c520040  lw          $s2, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x106834u, 0x10683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10683Cu;
label_10683c:
    // 0x10683c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x106840: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x106840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106844: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x106844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106848: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x106848u;
    {
        const bool branch_taken_0x106848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x10684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106848u;
        // 0x10684c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106848) {
            ctx->pc = 0x10685Cu;
            return;
        }
    }
    ctx->pc = 0x106850u;
    // 0x106850: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x106850u;
    SET_GPR_U32(ctx, 31, 0x106858u);
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x106850u, 0x106858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106858u;
label_106858:
    // 0x106858: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x106858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10685cu;
}
