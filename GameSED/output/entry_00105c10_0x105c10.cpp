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

// Function: entry_00105c10
// Address: 0x105c10 - 0x105c48
void entry_00105c10_0x105c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105c10_0x105c10");
#endif

    switch (ctx->pc) {
        case 0x105c20u: goto label_105c20;
        case 0x105c3cu: goto label_105c3c;
        default: break;
    }

    ctx->pc = 0x105c10u;

    // 0x105c10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x105c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x105c14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x105c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x105c18: 0xc06a34a  jal         func_1A8D28
    ctx->pc = 0x105C18u;
    SET_GPR_U32(ctx, 31, 0x105C20u);
    ctx->pc = 0x105C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105C18u;
    // 0x105c1c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8D28u, 0x105C18u, 0x105C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C20u;
label_105c20:
    // 0x105c20: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x105c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x105c24: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x105c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x105c28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105c2c: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x105C2Cu;
    {
        const bool branch_taken_0x105c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x105C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C2Cu;
        // 0x105c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c2c) {
            ctx->pc = 0x105C48u;
            return;
        }
    }
    ctx->pc = 0x105C34u;
    // 0x105c34: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105C34u;
    SET_GPR_U32(ctx, 31, 0x105C3Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105C34u, 0x105C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C3Cu;
label_105c3c:
    // 0x105c3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x105C3Cu;
    {
        const bool branch_taken_0x105c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105C3Cu;
        // 0x105c40: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c3c) {
            ctx->pc = 0x105C4Cu;
            return;
        }
    }
    ctx->pc = 0x105C44u;
    // 0x105c44: 0x0  nop
    ctx->pc = 0x105c44u;
    // NOP
    ctx->pc = 0x105c48u;
}
