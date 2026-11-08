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

// Function: Cmd_CARD_LAST_CHECK_Entry__FP15BsSCDEntControl
// Address: 0x11d048 - 0x11d0e4
void Cmd_CARD_LAST_CHECK_Entry__FP15BsSCDEntControl_0x11d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CARD_LAST_CHECK_Entry__FP15BsSCDEntControl_0x11d048");
#endif

    switch (ctx->pc) {
        case 0x11d05cu: goto label_11d05c;
        case 0x11d0a0u: goto label_11d0a0;
        default: break;
    }

    ctx->pc = 0x11d048u;

    // 0x11d048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d04c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d050: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11d050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11d054: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D054u;
    SET_GPR_U32(ctx, 31, 0x11D05Cu);
    ctx->pc = 0x11D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D054u;
    // 0x11d058: 0x8f908d10  lw          $s0, -0x72F0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D054u, 0x11D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D05Cu;
label_11d05c:
    // 0x11d05c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11d060: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x11d060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x11d064: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x11d064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11d068: 0x2484fcb0  addiu       $a0, $a0, -0x350
    ctx->pc = 0x11d068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
    // 0x11d06c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x11d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11d070: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x11d070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d074: 0x8ca24610  lw          $v0, 0x4610($a1)
    ctx->pc = 0x11d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 17936)));
    // 0x11d078: 0x2c430003  sltiu       $v1, $v0, 0x3
    ctx->pc = 0x11d078u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x11d07c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D07Cu;
    {
        const bool branch_taken_0x11d07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D07Cu;
        // 0x11d080: 0xac820400  sw          $v0, 0x400($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d07c) {
            ctx->pc = 0x11D08Cu;
            goto label_11d08c;
        }
    }
    ctx->pc = 0x11D084u;
    // 0x11d084: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11d084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11d088: 0xac820400  sw          $v0, 0x400($a0)
    ctx->pc = 0x11d088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 2));
label_11d08c:
    // 0x11d08c: 0x24a34604  addiu       $v1, $a1, 0x4604
    ctx->pc = 0x11d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 17924));
    // 0x11d090: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11d090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d098: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11d098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d09c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11d0a0:
    // 0x11d0a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x11d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x11d0a4: 0xc22804  sllv        $a1, $v0, $a2
    ctx->pc = 0x11d0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x11d0a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11d0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11d0ac: 0x14480002  bne         $v0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11D0ACu;
    {
        const bool branch_taken_0x11d0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x11D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D0ACu;
        // 0x11d0b0: 0x28c40003  slti        $a0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0ac) {
            ctx->pc = 0x11D0B8u;
            goto label_11d0b8;
        }
    }
    ctx->pc = 0x11D0B4u;
    // 0x11d0b4: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x11d0b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_11d0b8:
    // 0x11d0b8: 0x0  nop
    ctx->pc = 0x11d0b8u;
    // NOP
    // 0x11d0bc: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11D0BCu;
    {
        const bool branch_taken_0x11d0bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d0bc) {
            ctx->pc = 0x11D0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D0BCu;
            // 0x11d0c0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d0a0;
        }
    }
    ctx->pc = 0x11D0C4u;
    // 0x11d0c4: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D0C4u;
    {
        const bool branch_taken_0x11d0c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D0C4u;
        // 0x11d0c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0c4) {
            ctx->pc = 0x11D0D8u;
            goto label_11d0d8;
        }
    }
    ctx->pc = 0x11D0CCu;
    // 0x11d0cc: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x11d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x11d0d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11d0d4: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x11d0d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
label_11d0d8:
    // 0x11d0d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11d0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11D0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D0DCu;
        // 0x11d0e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D0E4u;
}
