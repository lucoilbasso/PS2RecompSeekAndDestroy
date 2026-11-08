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

// Function: ApCameraSearchinActor__FP7WcActor
// Address: 0x141aa8 - 0x141b1c
void ApCameraSearchinActor__FP7WcActor_0x141aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraSearchinActor__FP7WcActor_0x141aa8");
#endif

    switch (ctx->pc) {
        case 0x141ae8u: goto label_141ae8;
        case 0x141af4u: goto label_141af4;
        default: break;
    }

    ctx->pc = 0x141aa8u;

    // 0x141aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141ab0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141ab4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x141ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x141ab8: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x141ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x141abc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141ac0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x141ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141ac4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x141ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x141ac8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141AC8u;
    {
        const bool branch_taken_0x141ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x141ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AC8u;
        // 0x141acc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ac8) {
            ctx->pc = 0x141AD8u;
            goto label_141ad8;
        }
    }
    ctx->pc = 0x141AD0u;
    // 0x141ad0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x141AD0u;
    {
        const bool branch_taken_0x141ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AD0u;
        // 0x141ad4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ad0) {
            ctx->pc = 0x141B08u;
            goto label_141b08;
        }
    }
    ctx->pc = 0x141AD8u;
label_141ad8:
    // 0x141ad8: 0x8cb00018  lw          $s0, 0x18($a1)
    ctx->pc = 0x141ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x141adc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x141ADCu;
    {
        const bool branch_taken_0x141adc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x141AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141ADCu;
        // 0x141ae0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141adc) {
            ctx->pc = 0x141B04u;
            goto label_141b04;
        }
    }
    ctx->pc = 0x141AE4u;
    // 0x141ae4: 0x0  nop
    ctx->pc = 0x141ae4u;
    // NOP
label_141ae8:
    // 0x141ae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x141ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141aec: 0xc050680  jal         func_141A00
    ctx->pc = 0x141AECu;
    SET_GPR_U32(ctx, 31, 0x141AF4u);
    ctx->pc = 0x141AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141AECu;
    // 0x141af0: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A00u, 0x141AECu, 0x141AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141AF4u;
label_141af4:
    // 0x141af4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141AF4u;
    {
        const bool branch_taken_0x141af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AF4u;
        // 0x141af8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141af4) {
            ctx->pc = 0x141B08u;
            goto label_141b08;
        }
    }
    ctx->pc = 0x141AFCu;
    // 0x141afc: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141AFCu;
    {
        const bool branch_taken_0x141afc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x141B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AFCu;
        // 0x141b00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141afc) {
            ctx->pc = 0x141AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141ae8;
        }
    }
    ctx->pc = 0x141B04u;
label_141b04:
    // 0x141b04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x141b04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141b08:
    // 0x141b08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141b0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x141b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141b14: 0x3e00008  jr          $ra
    ctx->pc = 0x141B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B14u;
        // 0x141b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141B1Cu;
}
