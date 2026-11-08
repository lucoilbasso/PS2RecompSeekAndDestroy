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

// Function: Val_Conv2Decimal__FiPcib
// Address: 0x19cbc8 - 0x19cc9c
void Val_Conv2Decimal__FiPcib_0x19cbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Val_Conv2Decimal__FiPcib_0x19cbc8");
#endif

    switch (ctx->pc) {
        case 0x19cc18u: goto label_19cc18;
        case 0x19cc28u: goto label_19cc28;
        default: break;
    }

    ctx->pc = 0x19cbc8u;

    // 0x19cbc8: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x19cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19cbcc: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x19cbccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x19cbd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CBD0u;
    {
        const bool branch_taken_0x19cbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBD0u;
        // 0x19cbd4: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cbd0) {
            ctx->pc = 0x19CBE8u;
            goto label_19cbe8;
        }
    }
    ctx->pc = 0x19CBD8u;
    // 0x19cbd8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19cbdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19CBDCu;
    {
        const bool branch_taken_0x19cbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBDCu;
        // 0x19cbe0: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cbdc) {
            ctx->pc = 0x19CBECu;
            goto label_19cbec;
        }
    }
    ctx->pc = 0x19CBE4u;
    // 0x19cbe4: 0x0  nop
    ctx->pc = 0x19cbe4u;
    // NOP
label_19cbe8:
    // 0x19cbe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19cbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cbec:
    // 0x19cbec: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x19cbecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cbf0: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x19cbf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19cbf4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x19CBF4u;
    {
        const bool branch_taken_0x19cbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBF4u;
        // 0x19cbf8: 0x240cffff  addiu       $t4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cbf4) {
            ctx->pc = 0x19CC88u;
            goto label_19cc88;
        }
    }
    ctx->pc = 0x19CBFCu;
    // 0x19cbfc: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x19cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x19cc00: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x19cc00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19cc04: 0x3c0b0022  lui         $t3, 0x22
    ctx->pc = 0x19cc04u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)34 << 16));
    // 0x19cc08: 0x256beff8  addiu       $t3, $t3, -0x1008
    ctx->pc = 0x19cc08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294963192));
    // 0x19cc0c: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x19cc0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x19cc10: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x19cc10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19cc14: 0x0  nop
    ctx->pc = 0x19cc14u;
    // NOP
label_19cc18:
    // 0x19cc18: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x19cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x19cc1c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x19cc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19cc20: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19CC20u;
    {
        const bool branch_taken_0x19cc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC20u;
        // 0x19cc24: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc20) {
            ctx->pc = 0x19CC44u;
            goto label_19cc44;
        }
    }
    ctx->pc = 0x19CC28u;
label_19cc28:
    // 0x19cc28: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19cc2c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x19cc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19cc30: 0x0  nop
    ctx->pc = 0x19cc30u;
    // NOP
    // 0x19cc34: 0x0  nop
    ctx->pc = 0x19cc34u;
    // NOP
    // 0x19cc38: 0x0  nop
    ctx->pc = 0x19cc38u;
    // NOP
    // 0x19cc3c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CC3Cu;
    {
        const bool branch_taken_0x19cc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC3Cu;
        // 0x19cc40: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc3c) {
            ctx->pc = 0x19CC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cc28;
        }
    }
    ctx->pc = 0x19CC44u;
label_19cc44:
    // 0x19cc44: 0x11800002  beqz        $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x19CC44u;
    {
        const bool branch_taken_0x19cc44 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC44u;
        // 0x19cc48: 0x10e1026  xor         $v0, $t0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc44) {
            ctx->pc = 0x19CC50u;
            goto label_19cc50;
        }
    }
    ctx->pc = 0x19CC4Cu;
    // 0x19cc4c: 0x2600b  movn        $t4, $zero, $v0
    ctx->pc = 0x19cc4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_19cc50:
    // 0x19cc50: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CC50u;
    {
        const bool branch_taken_0x19cc50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC50u;
        // 0x19cc54: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc50) {
            ctx->pc = 0x19CC64u;
            goto label_19cc64;
        }
    }
    ctx->pc = 0x19CC58u;
    // 0x19cc58: 0x55800008  bnel        $t4, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19CC58u;
    {
        const bool branch_taken_0x19cc58 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cc58) {
            ctx->pc = 0x19CC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CC58u;
            // 0x19cc5c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CC7Cu;
            goto label_19cc7c;
        }
    }
    ctx->pc = 0x19CC60u;
    // 0x19cc60: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x19cc60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_19cc64:
    // 0x19cc64: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CC64u;
    {
        const bool branch_taken_0x19cc64 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC64u;
        // 0x19cc68: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc64) {
            ctx->pc = 0x19CC74u;
            goto label_19cc74;
        }
    }
    ctx->pc = 0x19CC6Cu;
    // 0x19cc6c: 0x50e00002  beql        $a3, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x19CC6Cu;
    {
        const bool branch_taken_0x19cc6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cc6c) {
            ctx->pc = 0x19CC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CC6Cu;
            // 0x19cc70: 0xa04d0000  sb          $t5, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CC78u;
            goto label_19cc78;
        }
    }
    ctx->pc = 0x19CC74u;
label_19cc74:
    // 0x19cc74: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x19cc74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
label_19cc78:
    // 0x19cc78: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19cc78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_19cc7c:
    // 0x19cc7c: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x19cc7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19cc80: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x19CC80u;
    {
        const bool branch_taken_0x19cc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC80u;
        // 0x19cc84: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc80) {
            ctx->pc = 0x19CC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cc18;
        }
    }
    ctx->pc = 0x19CC88u;
label_19cc88:
    // 0x19cc88: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x19cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x19cc8c: 0xa1400001  sb          $zero, 0x1($t2)
    ctx->pc = 0x19cc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x19cc90: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x19cc90u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19cc94: 0x3e00008  jr          $ra
    ctx->pc = 0x19CC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC94u;
        // 0x19cc98: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CC9Cu;
}
