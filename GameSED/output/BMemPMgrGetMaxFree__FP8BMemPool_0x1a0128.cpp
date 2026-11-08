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

// Function: BMemPMgrGetMaxFree__FP8BMemPool
// Address: 0x1a0128 - 0x1a018c
void BMemPMgrGetMaxFree__FP8BMemPool_0x1a0128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrGetMaxFree__FP8BMemPool_0x1a0128");
#endif

    switch (ctx->pc) {
        case 0x1a0150u: goto label_1a0150;
        default: break;
    }

    ctx->pc = 0x1a0128u;

    // 0x1a0128: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1a0128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a012c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A012Cu;
    {
        const bool branch_taken_0x1a012c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a012c) {
            ctx->pc = 0x1A0184u;
            goto label_1a0184;
        }
    }
    ctx->pc = 0x1A0134u;
    // 0x1a0134: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1a0134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a0138: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A0138u;
    {
        const bool branch_taken_0x1a0138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0138u;
        // 0x1a013c: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0138) {
            ctx->pc = 0x1A0174u;
            goto label_1a0174;
        }
    }
    ctx->pc = 0x1A0140u;
    // 0x1a0140: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x1a0140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x1a0144: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1a0144u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1a0148: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a0148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a014c: 0x0  nop
    ctx->pc = 0x1a014cu;
    // NOP
label_1a0150:
    // 0x1a0150: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1a0150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a0154: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1a0154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1a0158: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a0158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a015c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A015Cu;
    {
        const bool branch_taken_0x1a015c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a015c) {
            ctx->pc = 0x1A0160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A015Cu;
            // 0x1a0160: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0164u;
            goto label_1a0164;
        }
    }
    ctx->pc = 0x1A0164u;
label_1a0164:
    // 0x1a0164: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1a0164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a0168: 0x0  nop
    ctx->pc = 0x1a0168u;
    // NOP
    // 0x1a016c: 0x54a0fff8  bnel        $a1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A016Cu;
    {
        const bool branch_taken_0x1a016c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a016c) {
            ctx->pc = 0x1A0170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A016Cu;
            // 0x1a0170: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0150;
        }
    }
    ctx->pc = 0x1A0174u;
label_1a0174:
    // 0x1a0174: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1a0174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a0178: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1a0178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1a017c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1a017cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1a0180: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1a0180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_1a0184:
    // 0x1a0184: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0184u;
        // 0x1a0188: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A018Cu;
}
