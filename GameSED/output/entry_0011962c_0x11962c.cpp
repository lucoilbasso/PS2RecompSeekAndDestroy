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

// Function: entry_0011962c
// Address: 0x11962c - 0x119668
void entry_0011962c_0x11962c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011962c_0x11962c");
#endif

    ctx->pc = 0x11962cu;

    // 0x11962c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11962cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119630: 0x24030934  addiu       $v1, $zero, 0x934
    ctx->pc = 0x119630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2356));
    // 0x119634: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x119634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x119638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x119638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11963c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x11963cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x119640: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x119640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119644: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x119644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x119648: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11964c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11964cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119650: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119654: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x119654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x119658: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x119658u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x11965c: 0xac25d370  sw          $a1, -0x2C90($at)
    ctx->pc = 0x11965cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955888), GPR_U32(ctx, 5));
    // 0x119660: 0x3e00008  jr          $ra
    ctx->pc = 0x119660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119660u;
        // 0x119664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119668u;
}
