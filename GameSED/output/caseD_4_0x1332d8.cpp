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

// Function: caseD_4
// Address: 0x1332d8 - 0x133300
void caseD_4_0x1332d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1332d8");
#endif

    switch (ctx->pc) {
        case 0x1332e0u: goto label_1332e0;
        case 0x1332ecu: goto label_1332ec;
        default: break;
    }

    ctx->pc = 0x1332d8u;

    // 0x1332d8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1332D8u;
    SET_GPR_U32(ctx, 31, 0x1332E0u);
    ctx->pc = 0x1332DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1332D8u;
    // 0x1332dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1332D8u, 0x1332E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332E0u;
label_1332e0:
    // 0x1332e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1332e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332e4: 0xc04ca86  jal         func_132A18
    ctx->pc = 0x1332E4u;
    SET_GPR_U32(ctx, 31, 0x1332ECu);
    ctx->pc = 0x1332E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1332E4u;
    // 0x1332e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A18u, 0x1332E4u, 0x1332ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332ECu;
label_1332ec:
    // 0x1332ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1332ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1332f0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1332F0u;
    {
        const bool branch_taken_0x1332f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1332f0) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x1332F8u;
    // 0x1332f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1332F8u;
    {
        const bool branch_taken_0x1332f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1332FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1332F8u;
        // 0x1332fc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1332f8) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x133300u;
}
