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

// Function: entry_0019a078
// Address: 0x19a078 - 0x19a0ac
void entry_0019a078_0x19a078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a078_0x19a078");
#endif

    switch (ctx->pc) {
        case 0x19a08cu: goto label_19a08c;
        default: break;
    }

    ctx->pc = 0x19a078u;

label_19a078:
    // 0x19a078: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_19a07c:
    if (ctx->pc == 0x19A07Cu) {
        ctx->pc = 0x19A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A078u;
        // 0x19a07c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A080u;
        goto label_19a080;
    }
    ctx->pc = 0x19A078u;
    {
        const bool branch_taken_0x19a078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a078) {
            ctx->pc = 0x19A07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A078u;
            // 0x19a07c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A0B4u;
            return;
        }
    }
    ctx->pc = 0x19A080u;
label_19a080:
    // 0x19a080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a084:
    // 0x19a084: 0xc066832  jal         func_19A0C8
label_19a088:
    if (ctx->pc == 0x19A088u) {
        ctx->pc = 0x19A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A084u;
        // 0x19a088: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A08Cu;
        goto label_19a08c;
    }
    ctx->pc = 0x19A084u;
    SET_GPR_U32(ctx, 31, 0x19A08Cu);
    ctx->pc = 0x19A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A084u;
    // 0x19a088: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A0C8u, 0x19A084u, 0x19A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A08Cu;
label_19a08c:
    // 0x19a08c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x19a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_19a090:
    // 0x19a090: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19a090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a094:
    // 0x19a094: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x19a094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19a098:
    // 0x19a098: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x19a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_19a09c:
    // 0x19a09c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x19a09cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_19a0a0:
    // 0x19a0a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_19a0a4:
    // 0x19a0a4: 0x60f809  jalr        $v1
label_19a0a8:
    if (ctx->pc == 0x19A0A8u) {
        ctx->pc = 0x19A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0A4u;
        // 0x19a0a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A0ACu;
        goto label_fallthrough_0x19a0a4;
    }
    ctx->pc = 0x19A0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19A0ACu);
        ctx->pc = 0x19A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0A4u;
        // 0x19a0a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A0A4u, 0x19A0ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x19a0a4:
    ctx->pc = 0x19A0ACu;
}
