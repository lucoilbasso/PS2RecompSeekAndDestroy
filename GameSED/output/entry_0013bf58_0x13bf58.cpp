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

// Function: entry_0013bf58
// Address: 0x13bf58 - 0x13bf80
void entry_0013bf58_0x13bf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bf58_0x13bf58");
#endif

    switch (ctx->pc) {
        case 0x13bf68u: goto label_13bf68;
        default: break;
    }

    ctx->pc = 0x13bf58u;

label_13bf58:
    // 0x13bf58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13bf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13bf5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf60: 0xc04eff4  jal         func_13BFD0
    ctx->pc = 0x13BF60u;
    SET_GPR_U32(ctx, 31, 0x13BF68u);
    ctx->pc = 0x13BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BF60u;
    // 0x13bf64: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BFD0u, 0x13BF60u, 0x13BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF68u;
label_13bf68:
    // 0x13bf68: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13BF68u;
    {
        const bool branch_taken_0x13bf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf68) {
            ctx->pc = 0x13BF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BF68u;
            // 0x13bf6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BFA4u;
            return;
        }
    }
    ctx->pc = 0x13BF70u;
    // 0x13bf70: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13BF70u;
    {
        const bool branch_taken_0x13bf70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf70) {
            ctx->pc = 0x13BF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BF70u;
            // 0x13bf74: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bf58;
        }
    }
    ctx->pc = 0x13BF78u;
    // 0x13bf78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13BF78u;
    {
        const bool branch_taken_0x13bf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bf78) {
            ctx->pc = 0x13BF94u;
            return;
        }
    }
    ctx->pc = 0x13BF80u;
}
