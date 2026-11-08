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

// Function: entry_00186238
// Address: 0x186238 - 0x18625c
void entry_00186238_0x186238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186238_0x186238");
#endif

    ctx->pc = 0x186238u;

    // 0x186238: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x186238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x18623c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x18623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x186240: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x186240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x186244: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186248: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x186248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18624c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x18624cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x186250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186254: 0x3e00008  jr          $ra
    ctx->pc = 0x186254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186254u;
        // 0x186258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18625Cu;
}
