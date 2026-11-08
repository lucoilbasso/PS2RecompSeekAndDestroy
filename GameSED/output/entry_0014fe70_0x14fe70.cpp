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

// Function: entry_0014fe70
// Address: 0x14fe70 - 0x14fe90
void entry_0014fe70_0x14fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fe70_0x14fe70");
#endif

    ctx->pc = 0x14fe70u;

    // 0x14fe70: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x14fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14fe74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14fe74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14fe78: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x14fe78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x14fe7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14fe7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fe80: 0xae030184  sw          $v1, 0x184($s0)
    ctx->pc = 0x14fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
    // 0x14fe84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14fe84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fe88: 0x3e00008  jr          $ra
    ctx->pc = 0x14FE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE88u;
        // 0x14fe8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FE90u;
}
