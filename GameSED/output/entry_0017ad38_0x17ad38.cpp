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

// Function: entry_0017ad38
// Address: 0x17ad38 - 0x17ad74
void entry_0017ad38_0x17ad38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ad38_0x17ad38");
#endif

    switch (ctx->pc) {
        case 0x17ad44u: goto label_17ad44;
        case 0x17ad58u: goto label_17ad58;
        case 0x17ad70u: goto label_17ad70;
        default: break;
    }

    ctx->pc = 0x17ad38u;

    // 0x17ad38: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x17ad38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17ad3c: 0xc06bd34  jal         func_1AF4D0
    ctx->pc = 0x17AD3Cu;
    SET_GPR_U32(ctx, 31, 0x17AD44u);
    ctx->pc = 0x17AD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD3Cu;
    // 0x17ad40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4D0u, 0x17AD3Cu, 0x17AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD44u;
label_17ad44:
    // 0x17ad44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ad48: 0x1052000c  beq         $v0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x17AD48u;
    {
        const bool branch_taken_0x17ad48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x17AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD48u;
        // 0x17ad4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad48) {
            ctx->pc = 0x17AD7Cu;
            return;
        }
    }
    ctx->pc = 0x17AD50u;
    // 0x17ad50: 0xc05ea22  jal         func_17A888
    ctx->pc = 0x17AD50u;
    SET_GPR_U32(ctx, 31, 0x17AD58u);
    ctx->pc = 0x17A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A888u, 0x17AD50u, 0x17AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD58u;
label_17ad58:
    // 0x17ad58: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x17ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x17ad5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17AD5Cu;
    {
        const bool branch_taken_0x17ad5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD5Cu;
        // 0x17ad60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad5c) {
            ctx->pc = 0x17AD74u;
            return;
        }
    }
    ctx->pc = 0x17AD64u;
    // 0x17ad64: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17ad68: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17AD68u;
    SET_GPR_U32(ctx, 31, 0x17AD70u);
    ctx->pc = 0x17AD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD68u;
    // 0x17ad6c: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17AD68u, 0x17AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD70u;
label_17ad70:
    // 0x17ad70: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17ad70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    ctx->pc = 0x17ad74u;
}
