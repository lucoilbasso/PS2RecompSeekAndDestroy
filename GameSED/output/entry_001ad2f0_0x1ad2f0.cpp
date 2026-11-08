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

// Function: entry_001ad2f0
// Address: 0x1ad2f0 - 0x1ad31c
void entry_001ad2f0_0x1ad2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad2f0_0x1ad2f0");
#endif

    switch (ctx->pc) {
        case 0x1ad30cu: goto label_1ad30c;
        default: break;
    }

    ctx->pc = 0x1ad2f0u;

label_1ad2f0:
    // 0x1ad2f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ad2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2f4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ad2f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ad2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ad2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ad300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad304: 0xc06b8a0  jal         func_1AE280
    ctx->pc = 0x1AD304u;
    SET_GPR_U32(ctx, 31, 0x1AD30Cu);
    ctx->pc = 0x1AD308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD304u;
    // 0x1ad308: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE280u, 0x1AD304u, 0x1AD30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD30Cu;
label_1ad30c:
    // 0x1ad30c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ad30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ad310: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x1ad310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1ad314: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AD314u;
    {
        const bool branch_taken_0x1ad314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD314u;
        // 0x1ad318: 0x2328821  addu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad314) {
            ctx->pc = 0x1AD2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad2f0;
        }
    }
    ctx->pc = 0x1AD31Cu;
}
