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

// Function: entry_0014cb04
// Address: 0x14cb04 - 0x14cb20
void entry_0014cb04_0x14cb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cb04_0x14cb04");
#endif

    ctx->pc = 0x14cb04u;

    // 0x14cb04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14cb04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cb08: 0xae3001bc  sw          $s0, 0x1BC($s1)
    ctx->pc = 0x14cb08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 16));
    // 0x14cb0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14cb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14cb10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14cb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cb14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14cb14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14cb18: 0x3e00008  jr          $ra
    ctx->pc = 0x14CB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB18u;
        // 0x14cb1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CB20u;
}
