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

// Function: entry_001c79c0
// Address: 0x1c79c0 - 0x1c7a14
void entry_001c79c0_0x1c79c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c79c0_0x1c79c0");
#endif

    switch (ctx->pc) {
        case 0x1c79d8u: goto label_1c79d8;
        case 0x1c79ecu: goto label_1c79ec;
        case 0x1c79fcu: goto label_1c79fc;
        default: break;
    }

    ctx->pc = 0x1c79c0u;

label_1c79c0:
    // 0x1c79c0: 0xde700000  ld          $s0, 0x0($s3)
    ctx->pc = 0x1c79c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c79c4: 0xde710008  ld          $s1, 0x8($s3)
    ctx->pc = 0x1c79c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c79c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c79c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c79ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79d0: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C79D0u;
    SET_GPR_U32(ctx, 31, 0x1C79D8u);
    ctx->pc = 0x1C79D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79D0u;
    // 0x1c79d4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C79D0u, 0x1C79D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79D8u;
label_1c79d8:
    // 0x1c79d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c79d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c79dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c79e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79e4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C79E4u;
    SET_GPR_U32(ctx, 31, 0x1C79ECu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C79E4u, 0x1C79ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79ECu;
label_1c79ec:
    // 0x1c79ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c79ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c79f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79f4: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C79F4u;
    SET_GPR_U32(ctx, 31, 0x1C79FCu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C79F4u, 0x1C79FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79FCu;
label_1c79fc:
    // 0x1c79fc: 0xfe740000  sd          $s4, 0x0($s3)
    ctx->pc = 0x1c79fcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 20));
    // 0x1c7a00: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x1c7a00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c7a04: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x1c7a04u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1c7a08: 0x1060ffed  beqz        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C7A08u;
    {
        const bool branch_taken_0x1c7a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A08u;
        // 0x1c7a0c: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a08) {
            ctx->pc = 0x1C79C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c79c0;
        }
    }
    ctx->pc = 0x1C7A10u;
    // 0x1c7a10: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c7a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c7a14u;
}
