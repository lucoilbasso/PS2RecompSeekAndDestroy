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

// Function: entry_00187d0c
// Address: 0x187d0c - 0x187d68
void entry_00187d0c_0x187d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187d0c_0x187d0c");
#endif

    switch (ctx->pc) {
        case 0x187d38u: goto label_187d38;
        default: break;
    }

    ctx->pc = 0x187d0cu;

label_187d0c:
    // 0x187d0c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x187d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_187d10:
    // 0x187d10: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x187d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_187d14:
    // 0x187d14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x187d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_187d18:
    // 0x187d18: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
label_187d1c:
    if (ctx->pc == 0x187D1Cu) {
        ctx->pc = 0x187D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D18u;
        // 0x187d1c: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D20u;
        goto label_187d20;
    }
    ctx->pc = 0x187D18u;
    {
        const bool branch_taken_0x187d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D18u;
        // 0x187d1c: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d18) {
            ctx->pc = 0x187F5Cu;
            return;
        }
    }
    ctx->pc = 0x187D20u;
label_187d20:
    // 0x187d20: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x187d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_187d24:
    // 0x187d24: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x187d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_187d28:
    // 0x187d28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x187d28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_187d2c:
    // 0x187d2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x187d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_187d30:
    // 0x187d30: 0x60f809  jalr        $v1
label_187d34:
    if (ctx->pc == 0x187D34u) {
        ctx->pc = 0x187D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D30u;
        // 0x187d34: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D38u;
        goto label_187d38;
    }
    ctx->pc = 0x187D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187D38u);
        ctx->pc = 0x187D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D30u;
        // 0x187d34: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187D30u, 0x187D38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187D38u;
label_187d38:
    // 0x187d38: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x187d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_187d3c:
    // 0x187d3c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_187d40:
    if (ctx->pc == 0x187D40u) {
        ctx->pc = 0x187D44u;
        goto label_187d44;
    }
    ctx->pc = 0x187D3Cu;
    {
        const bool branch_taken_0x187d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d3c) {
            ctx->pc = 0x187E9Cu;
            return;
        }
    }
    ctx->pc = 0x187D44u;
label_187d44:
    // 0x187d44: 0x18400055  blez        $v0, . + 4 + (0x55 << 2)
label_187d48:
    if (ctx->pc == 0x187D48u) {
        ctx->pc = 0x187D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D44u;
        // 0x187d48: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187D4Cu;
        goto label_187d4c;
    }
    ctx->pc = 0x187D44u;
    {
        const bool branch_taken_0x187d44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x187D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D44u;
        // 0x187d48: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d44) {
            ctx->pc = 0x187E9Cu;
            return;
        }
    }
    ctx->pc = 0x187D4Cu;
label_187d4c:
    // 0x187d4c: 0x3c14efff  lui         $s4, 0xEFFF
    ctx->pc = 0x187d4cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)61439 << 16));
label_187d50:
    // 0x187d50: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x187d50u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
label_187d54:
    // 0x187d54: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x187d54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187d58:
    // 0x187d58: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x187d58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_187d5c:
    // 0x187d5c: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x187d5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_187d60:
    // 0x187d60: 0x8e4201bc  lw          $v0, 0x1BC($s2)
    ctx->pc = 0x187d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_187d64:
    // 0x187d64: 0x0  nop
    ctx->pc = 0x187d64u;
    // NOP
    ctx->pc = 0x187d68u;
}
