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

// Function: caseD_a
// Address: 0x105670 - 0x105698
void caseD_a_0x105670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x105670");
#endif

    switch (ctx->pc) {
        case 0x105680u: goto label_105680;
        case 0x105690u: goto label_105690;
        default: break;
    }

    ctx->pc = 0x105670u;

    // 0x105670: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x105670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x105674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105678: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x105678u;
    SET_GPR_U32(ctx, 31, 0x105680u);
    ctx->pc = 0x10567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105678u;
    // 0x10567c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x105678u, 0x105680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105680u;
label_105680:
    // 0x105680: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x105680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x105684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x105684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105688: 0xc068186  jal         func_1A0618
    ctx->pc = 0x105688u;
    SET_GPR_U32(ctx, 31, 0x105690u);
    ctx->pc = 0x10568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105688u;
    // 0x10568c: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x105688u, 0x105690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105690u;
label_105690:
    // 0x105690: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x105690u;
    {
        const bool branch_taken_0x105690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105690u;
        // 0x105694: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105690) {
            ctx->pc = 0x1057A0u;
            return;
        }
    }
    ctx->pc = 0x105698u;
}
