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

// Function: Clear__9WcBgPanel
// Address: 0x1debb8 - 0x1dec0c
void Clear__9WcBgPanel_0x1debb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9WcBgPanel_0x1debb8");
#endif

    ctx->pc = 0x1debb8u;

    // 0x1debb8: 0x24830150  addiu       $v1, $a0, 0x150
    ctx->pc = 0x1debb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1debbc: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1debbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1debc0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x1debc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1debc4: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1debc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1debc8: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1debc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1debcc: 0x90e5eda0  lbu         $a1, -0x1260($a3)
    ctx->pc = 0x1debccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x21EDA0u));
    // 0x1debd0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1debd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1debd4: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1debd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1debd8: 0x8cc2d630  lw          $v0, -0x29D0($a2)
    ctx->pc = 0x1debd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x1debdc: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1debdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1debe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1debe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1debe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1debe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1debe8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1debe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1debec: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x1debecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x1debf0: 0xe461006c  swc1        $f1, 0x6C($v1)
    ctx->pc = 0x1debf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
    // 0x1debf4: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x1debf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x1debf8: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x1debf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1debfc: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x1debfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x1dec00: 0xe4610068  swc1        $f1, 0x68($v1)
    ctx->pc = 0x1dec00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x1dec04: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC04u;
        // 0x1dec08: 0xac600058  sw          $zero, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEC0Cu;
}
