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

// Function: entry_00171c18
// Address: 0x171c18 - 0x171c50
void entry_00171c18_0x171c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171c18_0x171c18");
#endif

    switch (ctx->pc) {
        case 0x171c20u: goto label_171c20;
        default: break;
    }

    ctx->pc = 0x171c18u;

    // 0x171c18: 0xc06f650  jal         func_1BD940
    ctx->pc = 0x171C18u;
    SET_GPR_U32(ctx, 31, 0x171C20u);
    ctx->pc = 0x171C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C18u;
    // 0x171c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD940u, 0x171C18u, 0x171C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C20u;
label_171c20:
    // 0x171c20: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x171c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171c28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171c2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x171c2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171c30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x171c30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171c34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x171c34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171c38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x171c38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x171c3c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x171c3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171c40: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x171c40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x171c44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x171c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171c48: 0x3e00008  jr          $ra
    ctx->pc = 0x171C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C48u;
        // 0x171c4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171C50u;
}
