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

// Function: sceMcUdCheckNewCard
// Address: 0x1c5ad0 - 0x1c5b3c
void sceMcUdCheckNewCard_0x1c5ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcUdCheckNewCard_0x1c5ad0");
#endif

    switch (ctx->pc) {
        case 0x1c5b10u: goto label_1c5b10;
        case 0x1c5b20u: goto label_1c5b20;
        default: break;
    }

    ctx->pc = 0x1c5ad0u;

    // 0x1c5ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c5ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c5ad4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1c5ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1c5ad8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c5ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c5adc: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x1c5adcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x1c5ae0: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1c5ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1c5ae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c5ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c5ae8: 0x2484ee40  addiu       $a0, $a0, -0x11C0
    ctx->pc = 0x1c5ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962752));
    // 0x1c5aec: 0x24e7eec0  addiu       $a3, $a3, -0x1140
    ctx->pc = 0x1c5aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962880));
    // 0x1c5af0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c5af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c5af4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x1c5af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1c5af8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c5af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5afc: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1c5afcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c5b00: 0x26090400  addiu       $t1, $s0, 0x400
    ctx->pc = 0x1c5b00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x1c5b04: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c5b04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c5b08: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C5B08u;
    SET_GPR_U32(ctx, 31, 0x1C5B10u);
    ctx->pc = 0x1C5B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B08u;
    // 0x1c5b0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C5B08u, 0x1C5B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B10u;
label_1c5b10:
    // 0x1c5b10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5B10u;
    {
        const bool branch_taken_0x1c5b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B10u;
        // 0x1c5b14: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b10) {
            ctx->pc = 0x1C5B28u;
            goto label_1c5b28;
        }
    }
    ctx->pc = 0x1C5B18u;
    // 0x1c5b18: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1C5B18u;
    SET_GPR_U32(ctx, 31, 0x1C5B20u);
    ctx->pc = 0x1C5B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B18u;
    // 0x1c5b1c: 0x2484b7e8  addiu       $a0, $a0, -0x4818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1C5B18u, 0x1C5B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B20u;
label_1c5b20:
    // 0x1c5b20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5B20u;
    {
        const bool branch_taken_0x1c5b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B20u;
        // 0x1c5b24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b20) {
            ctx->pc = 0x1C5B2Cu;
            goto label_1c5b2c;
        }
    }
    ctx->pc = 0x1C5B28u;
label_1c5b28:
    // 0x1c5b28: 0x8e020400  lw          $v0, 0x400($s0)
    ctx->pc = 0x1c5b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
label_1c5b2c:
    // 0x1c5b2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c5b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5b30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c5b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5b34: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B34u;
        // 0x1c5b38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5B3Cu;
}
