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

// Function: MotionJobRelease__8WcEntity
// Address: 0x1dd4b8 - 0x1dd50c
void MotionJobRelease__8WcEntity_0x1dd4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionJobRelease__8WcEntity_0x1dd4b8");
#endif

    switch (ctx->pc) {
        case 0x1dd4e8u: goto label_1dd4e8;
        default: break;
    }

    ctx->pc = 0x1dd4b8u;

    // 0x1dd4b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd4bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd4c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd4c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dd4cc: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x1dd4ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x1dd4d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd4d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD4D4u;
    {
        const bool branch_taken_0x1dd4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4D4u;
        // 0x1dd4d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4d4) {
            ctx->pc = 0x1DD4FCu;
            goto label_1dd4fc;
        }
    }
    ctx->pc = 0x1DD4DCu;
    // 0x1dd4dc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1dd4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1dd4e0: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x1DD4E0u;
    SET_GPR_U32(ctx, 31, 0x1DD4E8u);
    ctx->pc = 0x1DD4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4E0u;
    // 0x1dd4e4: 0x24841590  addiu       $a0, $a0, 0x1590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1DD4E0u, 0x1DD4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4E8u;
label_1dd4e8:
    // 0x1dd4e8: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x1dd4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x1dd4ec: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1dd4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dd4f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1dd4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1dd4f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1dd4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dd4f8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1dd4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1dd4fc:
    // 0x1dd4fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd500: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd504: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD504u;
        // 0x1dd508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD50Cu;
}
