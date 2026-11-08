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

// Function: entry_0013c7e4
// Address: 0x13c7e4 - 0x13c810
void entry_0013c7e4_0x13c7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c7e4_0x13c7e4");
#endif

    ctx->pc = 0x13c7e4u;

label_13c7e4:
    // 0x13c7e4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x13c7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_13c7e8:
    // 0x13c7e8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x13c7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_13c7ec:
    // 0x13c7ec: 0x8cc60208  lw          $a2, 0x208($a2)
    ctx->pc = 0x13c7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 520)));
label_13c7f0:
    // 0x13c7f0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_13c7f4:
    if (ctx->pc == 0x13C7F4u) {
        ctx->pc = 0x13C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7F0u;
        // 0x13c7f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C7F8u;
        goto label_13c7f8;
    }
    ctx->pc = 0x13C7F0u;
    {
        const bool branch_taken_0x13c7f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7F0u;
        // 0x13c7f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7f0) {
            ctx->pc = 0x13C810u;
            return;
        }
    }
    ctx->pc = 0x13C7F8u;
label_13c7f8:
    // 0x13c7f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13c7fc:
    // 0x13c7fc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13c800:
    // 0x13c800: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13c800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13c804:
    // 0x13c804: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13c808:
    // 0x13c808: 0x60f809  jalr        $v1
label_13c80c:
    if (ctx->pc == 0x13C80Cu) {
        ctx->pc = 0x13C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C808u;
        // 0x13c80c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C810u;
        goto label_fallthrough_0x13c808;
    }
    ctx->pc = 0x13C808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13C810u);
        ctx->pc = 0x13C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C808u;
        // 0x13c80c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C808u, 0x13C810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13c808:
    ctx->pc = 0x13C810u;
}
