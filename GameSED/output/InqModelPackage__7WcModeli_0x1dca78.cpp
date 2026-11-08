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

// Function: InqModelPackage__7WcModeli
// Address: 0x1dca78 - 0x1dcac0
void InqModelPackage__7WcModeli_0x1dca78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqModelPackage__7WcModeli_0x1dca78");
#endif

    switch (ctx->pc) {
        case 0x1dca9cu: goto label_1dca9c;
        case 0x1dcaa4u: goto label_1dcaa4;
        default: break;
    }

    ctx->pc = 0x1dca78u;

    // 0x1dca78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dca78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dca7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dca7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dca80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dca80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dca88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dca88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dca90: 0x118980  sll         $s1, $s1, 6
    ctx->pc = 0x1dca90u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1dca94: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1DCA94u;
    SET_GPR_U32(ctx, 31, 0x1DCA9Cu);
    ctx->pc = 0x1DCA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA94u;
    // 0x1dca98: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1DCA94u, 0x1DCA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA9Cu;
label_1dca9c:
    // 0x1dca9c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1DCA9Cu;
    SET_GPR_U32(ctx, 31, 0x1DCAA4u);
    ctx->pc = 0x1DCAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA9Cu;
    // 0x1dcaa0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1DCA9Cu, 0x1DCAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCAA4u;
label_1dcaa4:
    // 0x1dcaa4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1dcaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1dcaa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dcaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcaac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dcaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dcab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcab4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcab8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAB8u;
        // 0x1dcabc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCAC0u;
}
