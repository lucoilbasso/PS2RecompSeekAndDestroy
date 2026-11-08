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

// Function: entry_0017bbb8
// Address: 0x17bbb8 - 0x17bbd8
void entry_0017bbb8_0x17bbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bbb8_0x17bbb8");
#endif

    ctx->pc = 0x17bbb8u;

    // 0x17bbb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17bbbc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17bbc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17bbc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bbc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17bbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bbc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17bbc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bbcc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17bbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBD0u;
        // 0x17bbd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BBD8u;
}
