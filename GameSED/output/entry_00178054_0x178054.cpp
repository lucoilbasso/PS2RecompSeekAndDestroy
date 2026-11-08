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

// Function: entry_00178054
// Address: 0x178054 - 0x17807c
void entry_00178054_0x178054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178054_0x178054");
#endif

    switch (ctx->pc) {
        case 0x17805cu: goto label_17805c;
        default: break;
    }

    ctx->pc = 0x178054u;

    // 0x178054: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x178054u;
    SET_GPR_U32(ctx, 31, 0x17805Cu);
    ctx->pc = 0x178058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178054u;
    // 0x178058: 0x24847960  addiu       $a0, $a0, 0x7960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x178054u, 0x17805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17805Cu;
label_17805c:
    // 0x17805c: 0x24054020  addiu       $a1, $zero, 0x4020
    ctx->pc = 0x17805cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16416));
    // 0x178060: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x178060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x178064: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x178064u;
    {
        const bool branch_taken_0x178064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178064u;
        // 0x178068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178064) {
            ctx->pc = 0x1780E0u;
            return;
        }
    }
    ctx->pc = 0x17806Cu;
    // 0x17806c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178070: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x178070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x178074: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x178074u;
    {
        const bool branch_taken_0x178074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178074) {
            ctx->pc = 0x178078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178074u;
            // 0x178078: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17807Cu;
            return;
        }
    }
    ctx->pc = 0x17807Cu;
}
