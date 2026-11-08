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

// Function: entry_001a604c
// Address: 0x1a604c - 0x1a60a8
void entry_001a604c_0x1a604c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a604c_0x1a604c");
#endif

    switch (ctx->pc) {
        case 0x1a6064u: goto label_1a6064;
        default: break;
    }

    ctx->pc = 0x1a604cu;

    // 0x1a604c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a6050: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a6050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a6054: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6058: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a605c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A605Cu;
    SET_GPR_U32(ctx, 31, 0x1A6064u);
    ctx->pc = 0x1A6060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A605Cu;
    // 0x1a6060: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A605Cu, 0x1A6064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6064u;
label_1a6064:
    // 0x1a6064: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1a6064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1a6068: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a6068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a606c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6070: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A6070u;
    {
        const bool branch_taken_0x1a6070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6070) {
            ctx->pc = 0x1A6074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6070u;
            // 0x1a6074: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A60A8u;
            return;
        }
    }
    ctx->pc = 0x1A6078u;
    // 0x1a6078: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a6078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a607c: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a607cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6080: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a6080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a6084: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1a6084u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a6088: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a6088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a608c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a608cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a6090: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1a6090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6094: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A6094u;
    {
        const bool branch_taken_0x1a6094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6094u;
        // 0x1a6098: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6094) {
            ctx->pc = 0x1A6104u;
            return;
        }
    }
    ctx->pc = 0x1A609Cu;
    // 0x1a609c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A609Cu;
    {
        const bool branch_taken_0x1a609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a609c) {
            ctx->pc = 0x1A60F8u;
            return;
        }
    }
    ctx->pc = 0x1A60A4u;
    // 0x1a60a4: 0x0  nop
    ctx->pc = 0x1a60a4u;
    // NOP
    ctx->pc = 0x1a60a8u;
}
