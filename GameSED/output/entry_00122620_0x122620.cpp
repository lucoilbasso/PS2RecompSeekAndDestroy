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

// Function: entry_00122620
// Address: 0x122620 - 0x12264c
void entry_00122620_0x122620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122620_0x122620");
#endif

    switch (ctx->pc) {
        case 0x12263cu: goto label_12263c;
        default: break;
    }

    ctx->pc = 0x122620u;

    // 0x122620: 0x2542821  addu        $a1, $s2, $s4
    ctx->pc = 0x122620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x122624: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x122624u;
    {
        const bool branch_taken_0x122624 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x122628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122624u;
        // 0x122628: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122624) {
            ctx->pc = 0x12264Cu;
            return;
        }
    }
    ctx->pc = 0x12262Cu;
    // 0x12262c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12262cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122630: 0x24845c58  addiu       $a0, $a0, 0x5C58
    ctx->pc = 0x122630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23640));
    // 0x122634: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x122634u;
    SET_GPR_U32(ctx, 31, 0x12263Cu);
    ctx->pc = 0x122638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122634u;
    // 0x122638: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x122634u, 0x12263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12263Cu;
label_12263c:
    // 0x12263c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12263cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122640: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x122640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122644: 0xc068186  jal         func_1A0618
    ctx->pc = 0x122644u;
    SET_GPR_U32(ctx, 31, 0x12264Cu);
    ctx->pc = 0x122648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122644u;
    // 0x122648: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x122644u, 0x12264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12264Cu;
}
