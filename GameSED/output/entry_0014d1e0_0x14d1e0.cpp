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

// Function: entry_0014d1e0
// Address: 0x14d1e0 - 0x14d208
void entry_0014d1e0_0x14d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d1e0_0x14d1e0");
#endif

    switch (ctx->pc) {
        case 0x14d1ecu: goto label_14d1ec;
        default: break;
    }

    ctx->pc = 0x14d1e0u;

    // 0x14d1e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d1e4: 0xc053162  jal         func_14C588
    ctx->pc = 0x14D1E4u;
    SET_GPR_U32(ctx, 31, 0x14D1ECu);
    ctx->pc = 0x14D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D1E4u;
    // 0x14d1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C588u, 0x14D1E4u, 0x14D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1ECu;
label_14d1ec:
    // 0x14d1ec: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x14d1ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14d1f0: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x14d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x14d1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d1f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D1F8u;
    {
        const bool branch_taken_0x14d1f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1F8u;
        // 0x14d1fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d1f8) {
            ctx->pc = 0x14D208u;
            return;
        }
    }
    ctx->pc = 0x14D200u;
    // 0x14d200: 0xc0535b0  jal         func_14D6C0
    ctx->pc = 0x14D200u;
    SET_GPR_U32(ctx, 31, 0x14D208u);
    ctx->pc = 0x14D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D6C0u, 0x14D200u, 0x14D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D208u;
}
