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

// Function: SeMasterVolume__7WcSeStdi
// Address: 0x17b448 - 0x17b504
void SeMasterVolume__7WcSeStdi_0x17b448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeMasterVolume__7WcSeStdi_0x17b448");
#endif

    switch (ctx->pc) {
        case 0x17b488u: goto label_17b488;
        case 0x17b4a0u: goto label_17b4a0;
        case 0x17b4b4u: goto label_17b4b4;
        default: break;
    }

    ctx->pc = 0x17b448u;

    // 0x17b448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b44c: 0x8f878d10  lw          $a3, -0x72F0($gp)
    ctx->pc = 0x17b44cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17b450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b454: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b458: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17b458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b45c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b460: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x17b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x17b464: 0x3401c034  ori         $at, $zero, 0xC034
    ctx->pc = 0x17b464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x17b468: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x17b468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x17b46c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x17b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x17b470: 0x1066001f  beq         $v1, $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x17B470u;
    {
        const bool branch_taken_0x17b470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x17B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B470u;
        // 0x17b474: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b470) {
            ctx->pc = 0x17B4F0u;
            goto label_17b4f0;
        }
    }
    ctx->pc = 0x17B478u;
    // 0x17b478: 0xac460030  sw          $a2, 0x30($v0)
    ctx->pc = 0x17b478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 6));
    // 0x17b47c: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x17b47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x17b480: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x17B480u;
    SET_GPR_U32(ctx, 31, 0x17B488u);
    ctx->pc = 0x17B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B480u;
    // 0x17b484: 0x8ce40030  lw          $a0, 0x30($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x17B480u, 0x17B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B488u;
label_17b488:
    // 0x17b488: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17b488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b48c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17b48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b494: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x17b494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17b498: 0x24440130  addiu       $a0, $v0, 0x130
    ctx->pc = 0x17b498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x17b49c: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x17b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_17b4a0:
    // 0x17b4a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b4a4: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B4A4u;
    {
        const bool branch_taken_0x17b4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4A4u;
        // 0x17b4a8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4a4) {
            ctx->pc = 0x17B4C0u;
            goto label_17b4c0;
        }
    }
    ctx->pc = 0x17B4ACu;
    // 0x17b4ac: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17B4ACu;
    SET_GPR_U32(ctx, 31, 0x17B4B4u);
    ctx->pc = 0x17B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B4ACu;
    // 0x17b4b0: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17B4ACu, 0x17B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4B4u;
label_17b4b4:
    // 0x17b4b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17B4B4u;
    {
        const bool branch_taken_0x17b4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4B4u;
        // 0x17b4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4b4) {
            ctx->pc = 0x17B4D4u;
            goto label_17b4d4;
        }
    }
    ctx->pc = 0x17B4BCu;
    // 0x17b4bc: 0x0  nop
    ctx->pc = 0x17b4bcu;
    // NOP
label_17b4c0:
    // 0x17b4c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17b4c4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x17b4c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17b4c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17B4C8u;
    {
        const bool branch_taken_0x17b4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4C8u;
        // 0x17b4cc: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4c8) {
            ctx->pc = 0x17B4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b4a0;
        }
    }
    ctx->pc = 0x17B4D0u;
    // 0x17b4d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b4d4:
    // 0x17b4d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17b4d8: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x17b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x17b4dc: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x17b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x17b4e0: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x17b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x17b4e4: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x17b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x17b4e8: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x17b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x17b4ec: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_17b4f0:
    // 0x17b4f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b4f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b4f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17B4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4FCu;
        // 0x17b500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B504u;
}
