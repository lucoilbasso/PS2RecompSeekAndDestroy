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

// Function: entry_0010d420
// Address: 0x10d420 - 0x10d468
void entry_0010d420_0x10d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d420_0x10d420");
#endif

    switch (ctx->pc) {
        case 0x10d44cu: goto label_10d44c;
        default: break;
    }

    ctx->pc = 0x10d420u;

    // 0x10d420: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10d420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10d424: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10d428: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d42c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10d42cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d430: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10d430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10d434: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10d434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d438: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10d43c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x10d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10d440: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x10d440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d444: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D444u;
    SET_GPR_U32(ctx, 31, 0x10D44Cu);
    ctx->pc = 0x10D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D444u;
    // 0x10d448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D444u, 0x10D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D44Cu;
label_10d44c:
    // 0x10d44c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10d44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d450: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x10d450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10d454: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x10d454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10d458: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D458u;
    {
        const bool branch_taken_0x10d458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D458u;
        // 0x10d45c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d458) {
            ctx->pc = 0x10D468u;
            return;
        }
    }
    ctx->pc = 0x10D460u;
    // 0x10d460: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10D460u;
    {
        const bool branch_taken_0x10d460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D460u;
        // 0x10d464: 0x8e3101c0  lw          $s1, 0x1C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d460) {
            ctx->pc = 0x10D490u;
            return;
        }
    }
    ctx->pc = 0x10D468u;
}
