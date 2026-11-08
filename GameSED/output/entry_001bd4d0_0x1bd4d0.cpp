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

// Function: entry_001bd4d0
// Address: 0x1bd4d0 - 0x1bd4f8
void entry_001bd4d0_0x1bd4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd4d0_0x1bd4d0");
#endif

    switch (ctx->pc) {
        case 0x1bd4f4u: goto label_1bd4f4;
        default: break;
    }

    ctx->pc = 0x1bd4d0u;

    // 0x1bd4d0: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x1bd4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x1bd4d4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd4d8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD4D8u;
    {
        const bool branch_taken_0x1bd4d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4D8u;
        // 0x1bd4dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4d8) {
            ctx->pc = 0x1BD4F8u;
            return;
        }
    }
    ctx->pc = 0x1BD4E0u;
    // 0x1bd4e0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1bd4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1bd4e4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD4E4u;
    {
        const bool branch_taken_0x1bd4e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4E4u;
        // 0x1bd4e8: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4e4) {
            ctx->pc = 0x1BD4FCu;
            return;
        }
    }
    ctx->pc = 0x1BD4ECu;
    // 0x1bd4ec: 0xc07105e  jal         func_1C4178
    ctx->pc = 0x1BD4ECu;
    SET_GPR_U32(ctx, 31, 0x1BD4F4u);
    ctx->pc = 0x1BD4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD4ECu;
    // 0x1bd4f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4178u, 0x1BD4ECu, 0x1BD4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD4F4u;
label_1bd4f4:
    // 0x1bd4f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1bd4f8u;
}
