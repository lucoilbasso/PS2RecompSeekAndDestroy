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

// Function: BMotionTimer__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a4e58 - 0x1a4ec8
void BMotionTimer__FP11BMotionCtrlP11BMotionWorki_0x1a4e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionTimer__FP11BMotionCtrlP11BMotionWorki_0x1a4e58");
#endif

    switch (ctx->pc) {
        case 0x1a4eb8u: goto label_1a4eb8;
        default: break;
    }

    ctx->pc = 0x1a4e58u;

    // 0x1a4e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4e5c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a4e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a4e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4e64: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4E64u;
    {
        const bool branch_taken_0x1a4e64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E64u;
        // 0x1a4e68: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e64) {
            ctx->pc = 0x1A4E70u;
            goto label_1a4e70;
        }
    }
    ctx->pc = 0x1A4E6Cu;
    // 0x1a4e6c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1a4e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1a4e70:
    // 0x1a4e70: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a4e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a4e74: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a4e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a4e78: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a4e78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a4e7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4E7Cu;
    {
        const bool branch_taken_0x1a4e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e7c) {
            ctx->pc = 0x1A4E90u;
            goto label_1a4e90;
        }
    }
    ctx->pc = 0x1A4E84u;
    // 0x1a4e84: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x1a4e84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1a4e88: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a4e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a4e8c: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x1a4e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
label_1a4e90:
    // 0x1a4e90: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A4E90u;
    {
        const bool branch_taken_0x1a4e90 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1a4e90) {
            ctx->pc = 0x1A4EB8u;
            goto label_1a4eb8;
        }
    }
    ctx->pc = 0x1A4E98u;
    // 0x1a4e98: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4E98u;
    {
        const bool branch_taken_0x1a4e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e98) {
            ctx->pc = 0x1A4EB0u;
            goto label_1a4eb0;
        }
    }
    ctx->pc = 0x1A4EA0u;
    // 0x1a4ea0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a4ea4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a4ea8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4EA8u;
    {
        const bool branch_taken_0x1a4ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EA8u;
        // 0x1a4eac: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ea8) {
            ctx->pc = 0x1A4EB8u;
            goto label_1a4eb8;
        }
    }
    ctx->pc = 0x1A4EB0u;
label_1a4eb0:
    // 0x1a4eb0: 0xc06881e  jal         func_1A2078
    ctx->pc = 0x1A4EB0u;
    SET_GPR_U32(ctx, 31, 0x1A4EB8u);
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A4EB0u, 0x1A4EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EB8u;
label_1a4eb8:
    // 0x1a4eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EC0u;
        // 0x1a4ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4EC8u;
}
