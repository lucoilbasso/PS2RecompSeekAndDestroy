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

// Function: entry_00199b20
// Address: 0x199b20 - 0x199b50
void entry_00199b20_0x199b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199b20_0x199b20");
#endif

    switch (ctx->pc) {
        case 0x199b44u: goto label_199b44;
        default: break;
    }

    ctx->pc = 0x199b20u;

label_199b20:
    // 0x199b20: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x199b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_199b24:
    // 0x199b24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x199b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_199b28:
    // 0x199b28: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_199b2c:
    if (ctx->pc == 0x199B2Cu) {
        ctx->pc = 0x199B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B28u;
        // 0x199b2c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B30u;
        goto label_199b30;
    }
    ctx->pc = 0x199B28u;
    {
        const bool branch_taken_0x199b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B28u;
        // 0x199b2c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b28) {
            ctx->pc = 0x199B58u;
            return;
        }
    }
    ctx->pc = 0x199B30u;
label_199b30:
    // 0x199b30: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x199b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_199b34:
    // 0x199b34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_199b38:
    if (ctx->pc == 0x199B38u) {
        ctx->pc = 0x199B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B34u;
        // 0x199b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B3Cu;
        goto label_199b3c;
    }
    ctx->pc = 0x199B34u;
    {
        const bool branch_taken_0x199b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B34u;
        // 0x199b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b34) {
            ctx->pc = 0x199B50u;
            return;
        }
    }
    ctx->pc = 0x199B3Cu;
label_199b3c:
    // 0x199b3c: 0x40f809  jalr        $v0
label_199b40:
    if (ctx->pc == 0x199B40u) {
        ctx->pc = 0x199B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B3Cu;
        // 0x199b40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B44u;
        goto label_199b44;
    }
    ctx->pc = 0x199B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199B44u);
        ctx->pc = 0x199B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B3Cu;
        // 0x199b40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B3Cu, 0x199B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199B44u;
label_199b44:
    // 0x199b44: 0x10000005  b           . + 4 + (0x5 << 2)
label_199b48:
    if (ctx->pc == 0x199B48u) {
        ctx->pc = 0x199B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B44u;
        // 0x199b48: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B4Cu;
        goto label_199b4c;
    }
    ctx->pc = 0x199B44u;
    {
        const bool branch_taken_0x199b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B44u;
        // 0x199b48: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b44) {
            ctx->pc = 0x199B5Cu;
            return;
        }
    }
    ctx->pc = 0x199B4Cu;
label_199b4c:
    // 0x199b4c: 0x0  nop
    ctx->pc = 0x199b4cu;
    // NOP
    ctx->pc = 0x199b50u;
}
