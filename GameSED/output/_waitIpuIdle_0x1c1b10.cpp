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

// Function: _waitIpuIdle
// Address: 0x1c1b10 - 0x1c1bb4
void _waitIpuIdle_0x1c1b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_waitIpuIdle_0x1c1b10");
#endif

    switch (ctx->pc) {
        case 0x1c1b70u: goto label_1c1b70;
        case 0x1c1b84u: goto label_1c1b84;
        default: break;
    }

    ctx->pc = 0x1c1b10u;

    // 0x1c1b10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c1b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c1b14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1b18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c1b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c1b1c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1c1b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1c1b20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c1b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c1b24: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1c1b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1b28: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1c1b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1c1b2c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1c1b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1c1b30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c1b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c1b34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c1b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1b3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c1b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c1b44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1b48: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1c1b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1c1b4c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C1B4Cu;
    {
        const bool branch_taken_0x1c1b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B4Cu;
        // 0x1c1b50: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b4c) {
            ctx->pc = 0x1C1B9Cu;
            goto label_1c1b9c;
        }
    }
    ctx->pc = 0x1C1B54u;
    // 0x1c1b54: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x1c1b54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1b58: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x1c1b58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1b5c: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x1c1b5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
    // 0x1c1b60: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x1c1b60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
    // 0x1c1b64: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x1c1b64u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1b68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c1b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b6c: 0x0  nop
    ctx->pc = 0x1c1b6cu;
    // NOP
label_1c1b70:
    // 0x1c1b70: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1c1b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1c1b74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1B74u;
    {
        const bool branch_taken_0x1c1b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B74u;
        // 0x1c1b78: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b74) {
            ctx->pc = 0x1C1B88u;
            goto label_1c1b88;
        }
    }
    ctx->pc = 0x1C1B7Cu;
    // 0x1c1b7c: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1C1B7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B84u);
    ctx->pc = 0x1C1B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B7Cu;
    // 0x1c1b80: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1C1B7Cu, 0x1C1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B84u;
label_1c1b84:
    // 0x1c1b84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c1b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b88:
    // 0x1c1b88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c1b8c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1c1b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1c1b90: 0x1053fff7  beq         $v0, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C1B90u;
    {
        const bool branch_taken_0x1c1b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1C1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B90u;
        // 0x1c1b94: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b90) {
            ctx->pc = 0x1C1B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1b70;
        }
    }
    ctx->pc = 0x1C1B98u;
    // 0x1c1b98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c1b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c1b9c:
    // 0x1c1b9c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c1b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1ba0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c1ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1ba4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c1ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1bac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BACu;
        // 0x1c1bb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1BB4u;
}
