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

// Function: ApDaemonInqSCDLib__FP8ApcRsc3DPii
// Address: 0x138d50 - 0x138db0
void ApDaemonInqSCDLib__FP8ApcRsc3DPii_0x138d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonInqSCDLib__FP8ApcRsc3DPii_0x138d50");
#endif

    ctx->pc = 0x138d50u;

    // 0x138d50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x138d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x138d54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d58: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x138D58u;
    {
        const bool branch_taken_0x138d58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x138D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D58u;
        // 0x138d5c: 0x21b03  sra         $v1, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d58) {
            ctx->pc = 0x138DA8u;
            goto label_138da8;
        }
    }
    ctx->pc = 0x138D60u;
    // 0x138d60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138D60u;
    {
        const bool branch_taken_0x138d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D60u;
        // 0x138d64: 0x30420fff  andi        $v0, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d60) {
            ctx->pc = 0x138D70u;
            goto label_138d70;
        }
    }
    ctx->pc = 0x138D68u;
    // 0x138d68: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x138d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d6c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x138d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_138d70:
    // 0x138d70: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x138D70u;
    {
        const bool branch_taken_0x138d70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D70u;
        // 0x138d74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d70) {
            ctx->pc = 0x138D90u;
            goto label_138d90;
        }
    }
    ctx->pc = 0x138D78u;
    // 0x138d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138d7c: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138D7Cu;
    {
        const bool branch_taken_0x138d7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x138D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D7Cu;
        // 0x138d80: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d7c) {
            ctx->pc = 0x138DA0u;
            goto label_138da0;
        }
    }
    ctx->pc = 0x138D84u;
    // 0x138d84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x138D84u;
    {
        const bool branch_taken_0x138d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138d84) {
            ctx->pc = 0x138DA8u;
            goto label_138da8;
        }
    }
    ctx->pc = 0x138D8Cu;
    // 0x138d8c: 0x0  nop
    ctx->pc = 0x138d8cu;
    // NOP
label_138d90:
    // 0x138d90: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x138d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x138d94: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x138d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x138d98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x138D98u;
    {
        const bool branch_taken_0x138d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D98u;
        // 0x138d9c: 0x8c630088  lw          $v1, 0x88($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d98) {
            ctx->pc = 0x138DA4u;
            goto label_138da4;
        }
    }
    ctx->pc = 0x138DA0u;
label_138da0:
    // 0x138da0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x138da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_138da4:
    // 0x138da4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x138da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_138da8:
    // 0x138da8: 0x3e00008  jr          $ra
    ctx->pc = 0x138DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DA8u;
        // 0x138dac: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138DB0u;
}
