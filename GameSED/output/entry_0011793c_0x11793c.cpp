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

// Function: entry_0011793c
// Address: 0x11793c - 0x117960
void entry_0011793c_0x11793c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011793c_0x11793c");
#endif

    ctx->pc = 0x11793cu;

    // 0x11793c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11793cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117940: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x117940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x117944: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x117944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117948: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x117948u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11794c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11794cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117950: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x117950u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x117954: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117958: 0x3e00008  jr          $ra
    ctx->pc = 0x117958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117958u;
        // 0x11795c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117960u;
}
