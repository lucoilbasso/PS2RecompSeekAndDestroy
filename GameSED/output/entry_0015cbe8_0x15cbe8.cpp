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

// Function: entry_0015cbe8
// Address: 0x15cbe8 - 0x15cc0c
void entry_0015cbe8_0x15cbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cbe8_0x15cbe8");
#endif

    ctx->pc = 0x15cbe8u;

label_15cbe8:
    // 0x15cbe8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15cbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cbec:
    // 0x15cbec: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cbf0:
    if (ctx->pc == 0x15CBF0u) {
        ctx->pc = 0x15CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBECu;
        // 0x15cbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBF4u;
        goto label_15cbf4;
    }
    ctx->pc = 0x15CBECu;
    {
        const bool branch_taken_0x15cbec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBECu;
        // 0x15cbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbec) {
            ctx->pc = 0x15CC0Cu;
            return;
        }
    }
    ctx->pc = 0x15CBF4u;
label_15cbf4:
    // 0x15cbf4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cbf8:
    // 0x15cbf8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cbfc:
    // 0x15cbfc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cbfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cc00:
    // 0x15cc00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cc04:
    // 0x15cc04: 0x60f809  jalr        $v1
label_15cc08:
    if (ctx->pc == 0x15CC08u) {
        ctx->pc = 0x15CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC04u;
        // 0x15cc08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC0Cu;
        goto label_fallthrough_0x15cc04;
    }
    ctx->pc = 0x15CC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CC0Cu);
        ctx->pc = 0x15CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC04u;
        // 0x15cc08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC04u, 0x15CC0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15cc04:
    ctx->pc = 0x15CC0Cu;
}
