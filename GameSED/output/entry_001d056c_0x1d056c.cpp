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

// Function: entry_001d056c
// Address: 0x1d056c - 0x1d05a0
void entry_001d056c_0x1d056c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d056c_0x1d056c");
#endif

    switch (ctx->pc) {
        case 0x1d0590u: goto label_1d0590;
        default: break;
    }

    ctx->pc = 0x1d056cu;

    // 0x1d056c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d056cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0570: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0574: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D0574u;
    {
        const bool branch_taken_0x1d0574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0574u;
        // 0x1d0578: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0574) {
            ctx->pc = 0x1D05DCu;
            return;
        }
    }
    ctx->pc = 0x1D057Cu;
    // 0x1d057c: 0x8e2501d4  lw          $a1, 0x1D4($s1)
    ctx->pc = 0x1d057cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x1d0580: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0580u;
    {
        const bool branch_taken_0x1d0580 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0580u;
        // 0x1d0584: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0580) {
            ctx->pc = 0x1D05A4u;
            return;
        }
    }
    ctx->pc = 0x1D0588u;
    // 0x1d0588: 0xc0740e4  jal         func_1D0390
    ctx->pc = 0x1D0588u;
    SET_GPR_U32(ctx, 31, 0x1D0590u);
    ctx->pc = 0x1D0390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0390u, 0x1D0588u, 0x1D0590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0590u;
label_1d0590:
    // 0x1d0590: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0590u;
    {
        const bool branch_taken_0x1d0590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0590) {
            ctx->pc = 0x1D0594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0590u;
            // 0x1d0594: 0x8e2501d4  lw          $a1, 0x1D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D05A0u;
            return;
        }
    }
    ctx->pc = 0x1D0598u;
    // 0x1d0598: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D0598u;
    {
        const bool branch_taken_0x1d0598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0598u;
        // 0x1d059c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0598) {
            ctx->pc = 0x1D05DCu;
            return;
        }
    }
    ctx->pc = 0x1D05A0u;
}
