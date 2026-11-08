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

// Function: entry_00143f30
// Address: 0x143f30 - 0x143f54
void entry_00143f30_0x143f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143f30_0x143f30");
#endif

    ctx->pc = 0x143f30u;

label_143f30:
    // 0x143f30: 0x8e460070  lw          $a2, 0x70($s2)
    ctx->pc = 0x143f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_143f34:
    // 0x143f34: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143f38:
    if (ctx->pc == 0x143F38u) {
        ctx->pc = 0x143F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F34u;
        // 0x143f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F3Cu;
        goto label_143f3c;
    }
    ctx->pc = 0x143F34u;
    {
        const bool branch_taken_0x143f34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F34u;
        // 0x143f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f34) {
            ctx->pc = 0x143F54u;
            return;
        }
    }
    ctx->pc = 0x143F3Cu;
label_143f3c:
    // 0x143f3c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143f40:
    // 0x143f40: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143f44:
    // 0x143f44: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143f48:
    // 0x143f48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143f4c:
    // 0x143f4c: 0x60f809  jalr        $v1
label_143f50:
    if (ctx->pc == 0x143F50u) {
        ctx->pc = 0x143F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F4Cu;
        // 0x143f50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F54u;
        goto label_fallthrough_0x143f4c;
    }
    ctx->pc = 0x143F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143F54u);
        ctx->pc = 0x143F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F4Cu;
        // 0x143f50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143F4Cu, 0x143F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x143f4c:
    ctx->pc = 0x143F54u;
}
