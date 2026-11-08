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

// Function: entry_001093c0
// Address: 0x1093c0 - 0x1093f4
void entry_001093c0_0x1093c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001093c0_0x1093c0");
#endif

    switch (ctx->pc) {
        case 0x1093ccu: goto label_1093cc;
        case 0x1093e0u: goto label_1093e0;
        default: break;
    }

    ctx->pc = 0x1093c0u;

label_1093c0:
    // 0x1093c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1093c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093c4: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x1093C4u;
    SET_GPR_U32(ctx, 31, 0x1093CCu);
    ctx->pc = 0x1093C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093C4u;
    // 0x1093c8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x1093C4u, 0x1093CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093CCu;
label_1093cc:
    // 0x1093cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1093ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1093d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1093d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1093d8: 0xc0640d6  jal         func_190358
    ctx->pc = 0x1093D8u;
    SET_GPR_U32(ctx, 31, 0x1093E0u);
    ctx->pc = 0x1093DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1093D8u;
    // 0x1093dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x1093D8u, 0x1093E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1093E0u;
label_1093e0:
    // 0x1093e0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1093e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1093e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1093e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1093e8: 0x1473fff5  bne         $v1, $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x1093E8u;
    {
        const bool branch_taken_0x1093e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1093ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093E8u;
        // 0x1093ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093e8) {
            ctx->pc = 0x1093C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1093c0;
        }
    }
    ctx->pc = 0x1093F0u;
    // 0x1093f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1093f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1093f4u;
}
