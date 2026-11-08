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

// Function: entry_0015c9ec
// Address: 0x15c9ec - 0x15ca10
void entry_0015c9ec_0x15c9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c9ec_0x15c9ec");
#endif

    ctx->pc = 0x15c9ecu;

label_15c9ec:
    // 0x15c9ec: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15c9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15c9f0:
    // 0x15c9f0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c9f4:
    if (ctx->pc == 0x15C9F4u) {
        ctx->pc = 0x15C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9F0u;
        // 0x15c9f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9F8u;
        goto label_15c9f8;
    }
    ctx->pc = 0x15C9F0u;
    {
        const bool branch_taken_0x15c9f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9F0u;
        // 0x15c9f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9f0) {
            ctx->pc = 0x15CA10u;
            return;
        }
    }
    ctx->pc = 0x15C9F8u;
label_15c9f8:
    // 0x15c9f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c9fc:
    // 0x15c9fc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ca00:
    // 0x15ca00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ca00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ca04:
    // 0x15ca04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ca08:
    // 0x15ca08: 0x60f809  jalr        $v1
label_15ca0c:
    if (ctx->pc == 0x15CA0Cu) {
        ctx->pc = 0x15CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA08u;
        // 0x15ca0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA10u;
        goto label_fallthrough_0x15ca08;
    }
    ctx->pc = 0x15CA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CA10u);
        ctx->pc = 0x15CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA08u;
        // 0x15ca0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA08u, 0x15CA10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15ca08:
    ctx->pc = 0x15CA10u;
}
