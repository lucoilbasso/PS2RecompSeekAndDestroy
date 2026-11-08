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

// Function: sMapReset__FP13ApRscMapBlock
// Address: 0x106d38 - 0x106da4
void sMapReset__FP13ApRscMapBlock_0x106d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sMapReset__FP13ApRscMapBlock_0x106d38");
#endif

    switch (ctx->pc) {
        case 0x106d60u: goto label_106d60;
        case 0x106d80u: goto label_106d80;
        default: break;
    }

    ctx->pc = 0x106d38u;

    // 0x106d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106d40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x106d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106d44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106d4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x106d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x106d50: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x106D50u;
    {
        const bool branch_taken_0x106d50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x106D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D50u;
        // 0x106d54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d50) {
            ctx->pc = 0x106D90u;
            goto label_106d90;
        }
    }
    ctx->pc = 0x106D58u;
    // 0x106d58: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x106d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x106d5c: 0x0  nop
    ctx->pc = 0x106d5cu;
    // NOP
label_106d60:
    // 0x106d60: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x106d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x106d64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x106d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x106d68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106d6c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x106d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106d70: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x106D70u;
    {
        const bool branch_taken_0x106d70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D70u;
        // 0x106d74: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d70) {
            ctx->pc = 0x106D80u;
            goto label_106d80;
        }
    }
    ctx->pc = 0x106D78u;
    // 0x106d78: 0xc065764  jal         func_195D90
    ctx->pc = 0x106D78u;
    SET_GPR_U32(ctx, 31, 0x106D80u);
    ctx->pc = 0x106D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D78u;
    // 0x106d7c: 0x8c850244  lw          $a1, 0x244($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195D90u, 0x106D78u, 0x106D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D80u;
label_106d80:
    // 0x106d80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x106d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x106d84: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x106d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x106d88: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x106D88u;
    {
        const bool branch_taken_0x106d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106d88) {
            ctx->pc = 0x106D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106D88u;
            // 0x106d8c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106d60;
        }
    }
    ctx->pc = 0x106D90u;
label_106d90:
    // 0x106d90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106d94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106d98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x106D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D9Cu;
        // 0x106da0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106DA4u;
}
