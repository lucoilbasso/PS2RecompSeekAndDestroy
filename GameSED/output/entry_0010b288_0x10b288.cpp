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

// Function: entry_0010b288
// Address: 0x10b288 - 0x10b2c4
void entry_0010b288_0x10b288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b288_0x10b288");
#endif

    switch (ctx->pc) {
        case 0x10b2a4u: goto label_10b2a4;
        default: break;
    }

    ctx->pc = 0x10b288u;

    // 0x10b288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b28c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10b290: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10b290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10b294: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10b294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10b298: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b29c: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B29Cu;
    SET_GPR_U32(ctx, 31, 0x10B2A4u);
    ctx->pc = 0x10B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B29Cu;
    // 0x10b2a0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B29Cu, 0x10B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B2A4u;
label_10b2a4:
    // 0x10b2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2a8: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10b2ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B2ACu;
    {
        const bool branch_taken_0x10b2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2ACu;
        // 0x10b2b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2ac) {
            ctx->pc = 0x10B2C4u;
            return;
        }
    }
    ctx->pc = 0x10B2B4u;
    // 0x10b2b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b2b8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b2bc: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B2BCu;
    {
        const bool branch_taken_0x10b2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10b2bc) {
            ctx->pc = 0x10B2C8u;
            return;
        }
    }
    ctx->pc = 0x10B2C4u;
}
