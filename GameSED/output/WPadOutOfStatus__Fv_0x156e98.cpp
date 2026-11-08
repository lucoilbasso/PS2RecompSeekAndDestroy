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

// Function: WPadOutOfStatus__Fv
// Address: 0x156e98 - 0x156ec0
void WPadOutOfStatus__Fv_0x156e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadOutOfStatus__Fv_0x156e98");
#endif

    ctx->pc = 0x156e98u;

    // 0x156e98: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x156e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x156e9c: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x156e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x156ea0: 0x244235e0  addiu       $v0, $v0, 0x35E0
    ctx->pc = 0x156ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13792));
    // 0x156ea4: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x156ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x156ea8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x156ea8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2635F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635F8u, _value); } while (0);
    // 0x156eac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x156eacu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2635F7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2635F7u, _value); } while (0);
    // 0x156eb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x156eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2635F4u));
    // 0x156eb4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x156eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x156eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x156EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EB8u;
        // 0x156ebc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156EC0u;
}
