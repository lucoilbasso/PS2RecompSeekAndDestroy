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

// Function: entry_0014b2f8
// Address: 0x14b2f8 - 0x14b328
void entry_0014b2f8_0x14b2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b2f8_0x14b2f8");
#endif

    switch (ctx->pc) {
        case 0x14b31cu: goto label_14b31c;
        default: break;
    }

    ctx->pc = 0x14b2f8u;

label_14b2f8:
    // 0x14b2f8: 0x8e4601c4  lw          $a2, 0x1C4($s2)
    ctx->pc = 0x14b2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_14b2fc:
    // 0x14b2fc: 0x10c0007a  beqz        $a2, . + 4 + (0x7A << 2)
label_14b300:
    if (ctx->pc == 0x14B300u) {
        ctx->pc = 0x14B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2FCu;
        // 0x14b300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B304u;
        goto label_14b304;
    }
    ctx->pc = 0x14B2FCu;
    {
        const bool branch_taken_0x14b2fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2FCu;
        // 0x14b300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2fc) {
            ctx->pc = 0x14B4E8u;
            return;
        }
    }
    ctx->pc = 0x14B304u;
label_14b304:
    // 0x14b304: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14b304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14b308:
    // 0x14b308: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14b308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14b30c:
    // 0x14b30c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14b30cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14b310:
    // 0x14b310: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14b310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14b314:
    // 0x14b314: 0x60f809  jalr        $v1
label_14b318:
    if (ctx->pc == 0x14B318u) {
        ctx->pc = 0x14B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B314u;
        // 0x14b318: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B31Cu;
        goto label_14b31c;
    }
    ctx->pc = 0x14B314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14B31Cu);
        ctx->pc = 0x14B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B314u;
        // 0x14b318: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B314u, 0x14B31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14B31Cu;
label_14b31c:
    // 0x14b31c: 0x10000072  b           . + 4 + (0x72 << 2)
label_14b320:
    if (ctx->pc == 0x14B320u) {
        ctx->pc = 0x14B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B31Cu;
        // 0x14b320: 0xae4001c4  sw          $zero, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B324u;
        goto label_14b324;
    }
    ctx->pc = 0x14B31Cu;
    {
        const bool branch_taken_0x14b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B31Cu;
        // 0x14b320: 0xae4001c4  sw          $zero, 0x1C4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b31c) {
            ctx->pc = 0x14B4E8u;
            return;
        }
    }
    ctx->pc = 0x14B324u;
label_14b324:
    // 0x14b324: 0x0  nop
    ctx->pc = 0x14b324u;
    // NOP
    ctx->pc = 0x14b328u;
}
