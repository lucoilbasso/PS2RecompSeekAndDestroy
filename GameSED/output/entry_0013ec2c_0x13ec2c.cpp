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

// Function: entry_0013ec2c
// Address: 0x13ec2c - 0x13ec60
void entry_0013ec2c_0x13ec2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ec2c_0x13ec2c");
#endif

    switch (ctx->pc) {
        case 0x13ec50u: goto label_13ec50;
        default: break;
    }

    ctx->pc = 0x13ec2cu;

    // 0x13ec2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ec2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ec30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13ec30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13ec34: 0x24910080  addiu       $s1, $a0, 0x80
    ctx->pc = 0x13ec34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x13ec38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ec3c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13EC3Cu;
    {
        const bool branch_taken_0x13ec3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC3Cu;
        // 0x13ec40: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec3c) {
            ctx->pc = 0x13ECB0u;
            return;
        }
    }
    ctx->pc = 0x13EC44u;
    // 0x13ec44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13ec44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ec48: 0xc05dd18  jal         func_177460
    ctx->pc = 0x13EC48u;
    SET_GPR_U32(ctx, 31, 0x13EC50u);
    ctx->pc = 0x13EC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC48u;
    // 0x13ec4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13EC48u, 0x13EC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC50u;
label_13ec50:
    // 0x13ec50: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ec54: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13EC54u;
    {
        const bool branch_taken_0x13ec54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13ec54) {
            ctx->pc = 0x13ECA8u;
            return;
        }
    }
    ctx->pc = 0x13EC5Cu;
    // 0x13ec5c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x13ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x13ec60u;
}
