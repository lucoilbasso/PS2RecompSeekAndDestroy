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

// Function: entry_00143ec4
// Address: 0x143ec4 - 0x143ee8
void entry_00143ec4_0x143ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143ec4_0x143ec4");
#endif

    ctx->pc = 0x143ec4u;

label_143ec4:
    // 0x143ec4: 0x8e460064  lw          $a2, 0x64($s2)
    ctx->pc = 0x143ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_143ec8:
    // 0x143ec8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143ecc:
    if (ctx->pc == 0x143ECCu) {
        ctx->pc = 0x143ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EC8u;
        // 0x143ecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143ED0u;
        goto label_143ed0;
    }
    ctx->pc = 0x143EC8u;
    {
        const bool branch_taken_0x143ec8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EC8u;
        // 0x143ecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ec8) {
            ctx->pc = 0x143EE8u;
            return;
        }
    }
    ctx->pc = 0x143ED0u;
label_143ed0:
    // 0x143ed0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143ed4:
    // 0x143ed4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143ed8:
    // 0x143ed8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143edc:
    // 0x143edc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143ee0:
    // 0x143ee0: 0x60f809  jalr        $v1
label_143ee4:
    if (ctx->pc == 0x143EE4u) {
        ctx->pc = 0x143EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EE0u;
        // 0x143ee4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EE8u;
        goto label_fallthrough_0x143ee0;
    }
    ctx->pc = 0x143EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143EE8u);
        ctx->pc = 0x143EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EE0u;
        // 0x143ee4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143EE0u, 0x143EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x143ee0:
    ctx->pc = 0x143EE8u;
}
