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

// Function: Cmd_CARD_FREE_CHECK_Entry__FP15BsSCDEntControl
// Address: 0x11cfe8 - 0x11d044
void Cmd_CARD_FREE_CHECK_Entry__FP15BsSCDEntControl_0x11cfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_FREE_CHECK_Entry__FP15BsSCDEntControl_0x11cfe8");
#endif

    switch (ctx->pc) {
        case 0x11cffcu: goto label_11cffc;
        default: break;
    }

    ctx->pc = 0x11cfe8u;

    // 0x11cfe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11cfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11cfec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11cfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cff0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11cff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11cff4: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11CFF4u;
    SET_GPR_U32(ctx, 31, 0x11CFFCu);
    ctx->pc = 0x11CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CFF4u;
    // 0x11cff8: 0x8f908d10  lw          $s0, -0x72F0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11CFF4u, 0x11CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFFCu;
label_11cffc:
    // 0x11cffc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11d000: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x11d000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x11d004: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11d008: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x11d008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11d00c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x11d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11d010: 0x2484fcb0  addiu       $a0, $a0, -0x350
    ctx->pc = 0x11d010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
    // 0x11d014: 0x24634040  addiu       $v1, $v1, 0x4040
    ctx->pc = 0x11d014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16448));
    // 0x11d018: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x11d018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x11d01c: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D01Cu;
    {
        const bool branch_taken_0x11d01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x11D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D01Cu;
        // 0x11d020: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d01c) {
            ctx->pc = 0x11D030u;
            goto label_11d030;
        }
    }
    ctx->pc = 0x11D024u;
    // 0x11d024: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x11d024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x11d028: 0x284200b7  slti        $v0, $v0, 0xB7
    ctx->pc = 0x11d028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)183) ? 1 : 0);
    // 0x11d02c: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x11d02cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_11d030:
    // 0x11d030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d034: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11d034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d038: 0xac860400  sw          $a2, 0x400($a0)
    ctx->pc = 0x11d038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 6));
    // 0x11d03c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D03Cu;
        // 0x11d040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D044u;
}
