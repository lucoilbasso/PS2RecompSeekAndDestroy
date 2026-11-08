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

// Function: __builtin_new
// Address: 0x1a0ad8 - 0x1a0b24
void ps2___builtin_new_0x1a0ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___builtin_new_0x1a0ad8");
#endif

    switch (ctx->pc) {
        case 0x1a0af8u: goto label_1a0af8;
        case 0x1a0b10u: goto label_1a0b10;
        default: break;
    }

    ctx->pc = 0x1a0ad8u;

    // 0x1a0ad8: 0x8f829174  lw          $v0, -0x6E8C($gp)
    ctx->pc = 0x1a0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938996)));
    // 0x1a0adc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a0adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ae0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a0ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a0ae4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0ae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0aec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a0aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a0af0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1A0AF0u;
    SET_GPR_U32(ctx, 31, 0x1A0AF8u);
    ctx->pc = 0x1A0AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0AF0u;
    // 0x1a0af4: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1A0AF0u, 0x1A0AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AF8u;
label_1a0af8:
    // 0x1a0af8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0B00u;
    {
        const bool branch_taken_0x1a0b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B00u;
        // 0x1a0b04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b00) {
            ctx->pc = 0x1A0B10u;
            goto label_1a0b10;
        }
    }
    ctx->pc = 0x1A0B08u;
    // 0x1a0b08: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A0B08u;
    SET_GPR_U32(ctx, 31, 0x1A0B10u);
    ctx->pc = 0x1A0B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B08u;
    // 0x1a0b0c: 0x8f849174  lw          $a0, -0x6E8C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938996)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A0B08u, 0x1A0B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B10u;
label_1a0b10:
    // 0x1a0b10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a0b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0b18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a0b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B1Cu;
        // 0x1a0b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0B24u;
}
