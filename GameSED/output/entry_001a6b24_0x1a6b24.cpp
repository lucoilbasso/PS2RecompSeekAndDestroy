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

// Function: entry_001a6b24
// Address: 0x1a6b24 - 0x1a6b64
void entry_001a6b24_0x1a6b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6b24_0x1a6b24");
#endif

    switch (ctx->pc) {
        case 0x1a6b60u: goto label_1a6b60;
        default: break;
    }

    ctx->pc = 0x1a6b24u;

    // 0x1a6b24: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1a6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a6b28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6b2c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A6B2Cu;
    {
        const bool branch_taken_0x1a6b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B2Cu;
        // 0x1a6b30: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b2c) {
            ctx->pc = 0x1A6B90u;
            return;
        }
    }
    ctx->pc = 0x1A6B34u;
    // 0x1a6b34: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a6b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6b38: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6b3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6b40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6b44: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6b48: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6b4c: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6b4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6b50: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6B50u;
    {
        const bool branch_taken_0x1a6b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B50u;
        // 0x1a6b54: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b50) {
            ctx->pc = 0x1A6B64u;
            return;
        }
    }
    ctx->pc = 0x1A6B58u;
    // 0x1a6b58: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6B58u;
    SET_GPR_U32(ctx, 31, 0x1A6B60u);
    ctx->pc = 0x1A6B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B58u;
    // 0x1a6b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6B58u, 0x1A6B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B60u;
label_1a6b60:
    // 0x1a6b60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a6b64u;
}
