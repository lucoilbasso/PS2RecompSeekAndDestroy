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

// Function: entry_0015740c
// Address: 0x15740c - 0x15742c
void entry_0015740c_0x15740c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015740c_0x15740c");
#endif

    ctx->pc = 0x15740cu;

    // 0x15740c: 0x96030266  lhu         $v1, 0x266($s0)
    ctx->pc = 0x15740cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 614)));
    // 0x157410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157414: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x157414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x157418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15741c: 0xa6030266  sh          $v1, 0x266($s0)
    ctx->pc = 0x15741cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 3));
    // 0x157420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157424: 0x3e00008  jr          $ra
    ctx->pc = 0x157424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157424u;
        // 0x157428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15742Cu;
}
