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

// Function: entry_0011976c
// Address: 0x11976c - 0x119798
void entry_0011976c_0x11976c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011976c_0x11976c");
#endif

    ctx->pc = 0x11976cu;

    // 0x11976c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119770: 0x240324d0  addiu       $v1, $zero, 0x24D0
    ctx->pc = 0x119770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x119774: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x119774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x119778: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x119778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11977c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11977cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x119780: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119784: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x119784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x119788: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x119788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11978c: 0xac440fe8  sw          $a0, 0xFE8($v0)
    ctx->pc = 0x11978cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4072), GPR_U32(ctx, 4));
    // 0x119790: 0x3e00008  jr          $ra
    ctx->pc = 0x119790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119790u;
        // 0x119794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119798u;
}
