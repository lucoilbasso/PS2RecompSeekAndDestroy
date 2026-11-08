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

// Function: entry_0010d2a8
// Address: 0x10d2a8 - 0x10d2cc
void entry_0010d2a8_0x10d2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d2a8_0x10d2a8");
#endif

    ctx->pc = 0x10d2a8u;

    // 0x10d2a8: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x10d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x10d2ac: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x10d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x10d2b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10d2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d2b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10d2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10d2b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10d2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d2bc: 0xae230150  sw          $v1, 0x150($s1)
    ctx->pc = 0x10d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 3));
    // 0x10d2c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10d2c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x10D2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2C4u;
        // 0x10d2c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D2CCu;
}
