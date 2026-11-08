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

// Function: ApBgscrLensFlareSetup__FPP10WImageInfo
// Address: 0x1490b8 - 0x1490e4
void ApBgscrLensFlareSetup__FPP10WImageInfo_0x1490b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApBgscrLensFlareSetup__FPP10WImageInfo_0x1490b8");
#endif

    ctx->pc = 0x1490b8u;

    // 0x1490b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1490b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1490bc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1490bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1490c0: 0x24a526c0  addiu       $a1, $a1, 0x26C0
    ctx->pc = 0x1490c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9920));
    // 0x1490c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1490c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1490c8: 0xaca204f4  sw          $v0, 0x4F4($a1)
    ctx->pc = 0x1490c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x262BB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262BB4u, _value); } while (0);
    // 0x1490cc: 0xaca304f0  sw          $v1, 0x4F0($a1)
    ctx->pc = 0x1490ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x262BB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262BB0u, _value); } while (0);
    // 0x1490d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1490d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1490d4: 0xaca204f8  sw          $v0, 0x4F8($a1)
    ctx->pc = 0x1490d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x262BB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262BB8u, _value); } while (0);
    // 0x1490d8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1490d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1490dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1490DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1490E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490DCu;
        // 0x1490e0: 0xaca304fc  sw          $v1, 0x4FC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1490DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1490E4u;
}
