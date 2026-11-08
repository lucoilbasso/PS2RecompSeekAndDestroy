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

// Function: GetFontProAddress__6WcFontUs
// Address: 0x184010 - 0x184068
void GetFontProAddress__6WcFontUs_0x184010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFontProAddress__6WcFontUs_0x184010");
#endif

    switch (ctx->pc) {
        case 0x184030u: goto label_184030;
        default: break;
    }

    ctx->pc = 0x184010u;

    // 0x184010: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x184010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x184014: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x184014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x184018: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x184018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x18401c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18401cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184020: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x184020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x184024: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x184024u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x184028: 0x238c2  srl         $a3, $v0, 3
    ctx->pc = 0x184028u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x18402c: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x18402cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_184030:
    // 0x184030: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x184030u;
    {
        const bool branch_taken_0x184030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184030u;
        // 0x184034: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184030) {
            ctx->pc = 0x18405Cu;
            goto label_18405c;
        }
    }
    ctx->pc = 0x184038u;
    // 0x184038: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x184038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18403c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18403cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184040: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x184040u;
    {
        const bool branch_taken_0x184040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x184044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184040u;
        // 0x184044: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184040) {
            ctx->pc = 0x184060u;
            goto label_184060;
        }
    }
    ctx->pc = 0x184048u;
    // 0x184048: 0x0  nop
    ctx->pc = 0x184048u;
    // NOP
    // 0x18404c: 0x0  nop
    ctx->pc = 0x18404cu;
    // NOP
    // 0x184050: 0x0  nop
    ctx->pc = 0x184050u;
    // NOP
    // 0x184054: 0x5468fff6  bnel        $v1, $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x184054u;
    {
        const bool branch_taken_0x184054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x184054) {
            ctx->pc = 0x184058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184054u;
            // 0x184058: 0xc7102b  sltu        $v0, $a2, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x184030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184030;
        }
    }
    ctx->pc = 0x18405Cu;
label_18405c:
    // 0x18405c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18405cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184060:
    // 0x184060: 0x3e00008  jr          $ra
    ctx->pc = 0x184060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184068u;
}
