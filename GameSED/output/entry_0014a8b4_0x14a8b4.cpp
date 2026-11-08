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

// Function: entry_0014a8b4
// Address: 0x14a8b4 - 0x14a8e0
void entry_0014a8b4_0x14a8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a8b4_0x14a8b4");
#endif

    switch (ctx->pc) {
        case 0x14a8d8u: goto label_14a8d8;
        default: break;
    }

    ctx->pc = 0x14a8b4u;

label_14a8b4:
    // 0x14a8b4: 0x660000a  bltz        $s3, . + 4 + (0xA << 2)
label_14a8b8:
    if (ctx->pc == 0x14A8B8u) {
        ctx->pc = 0x14A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8B4u;
        // 0x14a8b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A8BCu;
        goto label_14a8bc;
    }
    ctx->pc = 0x14A8B4u;
    {
        const bool branch_taken_0x14a8b4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x14A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8B4u;
        // 0x14a8b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8b4) {
            ctx->pc = 0x14A8E0u;
            return;
        }
    }
    ctx->pc = 0x14A8BCu;
label_14a8bc:
    // 0x14a8bc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_14a8c0:
    // 0x14a8c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14a8c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14a8c4:
    // 0x14a8c4: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x14a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_14a8c8:
    // 0x14a8c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14a8c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14a8cc:
    // 0x14a8cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14a8d0:
    // 0x14a8d0: 0x60f809  jalr        $v1
label_14a8d4:
    if (ctx->pc == 0x14A8D4u) {
        ctx->pc = 0x14A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8D0u;
        // 0x14a8d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A8D8u;
        goto label_14a8d8;
    }
    ctx->pc = 0x14A8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14A8D8u);
        ctx->pc = 0x14A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8D0u;
        // 0x14a8d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A8D0u, 0x14A8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A8D8u;
label_14a8d8:
    // 0x14a8d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_14a8dc:
    if (ctx->pc == 0x14A8DCu) {
        ctx->pc = 0x14A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8D8u;
        // 0x14a8dc: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A8E0u;
        goto label_fallthrough_0x14a8d8;
    }
    ctx->pc = 0x14A8D8u;
    {
        const bool branch_taken_0x14a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8D8u;
        // 0x14a8dc: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8d8) {
            ctx->pc = 0x14A908u;
            return;
        }
    }
label_fallthrough_0x14a8d8:
    ctx->pc = 0x14A8E0u;
}
