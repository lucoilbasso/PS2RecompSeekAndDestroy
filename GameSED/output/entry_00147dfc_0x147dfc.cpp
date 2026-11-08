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

// Function: entry_00147dfc
// Address: 0x147dfc - 0x147e30
void entry_00147dfc_0x147dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147dfc_0x147dfc");
#endif

    ctx->pc = 0x147dfcu;

label_147dfc:
    // 0x147dfc: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
label_147e00:
    if (ctx->pc == 0x147E00u) {
        ctx->pc = 0x147E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DFCu;
        // 0x147e00: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147E04u;
        goto label_147e04;
    }
    ctx->pc = 0x147DFCu;
    {
        const bool branch_taken_0x147dfc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DFCu;
        // 0x147e00: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147dfc) {
            ctx->pc = 0x147E40u;
            return;
        }
    }
    ctx->pc = 0x147E04u;
label_147e04:
    // 0x147e04: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x147e04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_147e08:
    // 0x147e08: 0xd63021  addu        $a2, $a2, $s6
    ctx->pc = 0x147e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
label_147e0c:
    // 0x147e0c: 0x8cc60208  lw          $a2, 0x208($a2)
    ctx->pc = 0x147e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 520)));
label_147e10:
    // 0x147e10: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_147e14:
    if (ctx->pc == 0x147E14u) {
        ctx->pc = 0x147E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E10u;
        // 0x147e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147E18u;
        goto label_147e18;
    }
    ctx->pc = 0x147E10u;
    {
        const bool branch_taken_0x147e10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E10u;
        // 0x147e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e10) {
            ctx->pc = 0x147E30u;
            return;
        }
    }
    ctx->pc = 0x147E18u;
label_147e18:
    // 0x147e18: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x147e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_147e1c:
    // 0x147e1c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x147e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_147e20:
    // 0x147e20: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x147e20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_147e24:
    // 0x147e24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x147e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_147e28:
    // 0x147e28: 0x60f809  jalr        $v1
label_147e2c:
    if (ctx->pc == 0x147E2Cu) {
        ctx->pc = 0x147E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E28u;
        // 0x147e2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147E30u;
        goto label_fallthrough_0x147e28;
    }
    ctx->pc = 0x147E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x147E30u);
        ctx->pc = 0x147E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E28u;
        // 0x147e2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147E28u, 0x147E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x147e28:
    ctx->pc = 0x147E30u;
}
