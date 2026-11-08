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

// Function: entry_00115384
// Address: 0x115384 - 0x1153a0
void entry_00115384_0x115384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115384_0x115384");
#endif

    switch (ctx->pc) {
        case 0x11538cu: goto label_11538c;
        default: break;
    }

    ctx->pc = 0x115384u;

    // 0x115384: 0xc041794  jal         func_105E50
    ctx->pc = 0x115384u;
    SET_GPR_U32(ctx, 31, 0x11538Cu);
    ctx->pc = 0x115388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115384u;
    // 0x115388: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x115384u, 0x11538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11538Cu;
label_11538c:
    // 0x11538c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11538Cu;
    {
        const bool branch_taken_0x11538c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x115390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11538Cu;
        // 0x115390: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11538c) {
            ctx->pc = 0x1153A0u;
            return;
        }
    }
    ctx->pc = 0x115394u;
    // 0x115394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115398: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115398u;
    {
        const bool branch_taken_0x115398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115398u;
        // 0x11539c: 0x2414000c  addiu       $s4, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115398) {
            ctx->pc = 0x1153A8u;
            return;
        }
    }
    ctx->pc = 0x1153A0u;
}
