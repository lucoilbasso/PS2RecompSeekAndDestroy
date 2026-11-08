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

// Function: entry_001adfb0
// Address: 0x1adfb0 - 0x1adff4
void entry_001adfb0_0x1adfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adfb0_0x1adfb0");
#endif

    switch (ctx->pc) {
        case 0x1adfc4u: goto label_1adfc4;
        case 0x1adfe0u: goto label_1adfe0;
        default: break;
    }

    ctx->pc = 0x1adfb0u;

label_1adfb0:
    // 0x1adfb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1adfb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfb8: 0x240700fc  addiu       $a3, $zero, 0xFC
    ctx->pc = 0x1adfb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1adfbc: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1ADFBCu;
    SET_GPR_U32(ctx, 31, 0x1ADFC4u);
    ctx->pc = 0x1ADFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADFBCu;
    // 0x1adfc0: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE480u, 0x1ADFBCu, 0x1ADFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFC4u;
label_1adfc4:
    // 0x1adfc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1adfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfcc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1adfccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfd0: 0x240700fc  addiu       $a3, $zero, 0xFC
    ctx->pc = 0x1adfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1adfd4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1adfd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1adfd8: 0xc06b920  jal         func_1AE480
    ctx->pc = 0x1ADFD8u;
    SET_GPR_U32(ctx, 31, 0x1ADFE0u);
    ctx->pc = 0x1ADFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADFD8u;
    // 0x1adfdc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE480u, 0x1ADFD8u, 0x1ADFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFE0u;
label_1adfe0:
    // 0x1adfe0: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x1adfe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1adfe4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1ADFE4u;
    {
        const bool branch_taken_0x1adfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFE4u;
        // 0x1adfe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfe4) {
            ctx->pc = 0x1ADFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adfb0;
        }
    }
    ctx->pc = 0x1ADFECu;
    // 0x1adfec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADFECu;
    {
        const bool branch_taken_0x1adfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFECu;
        // 0x1adff0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfec) {
            ctx->pc = 0x1ADFF8u;
            return;
        }
    }
    ctx->pc = 0x1ADFF4u;
}
