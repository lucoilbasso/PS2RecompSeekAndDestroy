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

// Function: entry_0017c9d4
// Address: 0x17c9d4 - 0x17c9ec
void entry_0017c9d4_0x17c9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c9d4_0x17c9d4");
#endif

    ctx->pc = 0x17c9d4u;

    // 0x17c9d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c9d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c9d8: 0x62100a  movz        $v0, $v1, $v0
    ctx->pc = 0x17c9d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x17c9dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c9e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9E4u;
        // 0x17c9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C9ECu;
}
