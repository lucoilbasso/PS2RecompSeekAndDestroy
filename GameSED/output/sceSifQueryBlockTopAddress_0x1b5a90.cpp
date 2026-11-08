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

// Function: sceSifQueryBlockTopAddress
// Address: 0x1b5a90 - 0x1b5b0c
void sceSifQueryBlockTopAddress_0x1b5a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifQueryBlockTopAddress_0x1b5a90");
#endif

    switch (ctx->pc) {
        case 0x1b5aecu: goto label_1b5aec;
        default: break;
    }

    ctx->pc = 0x1b5a90u;

    // 0x1b5a90: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b5a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b5a94: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5a98: 0x8c62aa1c  lw          $v0, -0x55E4($v1)
    ctx->pc = 0x1b5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24AA1Cu));
    // 0x1b5a9c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b5a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5aa0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b5aa4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5AA4u;
    {
        const bool branch_taken_0x1b5aa4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B5AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AA4u;
        // 0x1b5aa8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5aa4) {
            ctx->pc = 0x1B5AB4u;
            goto label_1b5ab4;
        }
    }
    ctx->pc = 0x1B5AACu;
    // 0x1b5aac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B5AACu;
    {
        const bool branch_taken_0x1b5aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AACu;
        // 0x1b5ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5aac) {
            ctx->pc = 0x1B5AFCu;
            goto label_1b5afc;
        }
    }
    ctx->pc = 0x1B5AB4u;
label_1b5ab4:
    // 0x1b5ab4: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x1b5ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x1b5ab8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b5ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b5abc: 0xace5b2c0  sw          $a1, -0x4D40($a3)
    ctx->pc = 0x1b5abcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x40B2C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40B2C0u, _value); } while (0);
    // 0x1b5ac0: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b5ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b5ac4: 0x2484b240  addiu       $a0, $a0, -0x4DC0
    ctx->pc = 0x1b5ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947392));
    // 0x1b5ac8: 0x24e7b2c0  addiu       $a3, $a3, -0x4D40
    ctx->pc = 0x1b5ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947520));
    // 0x1b5acc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b5accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b5ad0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b5ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b5ad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5ad8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1b5ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5adc: 0x2609b280  addiu       $t1, $s0, -0x4D80
    ctx->pc = 0x1b5adcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947456));
    // 0x1b5ae0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b5ae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5ae4: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B5AE4u;
    SET_GPR_U32(ctx, 31, 0x1B5AECu);
    ctx->pc = 0x1B5AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5AE4u;
    // 0x1b5ae8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B5AE4u, 0x1B5AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5AECu;
label_1b5aec:
    // 0x1b5aec: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5AECu;
    {
        const bool branch_taken_0x1b5aec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b5aec) {
            ctx->pc = 0x1B5AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5AECu;
            // 0x1b5af0: 0x8e02b280  lw          $v0, -0x4D80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5AFCu;
            goto label_1b5afc;
        }
    }
    ctx->pc = 0x1B5AF4u;
    // 0x1b5af4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b5af8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5afc:
    // 0x1b5afc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b5afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5b00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b5b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5b04: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B04u;
        // 0x1b5b08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5B0Cu;
}
