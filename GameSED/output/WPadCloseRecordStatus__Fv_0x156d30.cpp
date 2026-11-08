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

// Function: WPadCloseRecordStatus__Fv
// Address: 0x156d30 - 0x156df0
void WPadCloseRecordStatus__Fv_0x156d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadCloseRecordStatus__Fv_0x156d30");
#endif

    switch (ctx->pc) {
        case 0x156d48u: goto label_156d48;
        default: break;
    }

    ctx->pc = 0x156d30u;

    // 0x156d30: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x156d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x156d34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x156d34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d38: 0x246335e0  addiu       $v1, $v1, 0x35E0
    ctx->pc = 0x156d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13792));
    // 0x156d3c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x156d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2635E8u));
    // 0x156d40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x156d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x156d44: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x156d44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2635E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2635E8u, _value); } while (0);
label_156d48:
    // 0x156d48: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x156d48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x156d4c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x156d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x156d50: 0x244735e0  addiu       $a3, $v0, 0x35E0
    ctx->pc = 0x156d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 13792));
    // 0x156d54: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x156d54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2635ECu));
    // 0x156d58: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x156d58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2635E4u));
    // 0x156d5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156d60: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x156d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x156d64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156d68: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x156d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x156d6c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x156D6Cu;
    {
        const bool branch_taken_0x156d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d6c) {
            ctx->pc = 0x156DE8u;
            goto label_156de8;
        }
    }
    ctx->pc = 0x156D74u;
    // 0x156d74: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x156d74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x156d78: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x156d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x156d7c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x156D7Cu;
    {
        const bool branch_taken_0x156d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D7Cu;
        // 0x156d80: 0x2c4500fa  sltiu       $a1, $v0, 0xFA (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)250) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156d7c) {
            ctx->pc = 0x156DA8u;
            goto label_156da8;
        }
    }
    ctx->pc = 0x156D84u;
    // 0x156d84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x156d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156d88: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x156d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x156d8c: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x156d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x156d90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x156d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x156d94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x156d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x156d98: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x156d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x156d9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x156da0: 0x3e00008  jr          $ra
    ctx->pc = 0x156DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156DA0u;
        // 0x156da4: 0xa0830003  sb          $v1, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156DA8u;
label_156da8:
    // 0x156da8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x156da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156dac: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x156dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x156db0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x156db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x156db4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x156db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x156db8: 0x54680007  bnel        $v1, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x156DB8u;
    {
        const bool branch_taken_0x156db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x156db8) {
            ctx->pc = 0x156DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156DB8u;
            // 0x156dbc: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156DD8u;
            goto label_156dd8;
        }
    }
    ctx->pc = 0x156DC0u;
    // 0x156dc0: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x156DC0u;
    {
        const bool branch_taken_0x156dc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x156dc0) {
            ctx->pc = 0x156DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156DC0u;
            // 0x156dc4: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156DD8u;
            goto label_156dd8;
        }
    }
    ctx->pc = 0x156DC8u;
    // 0x156dc8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x156dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x156dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x156DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156DCCu;
        // 0x156dd0: 0xa0820003  sb          $v0, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156DD4u;
    // 0x156dd4: 0x0  nop
    ctx->pc = 0x156dd4u;
    // NOP
label_156dd8:
    // 0x156dd8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x156dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x156ddc: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x156DDCu;
    {
        const bool branch_taken_0x156ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156DDCu;
        // 0x156de0: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ddc) {
            ctx->pc = 0x156D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156d48;
        }
    }
    ctx->pc = 0x156DE4u;
    // 0x156de4: 0x0  nop
    ctx->pc = 0x156de4u;
    // NOP
label_156de8:
    // 0x156de8: 0x3e00008  jr          $ra
    ctx->pc = 0x156DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156DF0u;
}
