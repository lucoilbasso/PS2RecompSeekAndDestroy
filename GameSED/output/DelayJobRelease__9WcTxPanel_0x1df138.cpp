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

// Function: DelayJobRelease__9WcTxPanel
// Address: 0x1df138 - 0x1df184
void DelayJobRelease__9WcTxPanel_0x1df138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DelayJobRelease__9WcTxPanel_0x1df138");
#endif

    switch (ctx->pc) {
        case 0x1df164u: goto label_1df164;
        default: break;
    }

    ctx->pc = 0x1df138u;

    // 0x1df138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df144: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1df144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1df148: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x1df148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1df14c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1df14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1df150: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DF150u;
    {
        const bool branch_taken_0x1df150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF150u;
        // 0x1df154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df150) {
            ctx->pc = 0x1DF174u;
            goto label_1df174;
        }
    }
    ctx->pc = 0x1DF158u;
    // 0x1df158: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1df158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1df15c: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x1DF15Cu;
    SET_GPR_U32(ctx, 31, 0x1DF164u);
    ctx->pc = 0x1DF160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF15Cu;
    // 0x1df160: 0x24841be8  addiu       $a0, $a0, 0x1BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1DF15Cu, 0x1DF164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF164u;
label_1df164:
    // 0x1df164: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x1df164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1df168: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1df168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1df16c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1df16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1df170: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x1df170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_1df174:
    // 0x1df174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df178: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1df178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df17c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF17Cu;
        // 0x1df180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF184u;
}
