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

// Function: entry_00143ee8
// Address: 0x143ee8 - 0x143f0c
void entry_00143ee8_0x143ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143ee8_0x143ee8");
#endif

    ctx->pc = 0x143ee8u;

label_143ee8:
    // 0x143ee8: 0x8e460068  lw          $a2, 0x68($s2)
    ctx->pc = 0x143ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_143eec:
    // 0x143eec: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_143ef0:
    if (ctx->pc == 0x143EF0u) {
        ctx->pc = 0x143EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EECu;
        // 0x143ef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EF4u;
        goto label_143ef4;
    }
    ctx->pc = 0x143EECu;
    {
        const bool branch_taken_0x143eec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x143EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EECu;
        // 0x143ef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143eec) {
            ctx->pc = 0x143F0Cu;
            return;
        }
    }
    ctx->pc = 0x143EF4u;
label_143ef4:
    // 0x143ef4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x143ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_143ef8:
    // 0x143ef8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_143efc:
    // 0x143efc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_143f00:
    // 0x143f00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143f04:
    // 0x143f04: 0x60f809  jalr        $v1
label_143f08:
    if (ctx->pc == 0x143F08u) {
        ctx->pc = 0x143F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F04u;
        // 0x143f08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F0Cu;
        goto label_fallthrough_0x143f04;
    }
    ctx->pc = 0x143F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143F0Cu);
        ctx->pc = 0x143F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F04u;
        // 0x143f08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143F04u, 0x143F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x143f04:
    ctx->pc = 0x143F0Cu;
}
