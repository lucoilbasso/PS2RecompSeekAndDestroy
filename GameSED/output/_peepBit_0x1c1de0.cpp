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

// Function: _peepBit
// Address: 0x1c1de0 - 0x1c1ee8
void _peepBit_0x1c1de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_peepBit_0x1c1de0");
#endif

    switch (ctx->pc) {
        case 0x1c1e40u: goto label_1c1e40;
        case 0x1c1e58u: goto label_1c1e58;
        case 0x1c1eb0u: goto label_1c1eb0;
        default: break;
    }

    ctx->pc = 0x1c1de0u;

    // 0x1c1de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1de4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c1de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c1de8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1dec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c1decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c1df0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1df4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c1df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c1df8: 0x8e020818  lw          $v0, 0x818($s0)
    ctx->pc = 0x1c1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2072)));
    // 0x1c1dfc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1DFCu;
    {
        const bool branch_taken_0x1c1dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DFCu;
        // 0x1c1e00: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1dfc) {
            ctx->pc = 0x1C1E14u;
            goto label_1c1e14;
        }
    }
    ctx->pc = 0x1C1E04u;
    // 0x1c1e04: 0x8e02083c  lw          $v0, 0x83C($s0)
    ctx->pc = 0x1c1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2108)));
    // 0x1c1e08: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1c1e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c1e0c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C1E0Cu;
    {
        const bool branch_taken_0x1c1e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e0c) {
            ctx->pc = 0x1C1E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1E0Cu;
            // 0x1c1e10: 0x8e030838  lw          $v1, 0x838($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1EC8u;
            goto label_1c1ec8;
        }
    }
    ctx->pc = 0x1C1E14u;
label_1c1e14:
    // 0x1c1e14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1e18: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1c1e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1e1c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1c1e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1c1e20: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1c1e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1c1e24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c1e28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1e2c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c1e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c1e30: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C1E30u;
    {
        const bool branch_taken_0x1c1e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E30u;
        // 0x1c1e34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e30) {
            ctx->pc = 0x1C1E88u;
            goto label_1c1e88;
        }
    }
    ctx->pc = 0x1C1E38u;
    // 0x1c1e38: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x1c1e38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x1c1e3c: 0x0  nop
    ctx->pc = 0x1c1e3cu;
    // NOP
label_1c1e40:
    // 0x1c1e40: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c1e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e44: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1c1e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1c1e48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1E48u;
    {
        const bool branch_taken_0x1c1e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E48u;
        // 0x1c1e4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e48) {
            ctx->pc = 0x1C1E5Cu;
            goto label_1c1e5c;
        }
    }
    ctx->pc = 0x1C1E50u;
    // 0x1c1e50: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1C1E50u;
    SET_GPR_U32(ctx, 31, 0x1C1E58u);
    ctx->pc = 0x1C1E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E50u;
    // 0x1c1e54: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1C1E50u, 0x1C1E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E58u;
label_1c1e58:
    // 0x1c1e58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e5c:
    // 0x1c1e5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1e60: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1c1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1e64: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c1e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c1e68: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1c1e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1c1e6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c1e70: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1c1e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1e74: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c1e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c1e78: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1C1E78u;
    {
        const bool branch_taken_0x1c1e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E78u;
        // 0x1c1e7c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e78) {
            ctx->pc = 0x1C1E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1e40;
        }
    }
    ctx->pc = 0x1C1E80u;
    // 0x1c1e80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1E80u;
    {
        const bool branch_taken_0x1c1e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E80u;
        // 0x1c1e84: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e80) {
            ctx->pc = 0x1C1E94u;
            goto label_1c1e94;
        }
    }
    ctx->pc = 0x1C1E88u;
label_1c1e88:
    // 0x1c1e88: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x1c1e88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x1c1e8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1e90: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c1e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1c1e94:
    // 0x1c1e94: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c1e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c1e98: 0x2625dcc0  addiu       $a1, $s1, -0x2340
    ctx->pc = 0x1c1e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958272));
    // 0x1c1e9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c1e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c1ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ea4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1c1ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1c1ea8: 0xc0706ee  jal         func_1C1BB8
    ctx->pc = 0x1C1EA8u;
    SET_GPR_U32(ctx, 31, 0x1C1EB0u);
    ctx->pc = 0x1C1EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1EA8u;
    // 0x1c1eac: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BB8u, 0x1C1EA8u, 0x1C1EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1EB0u;
label_1c1eb0:
    // 0x1c1eb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c1eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c1eb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c1eb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c1eb8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1c1eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c1ebc: 0xae020838  sw          $v0, 0x838($s0)
    ctx->pc = 0x1c1ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 2));
    // 0x1c1ec0: 0xae03083c  sw          $v1, 0x83C($s0)
    ctx->pc = 0x1c1ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 3));
    // 0x1c1ec4: 0x8e030838  lw          $v1, 0x838($s0)
    ctx->pc = 0x1c1ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
label_1c1ec8:
    // 0x1c1ec8: 0x121023  negu        $v0, $s2
    ctx->pc = 0x1c1ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x1c1ecc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1ed0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c1ed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1ed4: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x1c1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1c1ed8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c1ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1edc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EE0u;
        // 0x1c1ee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1EE8u;
}
