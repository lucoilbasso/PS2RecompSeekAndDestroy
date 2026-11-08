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

// Function: entry_001d9f40
// Address: 0x1d9f40 - 0x1d9f8c
void entry_001d9f40_0x1d9f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9f40_0x1d9f40");
#endif

    ctx->pc = 0x1d9f40u;

label_1d9f40:
    // 0x1d9f40: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1d9f44:
    // 0x1d9f44: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x1d9f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1d9f48:
    // 0x1d9f48: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d9f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1d9f4c:
    // 0x1d9f4c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d9f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1d9f50:
    // 0x1d9f50: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1d9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1d9f54:
    // 0x1d9f54: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1d9f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9f58:
    // 0x1d9f58: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d9f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1d9f5c:
    // 0x1d9f5c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d9f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1d9f60:
    // 0x1d9f60: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1d9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1d9f64:
    // 0x1d9f64: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1d9f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1d9f68:
    // 0x1d9f68: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1d9f6c:
    if (ctx->pc == 0x1D9F6Cu) {
        ctx->pc = 0x1D9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F68u;
        // 0x1d9f6c: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F70u;
        goto label_1d9f70;
    }
    ctx->pc = 0x1D9F68u;
    {
        const bool branch_taken_0x1d9f68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F68u;
        // 0x1d9f6c: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f68) {
            ctx->pc = 0x1D9F8Cu;
            return;
        }
    }
    ctx->pc = 0x1D9F70u;
label_1d9f70:
    // 0x1d9f70: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d9f74:
    // 0x1d9f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9f78:
    // 0x1d9f78: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d9f7c:
    // 0x1d9f7c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d9f7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9f80:
    // 0x1d9f80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d9f84:
    // 0x1d9f84: 0x60f809  jalr        $v1
label_1d9f88:
    if (ctx->pc == 0x1D9F88u) {
        ctx->pc = 0x1D9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F84u;
        // 0x1d9f88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F8Cu;
        goto label_fallthrough_0x1d9f84;
    }
    ctx->pc = 0x1D9F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D9F8Cu);
        ctx->pc = 0x1D9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F84u;
        // 0x1d9f88: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F84u, 0x1D9F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d9f84:
    ctx->pc = 0x1D9F8Cu;
}
