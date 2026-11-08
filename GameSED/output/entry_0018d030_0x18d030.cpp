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

// Function: entry_0018d030
// Address: 0x18d030 - 0x18d060
void entry_0018d030_0x18d030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d030_0x18d030");
#endif

    switch (ctx->pc) {
        case 0x18d054u: goto label_18d054;
        default: break;
    }

    ctx->pc = 0x18d030u;

label_18d030:
    // 0x18d030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d034:
    // 0x18d034: 0x54620027  bnel        $v1, $v0, . + 4 + (0x27 << 2)
label_18d038:
    if (ctx->pc == 0x18D038u) {
        ctx->pc = 0x18D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D034u;
        // 0x18d038: 0x96030244  lhu         $v1, 0x244($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D03Cu;
        goto label_18d03c;
    }
    ctx->pc = 0x18D034u;
    {
        const bool branch_taken_0x18d034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d034) {
            ctx->pc = 0x18D038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D034u;
            // 0x18d038: 0x96030244  lhu         $v1, 0x244($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D0D4u;
            return;
        }
    }
    ctx->pc = 0x18D03Cu;
label_18d03c:
    // 0x18d03c: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x18d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_18d040:
    // 0x18d040: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18d040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_18d044:
    // 0x18d044: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_18d048:
    if (ctx->pc == 0x18D048u) {
        ctx->pc = 0x18D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D044u;
        // 0x18d048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D04Cu;
        goto label_18d04c;
    }
    ctx->pc = 0x18D044u;
    {
        const bool branch_taken_0x18d044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D044u;
        // 0x18d048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d044) {
            ctx->pc = 0x18D060u;
            return;
        }
    }
    ctx->pc = 0x18D04Cu;
label_18d04c:
    // 0x18d04c: 0x40f809  jalr        $v0
label_18d050:
    if (ctx->pc == 0x18D050u) {
        ctx->pc = 0x18D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D04Cu;
        // 0x18d050: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D054u;
        goto label_18d054;
    }
    ctx->pc = 0x18D04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D054u);
        ctx->pc = 0x18D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D04Cu;
        // 0x18d050: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D04Cu, 0x18D054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D054u;
label_18d054:
    // 0x18d054: 0x10000003  b           . + 4 + (0x3 << 2)
label_18d058:
    if (ctx->pc == 0x18D058u) {
        ctx->pc = 0x18D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D054u;
        // 0x18d058: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D05Cu;
        goto label_18d05c;
    }
    ctx->pc = 0x18D054u;
    {
        const bool branch_taken_0x18d054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D054u;
        // 0x18d058: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d054) {
            ctx->pc = 0x18D064u;
            return;
        }
    }
    ctx->pc = 0x18D05Cu;
label_18d05c:
    // 0x18d05c: 0x0  nop
    ctx->pc = 0x18d05cu;
    // NOP
    ctx->pc = 0x18d060u;
}
