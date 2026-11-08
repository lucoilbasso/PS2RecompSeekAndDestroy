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

// Function: entry_0015a7ec
// Address: 0x15a7ec - 0x15a810
void entry_0015a7ec_0x15a7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a7ec_0x15a7ec");
#endif

    ctx->pc = 0x15a7ecu;

label_15a7ec:
    // 0x15a7ec: 0x8e660168  lw          $a2, 0x168($s3)
    ctx->pc = 0x15a7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
label_15a7f0:
    // 0x15a7f0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15a7f4:
    if (ctx->pc == 0x15A7F4u) {
        ctx->pc = 0x15A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7F0u;
        // 0x15a7f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A7F8u;
        goto label_15a7f8;
    }
    ctx->pc = 0x15A7F0u;
    {
        const bool branch_taken_0x15a7f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7F0u;
        // 0x15a7f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7f0) {
            ctx->pc = 0x15A810u;
            return;
        }
    }
    ctx->pc = 0x15A7F8u;
label_15a7f8:
    // 0x15a7f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15a7fc:
    // 0x15a7fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15a800:
    // 0x15a800: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15a800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15a804:
    // 0x15a804: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15a808:
    // 0x15a808: 0x60f809  jalr        $v1
label_15a80c:
    if (ctx->pc == 0x15A80Cu) {
        ctx->pc = 0x15A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A808u;
        // 0x15a80c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A810u;
        goto label_fallthrough_0x15a808;
    }
    ctx->pc = 0x15A808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15A810u);
        ctx->pc = 0x15A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A808u;
        // 0x15a80c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A808u, 0x15A810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15a808:
    ctx->pc = 0x15A810u;
}
