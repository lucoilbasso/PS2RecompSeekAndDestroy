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

// Function: entry_001d4300
// Address: 0x1d4300 - 0x1d4320
void entry_001d4300_0x1d4300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4300_0x1d4300");
#endif

    switch (ctx->pc) {
        case 0x1d4300u: goto label_1d4300;
        case 0x1d4304u: goto label_1d4304;
        case 0x1d4308u: goto label_1d4308;
        case 0x1d430cu: goto label_1d430c;
        case 0x1d4310u: goto label_1d4310;
        case 0x1d4314u: goto label_1d4314;
        case 0x1d4318u: goto label_1d4318;
        case 0x1d431cu: goto label_1d431c;
        default: break;
    }

    ctx->pc = 0x1d4300u;

label_1d4300:
    // 0x1d4300: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d4300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d4304:
    // 0x1d4304: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d4304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d4308:
    // 0x1d4308: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1d4308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1d430c:
    // 0x1d430c: 0x40f809  jalr        $v0
label_1d4310:
    if (ctx->pc == 0x1D4310u) {
        ctx->pc = 0x1D4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D430Cu;
        // 0x1d4310: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4314u;
        goto label_1d4314;
    }
    ctx->pc = 0x1D430Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4314u);
        ctx->pc = 0x1D4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D430Cu;
        // 0x1d4310: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D430Cu, 0x1D4314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4314u;
label_1d4314:
    // 0x1d4314: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d4314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4318:
    // 0x1d4318: 0x1860fff1  blez        $v1, . + 4 + (-0xF << 2)
label_1d431c:
    if (ctx->pc == 0x1D431Cu) {
        ctx->pc = 0x1D431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4318u;
        // 0x1d431c: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4320u;
        goto label_fallthrough_0x1d4318;
    }
    ctx->pc = 0x1D4318u;
    {
        const bool branch_taken_0x1d4318 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4318u;
        // 0x1d431c: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4318) {
            ctx->pc = 0x1D42E0u;
            return;
        }
    }
label_fallthrough_0x1d4318:
    ctx->pc = 0x1D4320u;
}
