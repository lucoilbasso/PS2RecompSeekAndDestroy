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

// Function: caseD_18
// Address: 0x108eb8 - 0x108ee8
void caseD_18_0x108eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x108eb8");
#endif

    switch (ctx->pc) {
        case 0x108ec0u: goto label_108ec0;
        case 0x108eccu: goto label_108ecc;
        case 0x108ee0u: goto label_108ee0;
        default: break;
    }

    ctx->pc = 0x108eb8u;

    // 0x108eb8: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x108EB8u;
    SET_GPR_U32(ctx, 31, 0x108EC0u);
    ctx->pc = 0x108EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EB8u;
    // 0x108ebc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x108EB8u, 0x108EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EC0u;
label_108ec0:
    // 0x108ec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ec4: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x108EC4u;
    SET_GPR_U32(ctx, 31, 0x108ECCu);
    ctx->pc = 0x108EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EC4u;
    // 0x108ec8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x108EC4u, 0x108ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108ECCu;
label_108ecc:
    // 0x108ecc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ed0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ed4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ed8: 0xc06956a  jal         func_1A55A8
    ctx->pc = 0x108ED8u;
    SET_GPR_U32(ctx, 31, 0x108EE0u);
    ctx->pc = 0x108EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108ED8u;
    // 0x108edc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A55A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A55A8u, 0x108ED8u, 0x108EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EE0u;
label_108ee0:
    // 0x108ee0: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x108EE0u;
    {
        const bool branch_taken_0x108ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EE0u;
        // 0x108ee4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ee0) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108EE8u;
}
