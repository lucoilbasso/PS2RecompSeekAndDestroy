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

// Function: entry_0019f4d0
// Address: 0x19f4d0 - 0x19f500
void entry_0019f4d0_0x19f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f4d0_0x19f4d0");
#endif

    switch (ctx->pc) {
        case 0x19f4ecu: goto label_19f4ec;
        default: break;
    }

    ctx->pc = 0x19f4d0u;

label_19f4d0:
    // 0x19f4d0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19F4D0u;
    {
        const bool branch_taken_0x19f4d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4D0u;
        // 0x19f4d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4d0) {
            ctx->pc = 0x19F530u;
            return;
        }
    }
    ctx->pc = 0x19F4D8u;
    // 0x19f4d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f4e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4e4: 0xc067c9a  jal         func_19F268
    ctx->pc = 0x19F4E4u;
    SET_GPR_U32(ctx, 31, 0x19F4ECu);
    ctx->pc = 0x19F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4E4u;
    // 0x19f4e8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F268u, 0x19F4E4u, 0x19F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4ECu;
label_19f4ec:
    // 0x19f4ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19f4ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4f0: 0x5260fff7  beql        $s3, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19F4F0u;
    {
        const bool branch_taken_0x19f4f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f4f0) {
            ctx->pc = 0x19F4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F4F0u;
            // 0x19f4f4: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f4d0;
        }
    }
    ctx->pc = 0x19F4F8u;
    // 0x19f4f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19F4F8u;
    {
        const bool branch_taken_0x19f4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f4f8) {
            ctx->pc = 0x19F530u;
            return;
        }
    }
    ctx->pc = 0x19F500u;
}
