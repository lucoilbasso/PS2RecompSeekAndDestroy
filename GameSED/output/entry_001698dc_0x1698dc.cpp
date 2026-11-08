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

// Function: entry_001698dc
// Address: 0x1698dc - 0x1698f8
void entry_001698dc_0x1698dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001698dc_0x1698dc");
#endif

    switch (ctx->pc) {
        case 0x1698f4u: goto label_1698f4;
        default: break;
    }

    ctx->pc = 0x1698dcu;

label_1698dc:
    // 0x1698dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1698dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1698e0:
    // 0x1698e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1698e4:
    if (ctx->pc == 0x1698E4u) {
        ctx->pc = 0x1698E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698E0u;
        // 0x1698e4: 0x92030c00  lbu         $v1, 0xC00($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1698E8u;
        goto label_1698e8;
    }
    ctx->pc = 0x1698E0u;
    {
        const bool branch_taken_0x1698e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1698e0) {
            ctx->pc = 0x1698E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1698E0u;
            // 0x1698e4: 0x92030c00  lbu         $v1, 0xC00($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1698F8u;
            return;
        }
    }
    ctx->pc = 0x1698E8u;
label_1698e8:
    // 0x1698e8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1698e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1698ec:
    // 0x1698ec: 0x40f809  jalr        $v0
label_1698f0:
    if (ctx->pc == 0x1698F0u) {
        ctx->pc = 0x1698F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698ECu;
        // 0x1698f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1698F4u;
        goto label_1698f4;
    }
    ctx->pc = 0x1698ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1698F4u);
        ctx->pc = 0x1698F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698ECu;
        // 0x1698f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1698ECu, 0x1698F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1698F4u;
label_1698f4:
    // 0x1698f4: 0x92030c00  lbu         $v1, 0xC00($s0)
    ctx->pc = 0x1698f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3072)));
    ctx->pc = 0x1698f8u;
}
