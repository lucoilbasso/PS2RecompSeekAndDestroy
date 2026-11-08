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

// Function: Cmd_SET_MINI_FLG_Entry__FP15BsSCDEntControl
// Address: 0x11a090 - 0x11a100
void Cmd_SET_MINI_FLG_Entry__FP15BsSCDEntControl_0x11a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SET_MINI_FLG_Entry__FP15BsSCDEntControl_0x11a090");
#endif

    switch (ctx->pc) {
        case 0x11a0a4u: goto label_11a0a4;
        case 0x11a0c4u: goto label_11a0c4;
        case 0x11a0dcu: goto label_11a0dc;
        default: break;
    }

    ctx->pc = 0x11a090u;

    // 0x11a090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a098: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11a098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11a09c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11A09Cu;
    SET_GPR_U32(ctx, 31, 0x11A0A4u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11A09Cu, 0x11A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0A4u;
label_11a0a4:
    // 0x11a0a4: 0x2c430011  sltiu       $v1, $v0, 0x11
    ctx->pc = 0x11a0a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x11a0a8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x11a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x11a0ac: 0x248442d8  addiu       $a0, $a0, 0x42D8
    ctx->pc = 0x11a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17112));
    // 0x11a0b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0b4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A0B4u;
    {
        const bool branch_taken_0x11a0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0B4u;
        // 0x11a0b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0b4) {
            ctx->pc = 0x11A0DCu;
            goto label_11a0dc;
        }
    }
    ctx->pc = 0x11A0BCu;
    // 0x11a0bc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11A0BCu;
    SET_GPR_U32(ctx, 31, 0x11A0C4u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11A0BCu, 0x11A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0C4u;
label_11a0c4:
    // 0x11a0c4: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11a0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x11a0c8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11a0cc: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x11a0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x11a0d0: 0x24a542e8  addiu       $a1, $a1, 0x42E8
    ctx->pc = 0x11a0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17128));
    // 0x11a0d4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11A0D4u;
    SET_GPR_U32(ctx, 31, 0x11A0DCu);
    ctx->pc = 0x11A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0D4u;
    // 0x11a0d8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11A0D4u, 0x11A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0DCu;
label_11a0dc:
    // 0x11a0dc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x11a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11a0e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a0e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11a0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a0ec: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11a0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x11a0f0: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x11a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x11a0f4: 0xac22e1b0  sw          $v0, -0x1E50($at)
    ctx->pc = 0x11a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959536), GPR_U32(ctx, 2));
    // 0x11a0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11A0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0F8u;
        // 0x11a0fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A100u;
}
