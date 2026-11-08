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

// Function: sceDevVif0Pause
// Address: 0x1acd30 - 0x1acd98
void sceDevVif0Pause_0x1acd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVif0Pause_0x1acd30");
#endif

    switch (ctx->pc) {
        case 0x1acd44u: goto label_1acd44;
        default: break;
    }

    ctx->pc = 0x1acd30u;

    // 0x1acd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1acd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1acd34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1acd38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1acd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1acd3c: 0xc06b382  jal         func_1ACE08
    ctx->pc = 0x1ACD3Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD44u);
    ctx->pc = 0x1ACD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD3Cu;
    // 0x1acd40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACE08u, 0x1ACD3Cu, 0x1ACD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD44u;
label_1acd44:
    // 0x1acd44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACD44u;
    {
        const bool branch_taken_0x1acd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD44u;
        // 0x1acd48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd44) {
            ctx->pc = 0x1ACD54u;
            goto label_1acd54;
        }
    }
    ctx->pc = 0x1ACD4Cu;
    // 0x1acd4c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACD4Cu;
    {
        const bool branch_taken_0x1acd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1acd4c) {
            ctx->pc = 0x1ACD5Cu;
            goto label_1acd5c;
        }
    }
    ctx->pc = 0x1ACD54u;
label_1acd54:
    // 0x1acd54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1ACD54u;
    {
        const bool branch_taken_0x1acd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD54u;
        // 0x1acd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd54) {
            ctx->pc = 0x1ACD88u;
            goto label_1acd88;
        }
    }
    ctx->pc = 0x1ACD5Cu;
label_1acd5c:
    // 0x1acd5c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACD5Cu;
    {
        const bool branch_taken_0x1acd5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD5Cu;
        // 0x1acd60: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd5c) {
            ctx->pc = 0x1ACD6Cu;
            goto label_1acd6c;
        }
    }
    ctx->pc = 0x1ACD64u;
    // 0x1acd64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ACD64u;
    {
        const bool branch_taken_0x1acd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD64u;
        // 0x1acd68: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd64) {
            ctx->pc = 0x1ACD7Cu;
            goto label_1acd7c;
        }
    }
    ctx->pc = 0x1ACD6Cu;
label_1acd6c:
    // 0x1acd6c: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACD6Cu;
    {
        const bool branch_taken_0x1acd6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ACD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD6Cu;
        // 0x1acd70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd6c) {
            ctx->pc = 0x1ACD88u;
            goto label_1acd88;
        }
    }
    ctx->pc = 0x1ACD74u;
    // 0x1acd74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1acd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1acd78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1acd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1acd7c:
    // 0x1acd7c: 0x34423810  ori         $v0, $v0, 0x3810
    ctx->pc = 0x1acd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14352);
    // 0x1acd80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1acd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1acd84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acd88:
    // 0x1acd88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1acd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acd8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1acd8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acd90: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD90u;
        // 0x1acd94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD98u;
}
