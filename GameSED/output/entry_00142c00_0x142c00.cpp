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

// Function: entry_00142c00
// Address: 0x142c00 - 0x142c24
void entry_00142c00_0x142c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142c00_0x142c00");
#endif

    ctx->pc = 0x142c00u;

label_142c00:
    // 0x142c00: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x142c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_142c04:
    // 0x142c04: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_142c08:
    if (ctx->pc == 0x142C08u) {
        ctx->pc = 0x142C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C04u;
        // 0x142c08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C0Cu;
        goto label_142c0c;
    }
    ctx->pc = 0x142C04u;
    {
        const bool branch_taken_0x142c04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C04u;
        // 0x142c08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c04) {
            ctx->pc = 0x142C24u;
            return;
        }
    }
    ctx->pc = 0x142C0Cu;
label_142c0c:
    // 0x142c0c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x142c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_142c10:
    // 0x142c10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x142c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_142c14:
    // 0x142c14: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x142c14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_142c18:
    // 0x142c18: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x142c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_142c1c:
    // 0x142c1c: 0x60f809  jalr        $v1
label_142c20:
    if (ctx->pc == 0x142C20u) {
        ctx->pc = 0x142C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C1Cu;
        // 0x142c20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C24u;
        goto label_fallthrough_0x142c1c;
    }
    ctx->pc = 0x142C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142C24u);
        ctx->pc = 0x142C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C1Cu;
        // 0x142c20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142C1Cu, 0x142C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x142c1c:
    ctx->pc = 0x142C24u;
}
