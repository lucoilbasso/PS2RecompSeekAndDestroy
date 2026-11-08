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

// Function: entry_00101e30
// Address: 0x101e30 - 0x101e68
void entry_00101e30_0x101e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101e30_0x101e30");
#endif

    ctx->pc = 0x101e30u;

label_101e30:
    // 0x101e30: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x101e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_101e34:
    // 0x101e34: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x101e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_101e38:
    // 0x101e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101e3c:
    // 0x101e3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101e40:
    // 0x101e40: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x101e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_101e44:
    // 0x101e44: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_101e48:
    if (ctx->pc == 0x101E48u) {
        ctx->pc = 0x101E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E44u;
        // 0x101e48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E4Cu;
        goto label_101e4c;
    }
    ctx->pc = 0x101E44u;
    {
        const bool branch_taken_0x101e44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E44u;
        // 0x101e48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e44) {
            ctx->pc = 0x101E68u;
            return;
        }
    }
    ctx->pc = 0x101E4Cu;
label_101e4c:
    // 0x101e4c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x101e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_101e50:
    // 0x101e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101e54:
    // 0x101e54: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x101e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_101e58:
    // 0x101e58: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x101e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_101e5c:
    // 0x101e5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x101e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_101e60:
    // 0x101e60: 0x60f809  jalr        $v1
label_101e64:
    if (ctx->pc == 0x101E64u) {
        ctx->pc = 0x101E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E60u;
        // 0x101e64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E68u;
        goto label_fallthrough_0x101e60;
    }
    ctx->pc = 0x101E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x101E68u);
        ctx->pc = 0x101E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E60u;
        // 0x101e64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101E60u, 0x101E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x101e60:
    ctx->pc = 0x101E68u;
}
