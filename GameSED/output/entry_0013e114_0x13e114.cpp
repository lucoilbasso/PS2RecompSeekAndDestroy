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

// Function: entry_0013e114
// Address: 0x13e114 - 0x13e140
void entry_0013e114_0x13e114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e114_0x13e114");
#endif

    ctx->pc = 0x13e114u;

    // 0x13e114: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x13e114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13e118: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x13e118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13e11c: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x13e11cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x13e120: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x13e120u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13e124: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x13e124u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x13e128: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x13e128u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13e12c: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x13e12cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x13e130: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x13e130u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x13e134: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x13e134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x13e138: 0x3e00008  jr          $ra
    ctx->pc = 0x13E138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E138u;
        // 0x13e13c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E140u;
}
