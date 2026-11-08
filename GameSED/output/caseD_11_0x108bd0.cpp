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

// Function: caseD_11
// Address: 0x108bd0 - 0x108bf0
void caseD_11_0x108bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x108bd0");
#endif

    switch (ctx->pc) {
        case 0x108bd8u: goto label_108bd8;
        case 0x108be4u: goto label_108be4;
        default: break;
    }

    ctx->pc = 0x108bd0u;

    // 0x108bd0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x108BD0u;
    SET_GPR_U32(ctx, 31, 0x108BD8u);
    ctx->pc = 0x108BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BD0u;
    // 0x108bd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x108BD0u, 0x108BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BD8u;
label_108bd8:
    // 0x108bd8: 0x8e84007c  lw          $a0, 0x7C($s4)
    ctx->pc = 0x108bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x108bdc: 0xc0694bc  jal         func_1A52F0
    ctx->pc = 0x108BDCu;
    SET_GPR_U32(ctx, 31, 0x108BE4u);
    ctx->pc = 0x108BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BDCu;
    // 0x108be0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A52F0u, 0x108BDCu, 0x108BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BE4u;
label_108be4:
    // 0x108be4: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x108BE4u;
    {
        const bool branch_taken_0x108be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BE4u;
        // 0x108be8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108be4) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108BECu;
    // 0x108bec: 0x0  nop
    ctx->pc = 0x108becu;
    // NOP
    ctx->pc = 0x108bf0u;
}
