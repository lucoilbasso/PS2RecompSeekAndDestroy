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

// Function: entry_0015fa98
// Address: 0x15fa98 - 0x15fb18
void entry_0015fa98_0x15fa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fa98_0x15fa98");
#endif

    switch (ctx->pc) {
        case 0x15fad8u: goto label_15fad8;
        default: break;
    }

    ctx->pc = 0x15fa98u;

    // 0x15fa98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15fa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15fa9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15fa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15faa0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15faa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x15faa4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x15faa8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x15faa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x15faac: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x15faacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x15fab0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x15fab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x15fab4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x15fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x15fab8: 0x8e640f38  lw          $a0, 0xF38($s3)
    ctx->pc = 0x15fab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3896)));
    // 0x15fabc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15fac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15fac4: 0x8c513630  lw          $s1, 0x3630($v0)
    ctx->pc = 0x15fac4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x15fac8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x15fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x15facc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15faccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15fad0: 0xc06135e  jal         func_184D78
    ctx->pc = 0x15FAD0u;
    SET_GPR_U32(ctx, 31, 0x15FAD8u);
    ctx->pc = 0x15FAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FAD0u;
    // 0x15fad4: 0x8c450034  lw          $a1, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D78u, 0x15FAD0u, 0x15FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FAD8u;
label_15fad8:
    // 0x15fad8: 0x8e740fbc  lw          $s4, 0xFBC($s3)
    ctx->pc = 0x15fad8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4028)));
    // 0x15fadc: 0x8e640f20  lw          $a0, 0xF20($s3)
    ctx->pc = 0x15fadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3872)));
    // 0x15fae0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fae4: 0x26820222  addiu       $v0, $s4, 0x222
    ctx->pc = 0x15fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 546));
    // 0x15fae8: 0x30457fff  andi        $a1, $v0, 0x7FFF
    ctx->pc = 0x15fae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x15faec: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15FAECu;
    {
        const bool branch_taken_0x15faec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAECu;
        // 0x15faf0: 0xae650fbc  sw          $a1, 0xFBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4028), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15faec) {
            ctx->pc = 0x15FB50u;
            return;
        }
    }
    ctx->pc = 0x15FAF4u;
    // 0x15faf4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x15faf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15faf8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15FAF8u;
    {
        const bool branch_taken_0x15faf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAF8u;
        // 0x15fafc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15faf8) {
            ctx->pc = 0x15FB18u;
            return;
        }
    }
    ctx->pc = 0x15FB00u;
    // 0x15fb00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fb04: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15FB04u;
    {
        const bool branch_taken_0x15fb04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15fb04) {
            ctx->pc = 0x15FB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FB04u;
            // 0x15fb08: 0x8e640f34  lw          $a0, 0xF34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FB28u;
            return;
        }
    }
    ctx->pc = 0x15FB0Cu;
    // 0x15fb0c: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x15FB0Cu;
    {
        const bool branch_taken_0x15fb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb0c) {
            ctx->pc = 0x15FECCu;
            return;
        }
    }
    ctx->pc = 0x15FB14u;
    // 0x15fb14: 0x0  nop
    ctx->pc = 0x15fb14u;
    // NOP
    ctx->pc = 0x15fb18u;
}
