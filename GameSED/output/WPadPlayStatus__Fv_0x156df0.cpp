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

// Function: WPadPlayStatus__Fv
// Address: 0x156df0 - 0x156e54
void WPadPlayStatus__Fv_0x156df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadPlayStatus__Fv_0x156df0");
#endif

    ctx->pc = 0x156df0u;

    // 0x156df0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x156df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x156df4: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x156df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x156df8: 0x244635e0  addiu       $a2, $v0, 0x35E0
    ctx->pc = 0x156df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13792));
    // 0x156dfc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x156dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x156e00: 0x24c70014  addiu       $a3, $a2, 0x14
    ctx->pc = 0x156e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x156e04: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x156e04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2635F8u));
    // 0x156e08: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x156e08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2635F4u));
    // 0x156e0c: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x156e0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x2635F7u));
    // 0x156e10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x156e14: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x156e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x156e18: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x156e18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x156e1c: 0x24a300ff  addiu       $v1, $a1, 0xFF
    ctx->pc = 0x156e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x156e20: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x156E20u;
    {
        const bool branch_taken_0x156e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E20u;
        // 0x156e24: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e20) {
            ctx->pc = 0x156E4Cu;
            goto label_156e4c;
        }
    }
    ctx->pc = 0x156E28u;
    // 0x156e28: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x156E28u;
    {
        const bool branch_taken_0x156e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x156E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E28u;
        // 0x156e2c: 0xa0e30003  sb          $v1, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e28) {
            ctx->pc = 0x156E4Cu;
            goto label_156e4c;
        }
    }
    ctx->pc = 0x156E30u;
    // 0x156e30: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x156e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x156e34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x156e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156e38: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x156e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156e3c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x156e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x156e40: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x156e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x156e44: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x156e44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x156e48: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x156e48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_156e4c:
    // 0x156e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x156E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156E54u;
}
