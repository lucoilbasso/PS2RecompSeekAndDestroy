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

// Function: entry_0017c6d0
// Address: 0x17c6d0 - 0x17c700
void entry_0017c6d0_0x17c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c6d0_0x17c6d0");
#endif

    switch (ctx->pc) {
        case 0x17c6e0u: goto label_17c6e0;
        case 0x17c6f0u: goto label_17c6f0;
        default: break;
    }

    ctx->pc = 0x17c6d0u;

label_17c6d0:
    // 0x17c6d0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x17c6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x17c6d4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17c6d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17c6d8: 0xc05f20c  jal         func_17C830
    ctx->pc = 0x17C6D8u;
    SET_GPR_U32(ctx, 31, 0x17C6E0u);
    ctx->pc = 0x17C6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6D8u;
    // 0x17c6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C830u, 0x17C6D8u, 0x17C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6E0u;
label_17c6e0:
    // 0x17c6e0: 0x643fffb  bgezl       $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17C6E0u;
    {
        const bool branch_taken_0x17c6e0 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x17c6e0) {
            ctx->pc = 0x17C6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C6E0u;
            // 0x17c6e4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c6d0;
        }
    }
    ctx->pc = 0x17C6E8u;
    // 0x17c6e8: 0xc05f0ea  jal         func_17C3A8
    ctx->pc = 0x17C6E8u;
    SET_GPR_U32(ctx, 31, 0x17C6F0u);
    ctx->pc = 0x17C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6E8u;
    // 0x17c6ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C3A8u, 0x17C6E8u, 0x17C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6F0u;
label_17c6f0:
    // 0x17c6f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c6f4: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x17c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x17c6f8: 0x2622082e  addiu       $v0, $s1, 0x82E
    ctx->pc = 0x17c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2094));
    // 0x17c6fc: 0x0  nop
    ctx->pc = 0x17c6fcu;
    // NOP
    ctx->pc = 0x17c700u;
}
