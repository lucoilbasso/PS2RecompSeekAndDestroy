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

// Function: entry_00100f98
// Address: 0x100f98 - 0x100fcc
void entry_00100f98_0x100f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100f98_0x100f98");
#endif

    ctx->pc = 0x100f98u;

    // 0x100f98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x100f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x100f9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x100f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x100fa0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x100fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x100fa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x100fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x100fa8: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x100fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x100fac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100FACu;
    {
        const bool branch_taken_0x100fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FACu;
        // 0x100fb0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fac) {
            ctx->pc = 0x100FCCu;
            return;
        }
    }
    ctx->pc = 0x100FB4u;
    // 0x100fb4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x100fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x100fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fbc: 0x24a519e0  addiu       $a1, $a1, 0x19E0
    ctx->pc = 0x100fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6624));
    // 0x100fc0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x100fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x100fc4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x100FC4u;
    SET_GPR_U32(ctx, 31, 0x100FCCu);
    ctx->pc = 0x100FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100FC4u;
    // 0x100fc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x100FC4u, 0x100FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100FCCu;
}
