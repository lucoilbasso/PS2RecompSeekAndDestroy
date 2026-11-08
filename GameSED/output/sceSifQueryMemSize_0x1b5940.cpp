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

// Function: sceSifQueryMemSize
// Address: 0x1b5940 - 0x1b59b0
void sceSifQueryMemSize_0x1b5940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifQueryMemSize_0x1b5940");
#endif

    switch (ctx->pc) {
        case 0x1b5990u: goto label_1b5990;
        default: break;
    }

    ctx->pc = 0x1b5940u;

    // 0x1b5940: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b5940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b5944: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5948: 0x8c43aa1c  lw          $v1, -0x55E4($v0)
    ctx->pc = 0x1b5948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA1Cu));
    // 0x1b594c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b594cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b5950: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5950u;
    {
        const bool branch_taken_0x1b5950 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5950u;
        // 0x1b5954: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5950) {
            ctx->pc = 0x1B5960u;
            goto label_1b5960;
        }
    }
    ctx->pc = 0x1B5958u;
    // 0x1b5958: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B5958u;
    {
        const bool branch_taken_0x1b5958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5958u;
        // 0x1b595c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5958) {
            ctx->pc = 0x1B59A0u;
            goto label_1b59a0;
        }
    }
    ctx->pc = 0x1B5960u;
label_1b5960:
    // 0x1b5960: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b5960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b5964: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b5964u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b5968: 0x2484b240  addiu       $a0, $a0, -0x4DC0
    ctx->pc = 0x1b5968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947392));
    // 0x1b596c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b596cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b5970: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b5970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b5974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b5978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b597c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b597cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5980: 0x2609b280  addiu       $t1, $s0, -0x4D80
    ctx->pc = 0x1b5980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947456));
    // 0x1b5984: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b5984u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5988: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B5988u;
    SET_GPR_U32(ctx, 31, 0x1B5990u);
    ctx->pc = 0x1B598Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5988u;
    // 0x1b598c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B5988u, 0x1B5990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5990u;
label_1b5990:
    // 0x1b5990: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5990u;
    {
        const bool branch_taken_0x1b5990 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b5990) {
            ctx->pc = 0x1B5994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5990u;
            // 0x1b5994: 0x8e02b280  lw          $v0, -0x4D80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B59A0u;
            goto label_1b59a0;
        }
    }
    ctx->pc = 0x1B5998u;
    // 0x1b5998: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b5998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b599c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b59a0:
    // 0x1b59a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b59a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b59a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b59a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b59a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B59A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B59ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59A8u;
        // 0x1b59ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B59A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B59B0u;
}
