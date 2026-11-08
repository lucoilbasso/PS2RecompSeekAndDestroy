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

// Function: caseD_1e
// Address: 0x135bc8 - 0x135bf0
void caseD_1e_0x135bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1e_0x135bc8");
#endif

    switch (ctx->pc) {
        case 0x135bd8u: goto label_135bd8;
        case 0x135be4u: goto label_135be4;
        default: break;
    }

    ctx->pc = 0x135bc8u;

    // 0x135bc8: 0x5aa00009  blezl       $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x135BC8u;
    {
        const bool branch_taken_0x135bc8 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x135bc8) {
            ctx->pc = 0x135BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135BC8u;
            // 0x135bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135BF0u;
            return;
        }
    }
    ctx->pc = 0x135BD0u;
    // 0x135bd0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135BD0u;
    SET_GPR_U32(ctx, 31, 0x135BD8u);
    ctx->pc = 0x135BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BD0u;
    // 0x135bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135BD0u, 0x135BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BD8u;
label_135bd8:
    // 0x135bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135bdc: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135BDCu;
    SET_GPR_U32(ctx, 31, 0x135BE4u);
    ctx->pc = 0x135BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BDCu;
    // 0x135be0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135BDCu, 0x135BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BE4u;
label_135be4:
    // 0x135be4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x135BE4u;
    {
        const bool branch_taken_0x135be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BE4u;
        // 0x135be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135be4) {
            ctx->pc = 0x135BF8u;
            return;
        }
    }
    ctx->pc = 0x135BECu;
    // 0x135bec: 0x0  nop
    ctx->pc = 0x135becu;
    // NOP
    ctx->pc = 0x135bf0u;
}
