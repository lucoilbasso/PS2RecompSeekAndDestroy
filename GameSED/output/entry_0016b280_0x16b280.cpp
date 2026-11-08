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

// Function: entry_0016b280
// Address: 0x16b280 - 0x16b2f0
void entry_0016b280_0x16b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b280_0x16b280");
#endif

    switch (ctx->pc) {
        case 0x16b290u: goto label_16b290;
        case 0x16b2a0u: goto label_16b2a0;
        case 0x16b2b8u: goto label_16b2b8;
        case 0x16b2d4u: goto label_16b2d4;
        default: break;
    }

    ctx->pc = 0x16b280u;

label_16b280:
    // 0x16b280: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x16b280u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x16b284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b288: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B288u;
    SET_GPR_U32(ctx, 31, 0x16B290u);
    ctx->pc = 0x16B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B288u;
    // 0x16b28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B288u, 0x16B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B290u;
label_16b290:
    // 0x16b290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b294: 0x27868b50  addiu       $a2, $gp, -0x74B0
    ctx->pc = 0x16b294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
    // 0x16b298: 0xc0640d6  jal         func_190358
    ctx->pc = 0x16B298u;
    SET_GPR_U32(ctx, 31, 0x16B2A0u);
    ctx->pc = 0x16B29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B298u;
    // 0x16b29c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x16B298u, 0x16B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2A0u;
label_16b2a0:
    // 0x16b2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16b2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16b2ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16b2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2b0: 0xc064104  jal         func_190410
    ctx->pc = 0x16B2B0u;
    SET_GPR_U32(ctx, 31, 0x16B2B8u);
    ctx->pc = 0x16B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2B0u;
    // 0x16b2b4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190410u, 0x16B2B0u, 0x16B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2B8u;
label_16b2b8:
    // 0x16b2b8: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x16b2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x16b2bc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x16B2BCu;
    {
        const bool branch_taken_0x16b2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2BCu;
        // 0x16b2c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2bc) {
            ctx->pc = 0x16B280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b280;
        }
    }
    ctx->pc = 0x16B2C4u;
    // 0x16b2c4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16b2c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16b2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2cc: 0xc068584  jal         func_1A1610
    ctx->pc = 0x16B2CCu;
    SET_GPR_U32(ctx, 31, 0x16B2D4u);
    ctx->pc = 0x16B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2CCu;
    // 0x16b2d0: 0x24841220  addiu       $a0, $a0, 0x1220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x16B2CCu, 0x16B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B2D4u;
label_16b2d4:
    // 0x16b2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b2d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16b2d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b2dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16b2dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b2e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16b2e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b2e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16b2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2E8u;
        // 0x16b2ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B2F0u;
}
