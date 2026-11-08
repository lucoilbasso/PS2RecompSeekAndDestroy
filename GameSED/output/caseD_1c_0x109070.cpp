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

// Function: caseD_1c
// Address: 0x109070 - 0x1090a0
void caseD_1c_0x109070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1c_0x109070");
#endif

    switch (ctx->pc) {
        case 0x109078u: goto label_109078;
        case 0x109084u: goto label_109084;
        case 0x109098u: goto label_109098;
        default: break;
    }

    ctx->pc = 0x109070u;

    // 0x109070: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x109070u;
    SET_GPR_U32(ctx, 31, 0x109078u);
    ctx->pc = 0x109074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109070u;
    // 0x109074: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x109070u, 0x109078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109078u;
label_109078:
    // 0x109078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10907c: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x10907Cu;
    SET_GPR_U32(ctx, 31, 0x109084u);
    ctx->pc = 0x109080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10907Cu;
    // 0x109080: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x10907Cu, 0x109084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109084u;
label_109084:
    // 0x109084: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x109084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109088: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x109088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10908c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10908cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109090: 0xc0695ac  jal         func_1A56B0
    ctx->pc = 0x109090u;
    SET_GPR_U32(ctx, 31, 0x109098u);
    ctx->pc = 0x109094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109090u;
    // 0x109094: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A56B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A56B0u, 0x109090u, 0x109098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109098u;
label_109098:
    // 0x109098: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x109098u;
    {
        const bool branch_taken_0x109098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109098u;
        // 0x10909c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109098) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x1090A0u;
}
