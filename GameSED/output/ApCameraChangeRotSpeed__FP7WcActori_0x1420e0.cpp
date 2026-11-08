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

// Function: ApCameraChangeRotSpeed__FP7WcActori
// Address: 0x1420e0 - 0x14213c
void ApCameraChangeRotSpeed__FP7WcActori_0x1420e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraChangeRotSpeed__FP7WcActori_0x1420e0");
#endif

    switch (ctx->pc) {
        case 0x142104u: goto label_142104;
        default: break;
    }

    ctx->pc = 0x1420e0u;

    // 0x1420e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1420e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1420e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1420e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1420e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1420e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1420ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1420ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1420f0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1420f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1420f4: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x1420f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x1420f8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1420f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1420fc: 0xc061a46  jal         func_186918
    ctx->pc = 0x1420FCu;
    SET_GPR_U32(ctx, 31, 0x142104u);
    ctx->pc = 0x142100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1420FCu;
    // 0x142100: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x1420FCu, 0x142104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142104u;
label_142104:
    // 0x142104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x142104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142108: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142108u;
    {
        const bool branch_taken_0x142108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142108u;
        // 0x14210c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142108) {
            ctx->pc = 0x142124u;
            goto label_142124;
        }
    }
    ctx->pc = 0x142110u;
    // 0x142110: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x142110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x142114: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x142114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x142118: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x142118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x14211c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x14211Cu;
    {
        const bool branch_taken_0x14211c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14211c) {
            ctx->pc = 0x142120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14211Cu;
            // 0x142120: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142124u;
            goto label_142124;
        }
    }
    ctx->pc = 0x142124u;
label_142124:
    // 0x142124: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x142124u;
    {
        const bool branch_taken_0x142124 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x142124) {
            ctx->pc = 0x142128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142124u;
            // 0x142128: 0xacb0014c  sw          $s0, 0x14C($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 332), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14212Cu;
            goto label_14212c;
        }
    }
    ctx->pc = 0x14212Cu;
label_14212c:
    // 0x14212c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14212cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142130: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x142130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142134: 0x3e00008  jr          $ra
    ctx->pc = 0x142134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142134u;
        // 0x142138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14213Cu;
}
