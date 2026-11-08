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

// Function: entry_001cbbb8
// Address: 0x1cbbb8 - 0x1cbbe8
void entry_001cbbb8_0x1cbbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbbb8_0x1cbbb8");
#endif

    switch (ctx->pc) {
        case 0x1cbbc8u: goto label_1cbbc8;
        default: break;
    }

    ctx->pc = 0x1cbbb8u;

label_1cbbb8:
    // 0x1cbbb8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cbbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbbc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cbbbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbc0: 0xc072d98  jal         func_1CB660
    ctx->pc = 0x1CBBC0u;
    SET_GPR_U32(ctx, 31, 0x1CBBC8u);
    ctx->pc = 0x1CBBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBBC0u;
    // 0x1cbbc4: 0x27a704a4  addiu       $a3, $sp, 0x4A4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB660u, 0x1CBBC0u, 0x1CBBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBC8u;
label_1cbbc8:
    // 0x1cbbc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cbbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbcc: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1cbbccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cbbd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBBD0u;
    {
        const bool branch_taken_0x1cbbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBD0u;
        // 0x1cbbd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbd0) {
            ctx->pc = 0x1CBBECu;
            return;
        }
    }
    ctx->pc = 0x1CBBD8u;
    // 0x1cbbd8: 0x8fa204a4  lw          $v0, 0x4A4($sp)
    ctx->pc = 0x1cbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1cbbdc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1cbbdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cbbe0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CBBE0u;
    {
        const bool branch_taken_0x1cbbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBE0u;
        // 0x1cbbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbe0) {
            ctx->pc = 0x1CBBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbbb8;
        }
    }
    ctx->pc = 0x1CBBE8u;
}
