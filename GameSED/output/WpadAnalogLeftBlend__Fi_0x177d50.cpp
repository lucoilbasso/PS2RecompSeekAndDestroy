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

// Function: WpadAnalogLeftBlend__Fi
// Address: 0x177d50 - 0x177de8
void WpadAnalogLeftBlend__Fi_0x177d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WpadAnalogLeftBlend__Fi_0x177d50");
#endif

    ctx->pc = 0x177d50u;

    // 0x177d50: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x177d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x177d54: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x177d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x177d58: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x177d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x177d5c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x177d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x177d60: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x177d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x177d64: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x177d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x177d68: 0x461001d  bgez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x177D68u;
    {
        const bool branch_taken_0x177d68 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x177d68) {
            ctx->pc = 0x177DE0u;
            goto label_177de0;
        }
    }
    ctx->pc = 0x177D70u;
    // 0x177d70: 0x90820012  lbu         $v0, 0x12($a0)
    ctx->pc = 0x177d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x177d74: 0x21982  srl         $v1, $v0, 6
    ctx->pc = 0x177d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x177d78: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x177D78u;
    {
        const bool branch_taken_0x177d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177d78) {
            ctx->pc = 0x177D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177D78u;
            // 0x177d7c: 0x94820008  lhu         $v0, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177D98u;
            goto label_177d98;
        }
    }
    ctx->pc = 0x177D80u;
    // 0x177d80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x177d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177d84: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x177D84u;
    {
        const bool branch_taken_0x177d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x177d84) {
            ctx->pc = 0x177D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177D84u;
            // 0x177d88: 0x94820008  lhu         $v0, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177DA0u;
            goto label_177da0;
        }
    }
    ctx->pc = 0x177D8Cu;
    // 0x177d8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x177D8Cu;
    {
        const bool branch_taken_0x177d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D8Cu;
        // 0x177d90: 0x90820013  lbu         $v0, 0x13($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d8c) {
            ctx->pc = 0x177DACu;
            goto label_177dac;
        }
    }
    ctx->pc = 0x177D94u;
    // 0x177d94: 0x0  nop
    ctx->pc = 0x177d94u;
    // NOP
label_177d98:
    // 0x177d98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177D98u;
    {
        const bool branch_taken_0x177d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D98u;
        // 0x177d9c: 0x34428000  ori         $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d98) {
            ctx->pc = 0x177DA4u;
            goto label_177da4;
        }
    }
    ctx->pc = 0x177DA0u;
label_177da0:
    // 0x177da0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x177da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_177da4:
    // 0x177da4: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x177da4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x177da8: 0x90820013  lbu         $v0, 0x13($a0)
    ctx->pc = 0x177da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
label_177dac:
    // 0x177dac: 0x21982  srl         $v1, $v0, 6
    ctx->pc = 0x177dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x177db0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x177DB0u;
    {
        const bool branch_taken_0x177db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DB0u;
        // 0x177db4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177db0) {
            ctx->pc = 0x177DC8u;
            goto label_177dc8;
        }
    }
    ctx->pc = 0x177DB8u;
    // 0x177db8: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x177DB8u;
    {
        const bool branch_taken_0x177db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x177db8) {
            ctx->pc = 0x177DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177DB8u;
            // 0x177dbc: 0x94820008  lhu         $v0, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177DD8u;
            goto label_177dd8;
        }
    }
    ctx->pc = 0x177DC0u;
    // 0x177dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x177DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177DC8u;
label_177dc8:
    // 0x177dc8: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x177dc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x177dcc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x177dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x177dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x177DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DD0u;
        // 0x177dd4: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177DD8u;
label_177dd8:
    // 0x177dd8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x177dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x177ddc: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x177ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
label_177de0:
    // 0x177de0: 0x3e00008  jr          $ra
    ctx->pc = 0x177DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177DE8u;
}
