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

// Function: WEntityRefreshedLocalMatrix__FP8WcEntity
// Address: 0x1864d0 - 0x186510
void WEntityRefreshedLocalMatrix__FP8WcEntity_0x1864d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WEntityRefreshedLocalMatrix__FP8WcEntity_0x1864d0");
#endif

    switch (ctx->pc) {
        case 0x1864f0u: goto label_1864f0;
        case 0x1864f8u: goto label_1864f8;
        default: break;
    }

    ctx->pc = 0x1864d0u;

label_1864d0:
    // 0x1864d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1864d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1864d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1864d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1864d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1864d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1864dc: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x1864dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1864e0: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x1864e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1864e4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1864E4u;
    {
        const bool branch_taken_0x1864e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1864E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864E4u;
        // 0x1864e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864e4) {
            ctx->pc = 0x186500u;
            goto label_186500;
        }
    }
    ctx->pc = 0x1864ECu;
    // 0x1864ec: 0x0  nop
    ctx->pc = 0x1864ecu;
    // NOP
label_1864f0:
    // 0x1864f0: 0xc061934  jal         func_1864D0
    ctx->pc = 0x1864F0u;
    SET_GPR_U32(ctx, 31, 0x1864F8u);
    ctx->pc = 0x1864F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1864F0u;
    // 0x1864f4: 0x8c90001c  lw          $s0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1864D0u;
    goto label_1864d0;
    ctx->pc = 0x1864F8u;
label_1864f8:
    // 0x1864f8: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1864F8u;
    {
        const bool branch_taken_0x1864f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1864FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864F8u;
        // 0x1864fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864f8) {
            ctx->pc = 0x1864F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1864f0;
        }
    }
    ctx->pc = 0x186500u;
label_186500:
    // 0x186500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186504: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186508: 0x3e00008  jr          $ra
    ctx->pc = 0x186508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186508u;
        // 0x18650c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186510u;
}
