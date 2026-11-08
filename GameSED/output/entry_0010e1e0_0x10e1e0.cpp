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

// Function: entry_0010e1e0
// Address: 0x10e1e0 - 0x10e210
void entry_0010e1e0_0x10e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e1e0_0x10e1e0");
#endif

    switch (ctx->pc) {
        case 0x10e1f4u: goto label_10e1f4;
        default: break;
    }

    ctx->pc = 0x10e1e0u;

label_10e1e0:
    // 0x10e1e0: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_10e1e4:
    if (ctx->pc == 0x10E1E4u) {
        ctx->pc = 0x10E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1E0u;
        // 0x10e1e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1E8u;
        goto label_10e1e8;
    }
    ctx->pc = 0x10E1E0u;
    {
        const bool branch_taken_0x10e1e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1E0u;
        // 0x10e1e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1e0) {
            ctx->pc = 0x10E210u;
            return;
        }
    }
    ctx->pc = 0x10E1E8u;
label_10e1e8:
    // 0x10e1e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e1ec:
    // 0x10e1ec: 0xc04112e  jal         func_1044B8
label_10e1f0:
    if (ctx->pc == 0x10E1F0u) {
        ctx->pc = 0x10E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1ECu;
        // 0x10e1f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1F4u;
        goto label_10e1f4;
    }
    ctx->pc = 0x10E1ECu;
    SET_GPR_U32(ctx, 31, 0x10E1F4u);
    ctx->pc = 0x10E1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1ECu;
    // 0x10e1f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B8u, 0x10E1ECu, 0x10E1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E1F4u;
label_10e1f4:
    // 0x10e1f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_10e1f8:
    // 0x10e1f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10e1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10e1fc:
    // 0x10e1fc: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x10e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_10e200:
    // 0x10e200: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10e200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e204:
    // 0x10e204: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10e204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10e208:
    // 0x10e208: 0x60f809  jalr        $v1
label_10e20c:
    if (ctx->pc == 0x10E20Cu) {
        ctx->pc = 0x10E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E208u;
        // 0x10e20c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E210u;
        goto label_fallthrough_0x10e208;
    }
    ctx->pc = 0x10E208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10E210u);
        ctx->pc = 0x10E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E208u;
        // 0x10e20c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E208u, 0x10E210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10e208:
    ctx->pc = 0x10E210u;
}
