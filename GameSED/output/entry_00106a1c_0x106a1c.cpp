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

// Function: entry_00106a1c
// Address: 0x106a1c - 0x106a70
void entry_00106a1c_0x106a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106a1c_0x106a1c");
#endif

    switch (ctx->pc) {
        case 0x106a28u: goto label_106a28;
        case 0x106a6cu: goto label_106a6c;
        default: break;
    }

    ctx->pc = 0x106a1cu;

    // 0x106a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106a20: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x106A20u;
    SET_GPR_U32(ctx, 31, 0x106A28u);
    ctx->pc = 0x106A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A20u;
    // 0x106a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x106A20u, 0x106A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A28u;
label_106a28:
    // 0x106a28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x106a28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a2c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x106a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x106a30: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x106a30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x106a34: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x106a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x106a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a3c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x106a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x106a40: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x106a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x106a44: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x106a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x106a48: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x106a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x106a4c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x106a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x106a50: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x106a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x106a54: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x106a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x106a58: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x106a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x106a5c: 0x10c80004  beq         $a2, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106A5Cu;
    {
        const bool branch_taken_0x106a5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        ctx->pc = 0x106A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A5Cu;
        // 0x106a60: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a5c) {
            ctx->pc = 0x106A70u;
            return;
        }
    }
    ctx->pc = 0x106A64u;
    // 0x106a64: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x106A64u;
    SET_GPR_U32(ctx, 31, 0x106A6Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x106A64u, 0x106A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A6Cu;
label_106a6c:
    // 0x106a6c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x106a6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x106a70u;
}
