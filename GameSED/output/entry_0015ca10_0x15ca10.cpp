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

// Function: entry_0015ca10
// Address: 0x15ca10 - 0x15ca40
void entry_0015ca10_0x15ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ca10_0x15ca10");
#endif

    switch (ctx->pc) {
        case 0x15ca34u: goto label_15ca34;
        default: break;
    }

    ctx->pc = 0x15ca10u;

label_15ca10:
    // 0x15ca10: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ca10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15ca14:
    // 0x15ca14: 0x10c0005a  beqz        $a2, . + 4 + (0x5A << 2)
label_15ca18:
    if (ctx->pc == 0x15CA18u) {
        ctx->pc = 0x15CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA14u;
        // 0x15ca18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA1Cu;
        goto label_15ca1c;
    }
    ctx->pc = 0x15CA14u;
    {
        const bool branch_taken_0x15ca14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA14u;
        // 0x15ca18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca14) {
            ctx->pc = 0x15CB80u;
            return;
        }
    }
    ctx->pc = 0x15CA1Cu;
label_15ca1c:
    // 0x15ca1c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ca20:
    // 0x15ca20: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ca24:
    // 0x15ca24: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ca24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ca28:
    // 0x15ca28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ca2c:
    // 0x15ca2c: 0x60f809  jalr        $v1
label_15ca30:
    if (ctx->pc == 0x15CA30u) {
        ctx->pc = 0x15CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA2Cu;
        // 0x15ca30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA34u;
        goto label_15ca34;
    }
    ctx->pc = 0x15CA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CA34u);
        ctx->pc = 0x15CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA2Cu;
        // 0x15ca30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA2Cu, 0x15CA34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CA34u;
label_15ca34:
    // 0x15ca34: 0x10000053  b           . + 4 + (0x53 << 2)
label_15ca38:
    if (ctx->pc == 0x15CA38u) {
        ctx->pc = 0x15CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA34u;
        // 0x15ca38: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA3Cu;
        goto label_15ca3c;
    }
    ctx->pc = 0x15CA34u;
    {
        const bool branch_taken_0x15ca34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA34u;
        // 0x15ca38: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca34) {
            ctx->pc = 0x15CB84u;
            return;
        }
    }
    ctx->pc = 0x15CA3Cu;
label_15ca3c:
    // 0x15ca3c: 0x0  nop
    ctx->pc = 0x15ca3cu;
    // NOP
    ctx->pc = 0x15ca40u;
}
