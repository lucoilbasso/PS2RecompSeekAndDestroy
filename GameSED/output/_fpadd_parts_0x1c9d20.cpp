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

// Function: _fpadd_parts
// Address: 0x1c9d20 - 0x1c9f7c
void _fpadd_parts_0x1c9d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fpadd_parts_0x1c9d20");
#endif

    switch (ctx->pc) {
        case 0x1c9e18u: goto label_1c9e18;
        case 0x1c9e48u: goto label_1c9e48;
        case 0x1c9ef0u: goto label_1c9ef0;
        default: break;
    }

    ctx->pc = 0x1c9d20u;

    // 0x1c9d20: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1c9d20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d24: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x1c9d24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1c9d28: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x1c9d28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c9d2c: 0x14600091  bnez        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x1C9D2Cu;
    {
        const bool branch_taken_0x1c9d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D2Cu;
        // 0x1c9d30: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d2c) {
            ctx->pc = 0x1C9F74u;
            goto label_1c9f74;
        }
    }
    ctx->pc = 0x1C9D34u;
    // 0x1c9d34: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1c9d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c9d38: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x1c9d38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c9d3c: 0x1460008d  bnez        $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x1C9D3Cu;
    {
        const bool branch_taken_0x1c9d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D3Cu;
        // 0x1c9d40: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d3c) {
            ctx->pc = 0x1C9F74u;
            goto label_1c9f74;
        }
    }
    ctx->pc = 0x1C9D44u;
    // 0x1c9d44: 0x38e20004  xori        $v0, $a3, 0x4
    ctx->pc = 0x1c9d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x1c9d48: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9D48u;
    {
        const bool branch_taken_0x1c9d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D48u;
        // 0x1c9d4c: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d48) {
            ctx->pc = 0x1C9D78u;
            goto label_1c9d78;
        }
    }
    ctx->pc = 0x1C9D50u;
    // 0x1c9d50: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x1c9d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x1c9d54: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C9D54u;
    {
        const bool branch_taken_0x1c9d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d54) {
            ctx->pc = 0x1C9DC8u;
            goto label_1c9dc8;
        }
    }
    ctx->pc = 0x1C9D5Cu;
    // 0x1c9d5c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1c9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c9d60: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x1c9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1c9d64: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C9D64u;
    {
        const bool branch_taken_0x1c9d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c9d64) {
            ctx->pc = 0x1C9DC8u;
            goto label_1c9dc8;
        }
    }
    ctx->pc = 0x1C9D6Cu;
    // 0x1c9d6c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c9d70: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D70u;
        // 0x1c9d74: 0x2442bfe0  addiu       $v0, $v0, -0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9D78u;
label_1c9d78:
    // 0x1c9d78: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x1C9D78u;
    {
        const bool branch_taken_0x1c9d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D78u;
        // 0x1c9d7c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d78) {
            ctx->pc = 0x1C9F74u;
            goto label_1c9f74;
        }
    }
    ctx->pc = 0x1C9D80u;
    // 0x1c9d80: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x1c9d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x1c9d84: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C9D84u;
    {
        const bool branch_taken_0x1c9d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D84u;
        // 0x1c9d88: 0x38e30002  xori        $v1, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d84) {
            ctx->pc = 0x1C9DD0u;
            goto label_1c9dd0;
        }
    }
    ctx->pc = 0x1C9D8Cu;
    // 0x1c9d8c: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x1c9d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x1c9d90: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C9D90u;
    {
        const bool branch_taken_0x1c9d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9d90) {
            ctx->pc = 0x1C9DC8u;
            goto label_1c9dc8;
        }
    }
    ctx->pc = 0x1C9D98u;
    // 0x1c9d98: 0xdd640000  ld          $a0, 0x0($t3)
    ctx->pc = 0x1c9d98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1c9d9c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c9d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9da0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x1c9da0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x1c9da4: 0xdd630008  ld          $v1, 0x8($t3)
    ctx->pc = 0x1c9da4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1c9da8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1c9da8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1c9dac: 0xdd640010  ld          $a0, 0x10($t3)
    ctx->pc = 0x1c9dacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1c9db0: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x1c9db0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x1c9db4: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x1c9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1c9db8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1c9db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c9dbc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c9dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c9dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DC0u;
        // 0x1c9dc4: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9DC8u;
label_1c9dc8:
    // 0x1c9dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DC8u;
        // 0x1c9dcc: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9DD0u;
label_1c9dd0:
    // 0x1c9dd0: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1C9DD0u;
    {
        const bool branch_taken_0x1c9dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DD0u;
        // 0x1c9dd4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9dd0) {
            ctx->pc = 0x1C9F74u;
            goto label_1c9f74;
        }
    }
    ctx->pc = 0x1C9DD8u;
    // 0x1c9dd8: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x1c9dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1c9ddc: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1c9ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c9de0: 0xdd6a0010  ld          $t2, 0x10($t3)
    ctx->pc = 0x1c9de0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1c9de4: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x1c9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1c9de8: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1c9de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c9dec: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1c9decu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c9df0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1c9df0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1c9df4: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x1c9df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1c9df8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C9DF8u;
    {
        const bool branch_taken_0x1c9df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DF8u;
        // 0x1c9dfc: 0xdca90010  ld          $t1, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9df8) {
            ctx->pc = 0x1C9E70u;
            goto label_1c9e70;
        }
    }
    ctx->pc = 0x1C9E00u;
    // 0x1c9e00: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1c9e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c9e04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C9E04u;
    {
        const bool branch_taken_0x1c9e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E04u;
        // 0x1c9e08: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e04) {
            ctx->pc = 0x1C9E3Cu;
            goto label_1c9e3c;
        }
    }
    ctx->pc = 0x1C9E0Cu;
    // 0x1c9e0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9e10: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x1c9e10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1c9e14: 0x0  nop
    ctx->pc = 0x1c9e14u;
    // NOP
label_1c9e18:
    // 0x1c9e18: 0x9187a  dsrl        $v1, $t1, 1
    ctx->pc = 0x1c9e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> 1);
    // 0x1c9e1c: 0x1241024  and         $v0, $t1, $a0
    ctx->pc = 0x1c9e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x1c9e20: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c9e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c9e24: 0x0  nop
    ctx->pc = 0x1c9e24u;
    // NOP
    // 0x1c9e28: 0x0  nop
    ctx->pc = 0x1c9e28u;
    // NOP
    // 0x1c9e2c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C9E2Cu;
    {
        const bool branch_taken_0x1c9e2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E2Cu;
        // 0x1c9e30: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e2c) {
            ctx->pc = 0x1C9E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9e18;
        }
    }
    ctx->pc = 0x1C9E34u;
    // 0x1c9e34: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1c9e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e38: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x1c9e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1c9e3c:
    // 0x1c9e3c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C9E3Cu;
    {
        const bool branch_taken_0x1c9e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e3c) {
            ctx->pc = 0x1C9E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9E3Cu;
            // 0x1c9e40: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9E90u;
            goto label_1c9e90;
        }
    }
    ctx->pc = 0x1C9E44u;
    // 0x1c9e44: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1c9e44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9e48:
    // 0x1c9e48: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c9e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c9e4c: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x1c9e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x1c9e50: 0x14c1824  and         $v1, $t2, $t4
    ctx->pc = 0x1c9e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x1c9e54: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x1c9e54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1c9e58: 0x0  nop
    ctx->pc = 0x1c9e58u;
    // NOP
    // 0x1c9e5c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C9E5Cu;
    {
        const bool branch_taken_0x1c9e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E5Cu;
        // 0x1c9e60: 0x625025  or          $t2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e5c) {
            ctx->pc = 0x1C9E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9e48;
        }
    }
    ctx->pc = 0x1C9E64u;
    // 0x1c9e64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C9E64u;
    {
        const bool branch_taken_0x1c9e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E64u;
        // 0x1c9e68: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e64) {
            ctx->pc = 0x1C9E90u;
            goto label_1c9e90;
        }
    }
    ctx->pc = 0x1C9E6Cu;
    // 0x1c9e6c: 0x0  nop
    ctx->pc = 0x1c9e6cu;
    // NOP
label_1c9e70:
    // 0x1c9e70: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1c9e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c9e74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9E74u;
    {
        const bool branch_taken_0x1c9e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e74) {
            ctx->pc = 0x1C9E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9E74u;
            // 0x1c9e78: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9E88u;
            goto label_1c9e88;
        }
    }
    ctx->pc = 0x1C9E7Cu;
    // 0x1c9e7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9E7Cu;
    {
        const bool branch_taken_0x1c9e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E7Cu;
        // 0x1c9e80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e7c) {
            ctx->pc = 0x1C9E8Cu;
            goto label_1c9e8c;
        }
    }
    ctx->pc = 0x1C9E84u;
    // 0x1c9e84: 0x0  nop
    ctx->pc = 0x1c9e84u;
    // NOP
label_1c9e88:
    // 0x1c9e88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9e88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9e8c:
    // 0x1c9e8c: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x1c9e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_1c9e90:
    // 0x1c9e90: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1c9e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c9e94: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C9E94u;
    {
        const bool branch_taken_0x1c9e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E94u;
        // 0x1c9e98: 0x149102f  dsubu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e94) {
            ctx->pc = 0x1C9F28u;
            goto label_1c9f28;
        }
    }
    ctx->pc = 0x1C9E9Cu;
    // 0x1c9e9c: 0x12a182f  dsubu       $v1, $t1, $t2
    ctx->pc = 0x1c9e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) - GPR_U64(ctx, 10));
    // 0x1c9ea0: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x1c9ea0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1c9ea4: 0x4620006  bltzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9EA4u;
    {
        const bool branch_taken_0x1c9ea4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1c9ea4) {
            ctx->pc = 0x1C9EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9EA4u;
            // 0x1c9ea8: 0x3182f  dsubu       $v1, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9EC0u;
            goto label_1c9ec0;
        }
    }
    ctx->pc = 0x1C9EACu;
    // 0x1c9eac: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1c9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x1c9eb0: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1c9eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1c9eb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9EB4u;
    {
        const bool branch_taken_0x1c9eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EB4u;
        // 0x1c9eb8: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9eb4) {
            ctx->pc = 0x1C9ED0u;
            goto label_1c9ed0;
        }
    }
    ctx->pc = 0x1C9EBCu;
    // 0x1c9ebc: 0x0  nop
    ctx->pc = 0x1c9ebcu;
    // NOP
label_1c9ec0:
    // 0x1c9ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9ec4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1c9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1c9ec8: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1c9ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x1c9ecc: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1c9eccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_1c9ed0:
    // 0x1c9ed0: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x1c9ed0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1c9ed4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9ed8: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x1c9ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x1c9edc: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1c9edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1c9ee0: 0x64e3ffff  daddiu      $v1, $a3, -0x1
    ctx->pc = 0x1c9ee0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4294967295);
    // 0x1c9ee4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1c9ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c9ee8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C9EE8u;
    {
        const bool branch_taken_0x1c9ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ee8) {
            ctx->pc = 0x1C9F3Cu;
            goto label_1c9f3c;
        }
    }
    ctx->pc = 0x1C9EF0u;
label_1c9ef0:
    // 0x1c9ef0: 0x72878  dsll        $a1, $a3, 1
    ctx->pc = 0x1c9ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << 1);
    // 0x1c9ef4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1c9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c9ef8: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x1c9ef8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x1c9efc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1c9efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9f00: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x1c9f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x1c9f04: 0x4213a  dsrl        $a0, $a0, 4
    ctx->pc = 0x1c9f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    // 0x1c9f08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c9f0c: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x1c9f0cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c9f10: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1c9f10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1c9f14: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c9f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f18: 0x1080fff5  beqz        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C9F18u;
    {
        const bool branch_taken_0x1c9f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F18u;
        // 0x1c9f1c: 0xfcc50010  sd          $a1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f18) {
            ctx->pc = 0x1C9EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9ef0;
        }
    }
    ctx->pc = 0x1C9F20u;
    // 0x1c9f20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9F20u;
    {
        const bool branch_taken_0x1c9f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f20) {
            ctx->pc = 0x1C9F3Cu;
            goto label_1c9f3c;
        }
    }
    ctx->pc = 0x1C9F28u;
label_1c9f28:
    // 0x1c9f28: 0x149102d  daddu       $v0, $t2, $t1
    ctx->pc = 0x1c9f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
    // 0x1c9f2c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1c9f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1c9f30: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1c9f30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x1c9f34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c9f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f38: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1c9f38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_1c9f3c:
    // 0x1c9f3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9f40: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1c9f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x1c9f44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c9f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9f48: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1c9f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c9f4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9F4Cu;
    {
        const bool branch_taken_0x1c9f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F4Cu;
        // 0x1c9f50: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f4c) {
            ctx->pc = 0x1C9F70u;
            goto label_1c9f70;
        }
    }
    ctx->pc = 0x1C9F54u;
    // 0x1c9f54: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1c9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c9f58: 0x7207a  dsrl        $a0, $a3, 1
    ctx->pc = 0x1c9f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 1);
    // 0x1c9f5c: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x1c9f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1c9f60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c9f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9f64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c9f68: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1c9f68u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1c9f6c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1c9f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1c9f70:
    // 0x1c9f70: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c9f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c9f74:
    // 0x1c9f74: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9F7Cu;
}
