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

// Function: entry_0015cc38
// Address: 0x15cc38 - 0x15cc6c
void entry_0015cc38_0x15cc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cc38_0x15cc38");
#endif

    ctx->pc = 0x15cc38u;

label_15cc38:
    // 0x15cc38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cc3c:
    // 0x15cc3c: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x15cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15cc40:
    // 0x15cc40: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15cc40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15cc44:
    // 0x15cc44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15cc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15cc48:
    // 0x15cc48: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15cc4c:
    if (ctx->pc == 0x15CC4Cu) {
        ctx->pc = 0x15CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC48u;
        // 0x15cc4c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC50u;
        goto label_15cc50;
    }
    ctx->pc = 0x15CC48u;
    {
        const bool branch_taken_0x15cc48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC48u;
        // 0x15cc4c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc48) {
            ctx->pc = 0x15CC6Cu;
            return;
        }
    }
    ctx->pc = 0x15CC50u;
label_15cc50:
    // 0x15cc50: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cc54:
    // 0x15cc54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15cc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cc58:
    // 0x15cc58: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cc5c:
    // 0x15cc5c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cc5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cc60:
    // 0x15cc60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cc64:
    // 0x15cc64: 0x60f809  jalr        $v1
label_15cc68:
    if (ctx->pc == 0x15CC68u) {
        ctx->pc = 0x15CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC64u;
        // 0x15cc68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC6Cu;
        goto label_fallthrough_0x15cc64;
    }
    ctx->pc = 0x15CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CC6Cu);
        ctx->pc = 0x15CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC64u;
        // 0x15cc68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC64u, 0x15CC6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15cc64:
    ctx->pc = 0x15CC6Cu;
}
