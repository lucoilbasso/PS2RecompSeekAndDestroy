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

// Function: MotionJobRegist__8WcEntity
// Address: 0x1dd468 - 0x1dd4b8
void MotionJobRegist__8WcEntity_0x1dd468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionJobRegist__8WcEntity_0x1dd468");
#endif

    switch (ctx->pc) {
        case 0x1dd498u: goto label_1dd498;
        default: break;
    }

    ctx->pc = 0x1dd468u;

    // 0x1dd468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd46c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd474: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd478: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dd47c: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x1dd47cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x1dd480: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd484: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD484u;
    {
        const bool branch_taken_0x1dd484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD484u;
        // 0x1dd488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd484) {
            ctx->pc = 0x1DD4A8u;
            goto label_1dd4a8;
        }
    }
    ctx->pc = 0x1DD48Cu;
    // 0x1dd48c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1dd48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1dd490: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1DD490u;
    SET_GPR_U32(ctx, 31, 0x1DD498u);
    ctx->pc = 0x1DD494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD490u;
    // 0x1dd494: 0x24841590  addiu       $a0, $a0, 0x1590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1DD490u, 0x1DD498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD498u;
label_1dd498:
    // 0x1dd498: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dd49c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1dd49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1dd4a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dd4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dd4a4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1dd4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1dd4a8:
    // 0x1dd4a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd4ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4B0u;
        // 0x1dd4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD4B8u;
}
