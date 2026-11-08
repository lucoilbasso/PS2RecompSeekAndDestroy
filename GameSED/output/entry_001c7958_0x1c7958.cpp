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

// Function: entry_001c7958
// Address: 0x1c7958 - 0x1c79ac
void entry_001c7958_0x1c7958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7958_0x1c7958");
#endif

    switch (ctx->pc) {
        case 0x1c7970u: goto label_1c7970;
        case 0x1c7984u: goto label_1c7984;
        case 0x1c7994u: goto label_1c7994;
        default: break;
    }

    ctx->pc = 0x1c7958u;

label_1c7958:
    // 0x1c7958: 0xde700000  ld          $s0, 0x0($s3)
    ctx->pc = 0x1c7958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c795c: 0xde710008  ld          $s1, 0x8($s3)
    ctx->pc = 0x1c795cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c7960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c7964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7968: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7968u;
    SET_GPR_U32(ctx, 31, 0x1C7970u);
    ctx->pc = 0x1C796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7968u;
    // 0x1c796c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7968u, 0x1C7970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7970u;
label_1c7970:
    // 0x1c7970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7974: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c7974u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7978: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c7978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c797c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C797Cu;
    SET_GPR_U32(ctx, 31, 0x1C7984u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C797Cu, 0x1C7984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7984u;
label_1c7984:
    // 0x1c7984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7988: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c7988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c798c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C798Cu;
    SET_GPR_U32(ctx, 31, 0x1C7994u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C798Cu, 0x1C7994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7994u;
label_1c7994:
    // 0x1c7994: 0xfe740000  sd          $s4, 0x0($s3)
    ctx->pc = 0x1c7994u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 20));
    // 0x1c7998: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x1c7998u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1c799c: 0x1e40ffee  bgtz        $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C799Cu;
    {
        const bool branch_taken_0x1c799c = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x1C79A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C799Cu;
        // 0x1c79a0: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c799c) {
            ctx->pc = 0x1C7958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7958;
        }
    }
    ctx->pc = 0x1C79A4u;
    // 0x1c79a4: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c79a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c79a8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1c79a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x1c79acu;
}
