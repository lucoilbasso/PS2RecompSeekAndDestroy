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

// Function: entry_00102e38
// Address: 0x102e38 - 0x102e5c
void entry_00102e38_0x102e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102e38_0x102e38");
#endif

    ctx->pc = 0x102e38u;

label_102e38:
    // 0x102e38: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x102e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_102e3c:
    // 0x102e3c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_102e40:
    if (ctx->pc == 0x102E40u) {
        ctx->pc = 0x102E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E3Cu;
        // 0x102e40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E44u;
        goto label_102e44;
    }
    ctx->pc = 0x102E3Cu;
    {
        const bool branch_taken_0x102e3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E3Cu;
        // 0x102e40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e3c) {
            ctx->pc = 0x102E5Cu;
            return;
        }
    }
    ctx->pc = 0x102E44u;
label_102e44:
    // 0x102e44: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x102e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102e48:
    // 0x102e48: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102e4c:
    // 0x102e4c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x102e4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102e50:
    // 0x102e50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x102e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_102e54:
    // 0x102e54: 0x60f809  jalr        $v1
label_102e58:
    if (ctx->pc == 0x102E58u) {
        ctx->pc = 0x102E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E54u;
        // 0x102e58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E5Cu;
        goto label_fallthrough_0x102e54;
    }
    ctx->pc = 0x102E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102E5Cu);
        ctx->pc = 0x102E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E54u;
        // 0x102e58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102E54u, 0x102E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x102e54:
    ctx->pc = 0x102E5Cu;
}
