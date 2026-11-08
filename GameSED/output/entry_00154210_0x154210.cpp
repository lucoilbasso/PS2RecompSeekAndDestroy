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

// Function: entry_00154210
// Address: 0x154210 - 0x154250
void entry_00154210_0x154210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154210_0x154210");
#endif

    switch (ctx->pc) {
        case 0x154230u: goto label_154230;
        default: break;
    }

    ctx->pc = 0x154210u;

label_154210:
    // 0x154210: 0x8e260690  lw          $a2, 0x690($s1)
    ctx->pc = 0x154210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_154214:
    // 0x154214: 0x3a050001  xori        $a1, $s0, 0x1
    ctx->pc = 0x154214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_154218:
    // 0x154218: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x154218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15421c:
    // 0x15421c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_154220:
    // 0x154220: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x154220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_154224:
    // 0x154224: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x154224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_154228:
    // 0x154228: 0x60f809  jalr        $v1
label_15422c:
    if (ctx->pc == 0x15422Cu) {
        ctx->pc = 0x15422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154228u;
        // 0x15422c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154230u;
        goto label_154230;
    }
    ctx->pc = 0x154228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154230u);
        ctx->pc = 0x15422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154228u;
        // 0x15422c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154228u, 0x154230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154230u;
label_154230:
    // 0x154230: 0x8e2601c8  lw          $a2, 0x1C8($s1)
    ctx->pc = 0x154230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_154234:
    // 0x154234: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154238:
    // 0x154238: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x154238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15423c:
    // 0x15423c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15423cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_154240:
    // 0x154240: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x154240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_154244:
    // 0x154244: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x154244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_154248:
    // 0x154248: 0x60f809  jalr        $v1
label_15424c:
    if (ctx->pc == 0x15424Cu) {
        ctx->pc = 0x15424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154248u;
        // 0x15424c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154250u;
        goto label_fallthrough_0x154248;
    }
    ctx->pc = 0x154248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154250u);
        ctx->pc = 0x15424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154248u;
        // 0x15424c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154248u, 0x154250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x154248:
    ctx->pc = 0x154250u;
}
