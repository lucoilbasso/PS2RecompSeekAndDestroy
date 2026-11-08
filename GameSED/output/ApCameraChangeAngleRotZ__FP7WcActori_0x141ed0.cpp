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

// Function: ApCameraChangeAngleRotZ__FP7WcActori
// Address: 0x141ed0 - 0x141f3c
void ApCameraChangeAngleRotZ__FP7WcActori_0x141ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraChangeAngleRotZ__FP7WcActori_0x141ed0");
#endif

    switch (ctx->pc) {
        case 0x141ef4u: goto label_141ef4;
        default: break;
    }

    ctx->pc = 0x141ed0u;

    // 0x141ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141ed8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x141ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141edc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141ee0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x141ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x141ee4: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x141ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x141ee8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x141ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x141eec: 0xc061a46  jal         func_186918
    ctx->pc = 0x141EECu;
    SET_GPR_U32(ctx, 31, 0x141EF4u);
    ctx->pc = 0x141EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141EECu;
    // 0x141ef0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x141EECu, 0x141EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141EF4u;
label_141ef4:
    // 0x141ef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x141ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141ef8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x141EF8u;
    {
        const bool branch_taken_0x141ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EF8u;
        // 0x141efc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ef8) {
            ctx->pc = 0x141F14u;
            goto label_141f14;
        }
    }
    ctx->pc = 0x141F00u;
    // 0x141f00: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x141f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x141f04: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x141f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x141f08: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x141f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x141f0c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x141F0Cu;
    {
        const bool branch_taken_0x141f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141f0c) {
            ctx->pc = 0x141F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141F0Cu;
            // 0x141f10: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141F14u;
            goto label_141f14;
        }
    }
    ctx->pc = 0x141F14u;
label_141f14:
    // 0x141f14: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x141F14u;
    {
        const bool branch_taken_0x141f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f14) {
            ctx->pc = 0x141F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141F14u;
            // 0x141f18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141F30u;
            goto label_141f30;
        }
    }
    ctx->pc = 0x141F1Cu;
    // 0x141f1c: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x141f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x141f20: 0xacb000f8  sw          $s0, 0xF8($a1)
    ctx->pc = 0x141f20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 16));
    // 0x141f24: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x141f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x141f28: 0xaca200c0  sw          $v0, 0xC0($a1)
    ctx->pc = 0x141f28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 2));
    // 0x141f2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141f30:
    // 0x141f30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141f34: 0x3e00008  jr          $ra
    ctx->pc = 0x141F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F34u;
        // 0x141f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141F3Cu;
}
