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

// Function: ApCameraSearchCameraClass__FP8WcEntity
// Address: 0x141a00 - 0x141a60
void ApCameraSearchCameraClass__FP8WcEntity_0x141a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraSearchCameraClass__FP8WcEntity_0x141a00");
#endif

    switch (ctx->pc) {
        case 0x141a30u: goto label_141a30;
        case 0x141a3cu: goto label_141a3c;
        default: break;
    }

    ctx->pc = 0x141a00u;

label_141a00:
    // 0x141a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141a04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x141a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141a0c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x141a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x141a10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141a14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x141a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x141a18: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x141a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x141a1c: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x141A1Cu;
    {
        const bool branch_taken_0x141a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x141A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A1Cu;
        // 0x141a20: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a1c) {
            ctx->pc = 0x141A50u;
            goto label_141a50;
        }
    }
    ctx->pc = 0x141A24u;
    // 0x141a24: 0x8cb00018  lw          $s0, 0x18($a1)
    ctx->pc = 0x141a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x141a28: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x141A28u;
    {
        const bool branch_taken_0x141a28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x141A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A28u;
        // 0x141a2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a28) {
            ctx->pc = 0x141A4Cu;
            goto label_141a4c;
        }
    }
    ctx->pc = 0x141A30u;
label_141a30:
    // 0x141a30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x141a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a34: 0xc050680  jal         func_141A00
    ctx->pc = 0x141A34u;
    SET_GPR_U32(ctx, 31, 0x141A3Cu);
    ctx->pc = 0x141A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A34u;
    // 0x141a38: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A00u;
    goto label_141a00;
    ctx->pc = 0x141A3Cu;
label_141a3c:
    // 0x141a3c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x141A3Cu;
    {
        const bool branch_taken_0x141a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141a3c) {
            ctx->pc = 0x141A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141A3Cu;
            // 0x141a40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141A54u;
            goto label_141a54;
        }
    }
    ctx->pc = 0x141A44u;
    // 0x141a44: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141A44u;
    {
        const bool branch_taken_0x141a44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x141A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A44u;
        // 0x141a48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a44) {
            ctx->pc = 0x141A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141a30;
        }
    }
    ctx->pc = 0x141A4Cu;
label_141a4c:
    // 0x141a4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x141a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141a50:
    // 0x141a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141a54:
    // 0x141a54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141a58: 0x3e00008  jr          $ra
    ctx->pc = 0x141A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A58u;
        // 0x141a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141A60u;
}
