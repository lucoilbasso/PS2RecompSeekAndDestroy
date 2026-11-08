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

// Function: entry_0013c9c0
// Address: 0x13c9c0 - 0x13c9f8
void entry_0013c9c0_0x13c9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c9c0_0x13c9c0");
#endif

    ctx->pc = 0x13c9c0u;

label_13c9c0:
    // 0x13c9c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13c9c4:
    // 0x13c9c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13c9c8:
    // 0x13c9c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13c9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13c9cc:
    // 0x13c9cc: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_13c9d0:
    if (ctx->pc == 0x13C9D0u) {
        ctx->pc = 0x13C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9CCu;
        // 0x13c9d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9D4u;
        goto label_13c9d4;
    }
    ctx->pc = 0x13C9CCu;
    {
        const bool branch_taken_0x13c9cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9CCu;
        // 0x13c9d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9cc) {
            ctx->pc = 0x13C9F8u;
            return;
        }
    }
    ctx->pc = 0x13C9D4u;
label_13c9d4:
    // 0x13c9d4: 0x8cc20248  lw          $v0, 0x248($a2)
    ctx->pc = 0x13c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 584)));
label_13c9d8:
    // 0x13c9d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13c9dc:
    if (ctx->pc == 0x13C9DCu) {
        ctx->pc = 0x13C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9D8u;
        // 0x13c9dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9E0u;
        goto label_13c9e0;
    }
    ctx->pc = 0x13C9D8u;
    {
        const bool branch_taken_0x13c9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9D8u;
        // 0x13c9dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9d8) {
            ctx->pc = 0x13C9F8u;
            return;
        }
    }
    ctx->pc = 0x13C9E0u;
label_13c9e0:
    // 0x13c9e0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13c9e4:
    // 0x13c9e4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13c9e8:
    // 0x13c9e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13c9e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13c9ec:
    // 0x13c9ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13c9f0:
    // 0x13c9f0: 0x60f809  jalr        $v1
label_13c9f4:
    if (ctx->pc == 0x13C9F4u) {
        ctx->pc = 0x13C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9F0u;
        // 0x13c9f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9F8u;
        goto label_fallthrough_0x13c9f0;
    }
    ctx->pc = 0x13C9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13C9F8u);
        ctx->pc = 0x13C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9F0u;
        // 0x13c9f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C9F0u, 0x13C9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13c9f0:
    ctx->pc = 0x13C9F8u;
}
