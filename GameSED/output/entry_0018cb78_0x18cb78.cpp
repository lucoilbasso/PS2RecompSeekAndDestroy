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

// Function: entry_0018cb78
// Address: 0x18cb78 - 0x18cb94
void entry_0018cb78_0x18cb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cb78_0x18cb78");
#endif

    ctx->pc = 0x18cb78u;

    // 0x18cb78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18cb78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cb80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18cb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18cb84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18cb84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cb88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18cb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18cb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB8Cu;
        // 0x18cb90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CB94u;
}
