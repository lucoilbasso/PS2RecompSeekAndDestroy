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

// Function: sceDevVif0PutFifo
// Address: 0x1acfd8 - 0x1ad034
void sceDevVif0PutFifo_0x1acfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVif0PutFifo_0x1acfd8");
#endif

    switch (ctx->pc) {
        case 0x1ad000u: goto label_1ad000;
        default: break;
    }

    ctx->pc = 0x1acfd8u;

    // 0x1acfd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1acfd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acfdc: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1ACFDCu;
    {
        const bool branch_taken_0x1acfdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFDCu;
        // 0x1acfe0: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfdc) {
            ctx->pc = 0x1AD02Cu;
            goto label_1ad02c;
        }
    }
    ctx->pc = 0x1ACFE4u;
    // 0x1acfe4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1acfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1acfe8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1acfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1acfec: 0x34c63800  ori         $a2, $a2, 0x3800
    ctx->pc = 0x1acfecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14336);
    // 0x1acff0: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x1acff0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x1acff4: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1acff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1acff8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1acff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1acffc: 0x0  nop
    ctx->pc = 0x1acffcu;
    // NOP
label_1ad000:
    // 0x1ad000: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ad000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ad004: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1ad004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1ad008: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD008u;
    {
        const bool branch_taken_0x1ad008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad008) {
            ctx->pc = 0x1AD00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD008u;
            // 0x1ad00c: 0x78820000  lq          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD018u;
            goto label_1ad018;
        }
    }
    ctx->pc = 0x1AD010u;
    // 0x1ad010: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD010u;
        // 0x1ad014: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD018u;
label_1ad018:
    // 0x1ad018: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ad018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ad01c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ad01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ad020: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ad020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ad024: 0x1468fff6  bne         $v1, $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AD024u;
    {
        const bool branch_taken_0x1ad024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x1AD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD024u;
        // 0x1ad028: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad024) {
            ctx->pc = 0x1AD000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad000;
        }
    }
    ctx->pc = 0x1AD02Cu;
label_1ad02c:
    // 0x1ad02c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD02Cu;
        // 0x1ad030: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD034u;
}
