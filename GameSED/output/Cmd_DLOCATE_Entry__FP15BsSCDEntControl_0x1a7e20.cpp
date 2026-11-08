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

// Function: Cmd_DLOCATE_Entry__FP15BsSCDEntControl
// Address: 0x1a7e20 - 0x1a7ebc
void Cmd_DLOCATE_Entry__FP15BsSCDEntControl_0x1a7e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DLOCATE_Entry__FP15BsSCDEntControl_0x1a7e20");
#endif

    switch (ctx->pc) {
        case 0x1a7e64u: goto label_1a7e64;
        case 0x1a7e9cu: goto label_1a7e9c;
        case 0x1a7ea8u: goto label_1a7ea8;
        default: break;
    }

    ctx->pc = 0x1a7e20u;

    // 0x1a7e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7e24: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a7e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a7e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7e34: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x1a7e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a7e38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7e3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a7e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a7e40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7e44: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a7e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a7e48: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a7e4c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a7e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a7e50: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a7e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7e54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7E54u;
    {
        const bool branch_taken_0x1a7e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E54u;
        // 0x1a7e58: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e54) {
            ctx->pc = 0x1A7E68u;
            goto label_1a7e68;
        }
    }
    ctx->pc = 0x1A7E5Cu;
    // 0x1a7e5c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7E5Cu;
    SET_GPR_U32(ctx, 31, 0x1A7E64u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7E5Cu, 0x1A7E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E64u;
label_1a7e64:
    // 0x1a7e64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7e68:
    // 0x1a7e68: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x1a7e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a7e6c: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7e70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7e74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a7e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a7e78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a7e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e7c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a7e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7e80: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7e84: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a7e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a7e88: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a7e88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7e8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7E8Cu;
    {
        const bool branch_taken_0x1a7e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E8Cu;
        // 0x1a7e90: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e8c) {
            ctx->pc = 0x1A7EA0u;
            goto label_1a7ea0;
        }
    }
    ctx->pc = 0x1A7E94u;
    // 0x1a7e94: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7E94u;
    SET_GPR_U32(ctx, 31, 0x1A7E9Cu);
    ctx->pc = 0x1A7E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E94u;
    // 0x1a7e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7E94u, 0x1A7E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E9Cu;
label_1a7e9c:
    // 0x1a7e9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7ea0:
    // 0x1a7ea0: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x1A7EA0u;
    SET_GPR_U32(ctx, 31, 0x1A7EA8u);
    ctx->pc = 0x1A7EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7EA0u;
    // 0x1a7ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x1A7EA0u, 0x1A7EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7EA8u;
label_1a7ea8:
    // 0x1a7ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7eac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7eb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EB4u;
        // 0x1a7eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7EBCu;
}
