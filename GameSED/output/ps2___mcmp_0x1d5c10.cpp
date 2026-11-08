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

// Function: __mcmp
// Address: 0x1d5c10 - 0x1d5c78
void ps2___mcmp_0x1d5c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___mcmp_0x1d5c10");
#endif

    switch (ctx->pc) {
        case 0x1d5c40u: goto label_1d5c40;
        default: break;
    }

    ctx->pc = 0x1d5c10u;

    // 0x1d5c10: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1d5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5c14: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1d5c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d5c18: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5c1c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D5C1Cu;
    {
        const bool branch_taken_0x1d5c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c1c) {
            ctx->pc = 0x1D5C70u;
            goto label_1d5c70;
        }
    }
    ctx->pc = 0x1D5C24u;
    // 0x1d5c24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5c28: 0x248a0014  addiu       $t2, $a0, 0x14
    ctx->pc = 0x1d5c28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1d5c2c: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x1d5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x1d5c30: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x1d5c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1d5c34: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x1d5c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5c38: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x1d5c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x1d5c3c: 0x0  nop
    ctx->pc = 0x1d5c3cu;
    // NOP
label_1d5c40:
    // 0x1d5c40: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x1d5c40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x1d5c44: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1d5c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d5c48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d5c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5c4c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x1d5c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d5c50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d5c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5c54: 0x147402b  sltu        $t0, $t2, $a3
    ctx->pc = 0x1d5c54u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1d5c58: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x1d5c58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d5c5c: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5C5Cu;
    {
        const bool branch_taken_0x1d5c5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C5Cu;
        // 0x1d5c60: 0xc3100a  movz        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c5c) {
            ctx->pc = 0x1D5C70u;
            goto label_1d5c70;
        }
    }
    ctx->pc = 0x1D5C64u;
    // 0x1d5c64: 0x5500fff6  bnel        $t0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D5C64u;
    {
        const bool branch_taken_0x1d5c64 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c64) {
            ctx->pc = 0x1D5C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5C64u;
            // 0x1d5c68: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5c40;
        }
    }
    ctx->pc = 0x1D5C6Cu;
    // 0x1d5c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5c70:
    // 0x1d5c70: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5C78u;
}
