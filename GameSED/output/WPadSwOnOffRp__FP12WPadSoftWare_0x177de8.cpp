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

// Function: WPadSwOnOffRp__FP12WPadSoftWare
// Address: 0x177de8 - 0x177e64
void WPadSwOnOffRp__FP12WPadSoftWare_0x177de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadSwOnOffRp__FP12WPadSoftWare_0x177de8");
#endif

    ctx->pc = 0x177de8u;

    // 0x177de8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x177de8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177dec: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x177decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x177df0: 0x94e40008  lhu         $a0, 0x8($a3)
    ctx->pc = 0x177df0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x177df4: 0x94e3001a  lhu         $v1, 0x1A($a3)
    ctx->pc = 0x177df4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x177df8: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x177df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x177dfc: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x177dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x177e00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x177e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x177e04: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x177e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x177e08: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x177e08u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x177e0c: 0xa4e2000a  sh          $v0, 0xA($a3)
    ctx->pc = 0x177e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x177e10: 0x94c30014  lhu         $v1, 0x14($a2)
    ctx->pc = 0x177e10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x177e14: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x177e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x177e18: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x177E18u;
    {
        const bool branch_taken_0x177e18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x177e18) {
            ctx->pc = 0x177E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177E18u;
            // 0x177e1c: 0x8ce3001c  lw          $v1, 0x1C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177E30u;
            goto label_177e30;
        }
    }
    ctx->pc = 0x177E20u;
    // 0x177e20: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x177e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x177e24: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x177e24u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x177e28: 0x3e00008  jr          $ra
    ctx->pc = 0x177E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E28u;
        // 0x177e2c: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177E30u;
label_177e30:
    // 0x177e30: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x177e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x177e34: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x177E34u;
    {
        const bool branch_taken_0x177e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x177e34) {
            ctx->pc = 0x177E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177E34u;
            // 0x177e38: 0xa4e0000e  sh          $zero, 0xE($a3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177E40u;
            goto label_177e40;
        }
    }
    ctx->pc = 0x177E3Cu;
    // 0x177e3c: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x177e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
label_177e40:
    // 0x177e40: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x177e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x177e44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x177e48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177E48u;
    {
        const bool branch_taken_0x177e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E48u;
        // 0x177e4c: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e48) {
            ctx->pc = 0x177E5Cu;
            goto label_177e5c;
        }
    }
    ctx->pc = 0x177E50u;
    // 0x177e50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x177e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x177e54: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x177e54u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x177e58: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x177e58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_177e5c:
    // 0x177e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x177E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177E64u;
}
