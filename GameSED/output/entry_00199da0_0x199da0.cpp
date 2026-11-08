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

// Function: entry_00199da0
// Address: 0x199da0 - 0x199de0
void entry_00199da0_0x199da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199da0_0x199da0");
#endif

    ctx->pc = 0x199da0u;

label_199da0:
    // 0x199da0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x199da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_199da4:
    // 0x199da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_199da8:
    // 0x199da8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x199da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_199dac:
    // 0x199dac: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_199db0:
    if (ctx->pc == 0x199DB0u) {
        ctx->pc = 0x199DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DACu;
        // 0x199db0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DB4u;
        goto label_199db4;
    }
    ctx->pc = 0x199DACu;
    {
        const bool branch_taken_0x199dac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DACu;
        // 0x199db0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dac) {
            ctx->pc = 0x199DE0u;
            return;
        }
    }
    ctx->pc = 0x199DB4u;
label_199db4:
    // 0x199db4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x199db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_199db8:
    // 0x199db8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x199db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_199dbc:
    // 0x199dbc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_199dc0:
    if (ctx->pc == 0x199DC0u) {
        ctx->pc = 0x199DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DBCu;
        // 0x199dc0: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DC4u;
        goto label_199dc4;
    }
    ctx->pc = 0x199DBCu;
    {
        const bool branch_taken_0x199dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199dbc) {
            ctx->pc = 0x199DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199DBCu;
            // 0x199dc0: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199DE4u;
            return;
        }
    }
    ctx->pc = 0x199DC4u;
label_199dc4:
    // 0x199dc4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x199dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_199dc8:
    // 0x199dc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199dcc:
    // 0x199dcc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x199dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_199dd0:
    // 0x199dd0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x199dd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_199dd4:
    // 0x199dd4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x199dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_199dd8:
    // 0x199dd8: 0x60f809  jalr        $v1
label_199ddc:
    if (ctx->pc == 0x199DDCu) {
        ctx->pc = 0x199DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DD8u;
        // 0x199ddc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DE0u;
        goto label_fallthrough_0x199dd8;
    }
    ctx->pc = 0x199DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x199DE0u);
        ctx->pc = 0x199DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DD8u;
        // 0x199ddc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199DD8u, 0x199DE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x199dd8:
    ctx->pc = 0x199DE0u;
}
