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

// Function: entry_00181818
// Address: 0x181818 - 0x181848
void entry_00181818_0x181818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181818_0x181818");
#endif

    switch (ctx->pc) {
        case 0x181830u: goto label_181830;
        default: break;
    }

    ctx->pc = 0x181818u;

    // 0x181818: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x181818u;
    {
        const bool branch_taken_0x181818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181818u;
        // 0x18181c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181818) {
            ctx->pc = 0x181848u;
            return;
        }
    }
    ctx->pc = 0x181820u;
    // 0x181820: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x181820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x181824: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x181824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x181828: 0xc060550  jal         func_181540
    ctx->pc = 0x181828u;
    SET_GPR_U32(ctx, 31, 0x181830u);
    ctx->pc = 0x18182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181828u;
    // 0x18182c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181540u, 0x181828u, 0x181830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181830u;
label_181830:
    // 0x181830: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x181830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181834: 0x10c0003c  beqz        $a2, . + 4 + (0x3C << 2)
    ctx->pc = 0x181834u;
    {
        const bool branch_taken_0x181834 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x181838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181834u;
        // 0x181838: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181834) {
            ctx->pc = 0x181928u;
            return;
        }
    }
    ctx->pc = 0x18183Cu;
    // 0x18183c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x18183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x181840: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x181840u;
    {
        const bool branch_taken_0x181840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181840u;
        // 0x181844: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181840) {
            ctx->pc = 0x181928u;
            return;
        }
    }
    ctx->pc = 0x181848u;
}
