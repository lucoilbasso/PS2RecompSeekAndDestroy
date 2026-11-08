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

// Function: ApCameraChangeAngleLRLock__FP7WcActori
// Address: 0x141f40 - 0x141fac
void ApCameraChangeAngleLRLock__FP7WcActori_0x141f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraChangeAngleLRLock__FP7WcActori_0x141f40");
#endif

    switch (ctx->pc) {
        case 0x141f64u: goto label_141f64;
        default: break;
    }

    ctx->pc = 0x141f40u;

    // 0x141f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141f48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x141f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141f50: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x141f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x141f54: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x141f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x141f58: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x141f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x141f5c: 0xc061a46  jal         func_186918
    ctx->pc = 0x141F5Cu;
    SET_GPR_U32(ctx, 31, 0x141F64u);
    ctx->pc = 0x141F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141F5Cu;
    // 0x141f60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x141F5Cu, 0x141F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F64u;
label_141f64:
    // 0x141f64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x141f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f68: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x141F68u;
    {
        const bool branch_taken_0x141f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F68u;
        // 0x141f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f68) {
            ctx->pc = 0x141F84u;
            goto label_141f84;
        }
    }
    ctx->pc = 0x141F70u;
    // 0x141f70: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x141f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x141f74: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x141f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x141f78: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x141f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x141f7c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x141F7Cu;
    {
        const bool branch_taken_0x141f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141f7c) {
            ctx->pc = 0x141F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141F7Cu;
            // 0x141f80: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141F84u;
            goto label_141f84;
        }
    }
    ctx->pc = 0x141F84u;
label_141f84:
    // 0x141f84: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x141F84u;
    {
        const bool branch_taken_0x141f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f84) {
            ctx->pc = 0x141F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141F84u;
            // 0x141f88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141FA0u;
            goto label_141fa0;
        }
    }
    ctx->pc = 0x141F8Cu;
    // 0x141f8c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x141f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x141f90: 0xacb00134  sw          $s0, 0x134($a1)
    ctx->pc = 0x141f90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 16));
    // 0x141f94: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x141f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x141f98: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x141f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x141f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141fa0:
    // 0x141fa0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x141FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FA4u;
        // 0x141fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141FACu;
}
