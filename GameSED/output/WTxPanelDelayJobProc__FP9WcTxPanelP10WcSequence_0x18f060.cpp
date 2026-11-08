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

// Function: WTxPanelDelayJobProc__FP9WcTxPanelP10WcSequence
// Address: 0x18f060 - 0x18f118
void WTxPanelDelayJobProc__FP9WcTxPanelP10WcSequence_0x18f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelDelayJobProc__FP9WcTxPanelP10WcSequence_0x18f060");
#endif

    switch (ctx->pc) {
        case 0x18f0a0u: goto label_18f0a0;
        case 0x18f0f8u: goto label_18f0f8;
        default: break;
    }

    ctx->pc = 0x18f060u;

    // 0x18f060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18f060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18f064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18f068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f06c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18f06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18f070: 0x8e02024c  lw          $v0, 0x24C($s0)
    ctx->pc = 0x18f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x18f074: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F074u;
    {
        const bool branch_taken_0x18f074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F074u;
        // 0x18f078: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f074) {
            ctx->pc = 0x18F084u;
            goto label_18f084;
        }
    }
    ctx->pc = 0x18F07Cu;
    // 0x18f07c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18F07Cu;
    {
        const bool branch_taken_0x18f07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F07Cu;
        // 0x18f080: 0xae02024c  sw          $v0, 0x24C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f07c) {
            ctx->pc = 0x18F108u;
            goto label_18f108;
        }
    }
    ctx->pc = 0x18F084u;
label_18f084:
    // 0x18f084: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x18f084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x18f088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f08c: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18F08Cu;
    {
        const bool branch_taken_0x18f08c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x18F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F08Cu;
        // 0x18f090: 0x8e040218  lw          $a0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f08c) {
            ctx->pc = 0x18F0D0u;
            goto label_18f0d0;
        }
    }
    ctx->pc = 0x18F094u;
    // 0x18f094: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18F094u;
    {
        const bool branch_taken_0x18f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F094u;
        // 0x18f098: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f094) {
            ctx->pc = 0x18F0B4u;
            goto label_18f0b4;
        }
    }
    ctx->pc = 0x18F09Cu;
    // 0x18f09c: 0x0  nop
    ctx->pc = 0x18f09cu;
    // NOP
label_18f0a0:
    // 0x18f0a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18f0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18f0a4: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x18f0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18f0a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18F0A8u;
    {
        const bool branch_taken_0x18f0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0A8u;
        // 0x18f0ac: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0a8) {
            ctx->pc = 0x18F0D0u;
            goto label_18f0d0;
        }
    }
    ctx->pc = 0x18F0B0u;
    // 0x18f0b0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x18f0b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_18f0b4:
    // 0x18f0b4: 0x304300f0  andi        $v1, $v0, 0xF0
    ctx->pc = 0x18f0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x18f0b8: 0x0  nop
    ctx->pc = 0x18f0b8u;
    // NOP
    // 0x18f0bc: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18F0BCu;
    {
        const bool branch_taken_0x18f0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0BCu;
        // 0x18f0c0: 0x31903  sra         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0bc) {
            ctx->pc = 0x18F0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f0a0;
        }
    }
    ctx->pc = 0x18F0C4u;
    // 0x18f0c4: 0x3042ff0f  andi        $v0, $v0, 0xFF0F
    ctx->pc = 0x18f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65295);
    // 0x18f0c8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x18f0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f0cc: 0xae03024c  sw          $v1, 0x24C($s0)
    ctx->pc = 0x18f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 3));
label_18f0d0:
    // 0x18f0d0: 0x8e02024c  lw          $v0, 0x24C($s0)
    ctx->pc = 0x18f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x18f0d4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x18F0D4u;
    {
        const bool branch_taken_0x18f0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f0d4) {
            ctx->pc = 0x18F0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F0D4u;
            // 0x18f0d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F10Cu;
            goto label_18f10c;
        }
    }
    ctx->pc = 0x18F0DCu;
    // 0x18f0dc: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18f0e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18f0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18f0e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F0E4u;
    {
        const bool branch_taken_0x18f0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0E4u;
        // 0x18f0e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0e4) {
            ctx->pc = 0x18F108u;
            goto label_18f108;
        }
    }
    ctx->pc = 0x18F0ECu;
    // 0x18f0ec: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x18f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x18f0f0: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x18F0F0u;
    SET_GPR_U32(ctx, 31, 0x18F0F8u);
    ctx->pc = 0x18F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F0F0u;
    // 0x18f0f4: 0x24841be8  addiu       $a0, $a0, 0x1BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x18F0F0u, 0x18F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F0F8u;
label_18f0f8:
    // 0x18f0f8: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18f0fc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x18f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x18f100: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18f100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18f104: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x18f104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_18f108:
    // 0x18f108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f10c:
    // 0x18f10c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18f10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18f110: 0x3e00008  jr          $ra
    ctx->pc = 0x18F110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F110u;
        // 0x18f114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F118u;
}
