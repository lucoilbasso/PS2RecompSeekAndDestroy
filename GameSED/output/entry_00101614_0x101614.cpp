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

// Function: entry_00101614
// Address: 0x101614 - 0x101664
void entry_00101614_0x101614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101614_0x101614");
#endif

    switch (ctx->pc) {
        case 0x101630u: goto label_101630;
        case 0x10163cu: goto label_10163c;
        case 0x10165cu: goto label_10165c;
        default: break;
    }

    ctx->pc = 0x101614u;

    // 0x101614: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x101614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x101618: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x101618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x10161c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x10161cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x101620: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x101620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x101624: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x101624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x101628: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101628u;
    SET_GPR_U32(ctx, 31, 0x101630u);
    ctx->pc = 0x10162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101628u;
    // 0x10162c: 0x8c550044  lw          $s5, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101628u, 0x101630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101630u;
label_101630:
    // 0x101630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101634: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101634u;
    SET_GPR_U32(ctx, 31, 0x10163Cu);
    ctx->pc = 0x101638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101634u;
    // 0x101638: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101634u, 0x10163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10163Cu;
label_10163c:
    // 0x10163c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x101640: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x101640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101644: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x101644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x101648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10164c: 0x50440005  beql        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10164Cu;
    {
        const bool branch_taken_0x10164c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x10164c) {
            ctx->pc = 0x101650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10164Cu;
            // 0x101650: 0x8ea20028  lw          $v0, 0x28($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101664u;
            return;
        }
    }
    ctx->pc = 0x101654u;
    // 0x101654: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101654u;
    SET_GPR_U32(ctx, 31, 0x10165Cu);
    ctx->pc = 0x101658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101654u;
    // 0x101658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101654u, 0x10165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10165Cu;
label_10165c:
    // 0x10165c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10165cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101660: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x101660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    ctx->pc = 0x101664u;
}
