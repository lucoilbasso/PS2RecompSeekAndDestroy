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

// Function: TargetAllClear__8WcDaemon
// Address: 0x19a130 - 0x19a19c
void TargetAllClear__8WcDaemon_0x19a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TargetAllClear__8WcDaemon_0x19a130");
#endif

    switch (ctx->pc) {
        case 0x19a154u: goto label_19a154;
        case 0x19a168u: goto label_19a168;
        case 0x19a18cu: goto label_19a18c;
        default: break;
    }

    ctx->pc = 0x19a130u;

    // 0x19a130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a13c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a140: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x19a140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x19a144: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A144u;
    {
        const bool branch_taken_0x19a144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A144u;
        // 0x19a148: 0x24840078  addiu       $a0, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a144) {
            ctx->pc = 0x19A158u;
            goto label_19a158;
        }
    }
    ctx->pc = 0x19A14Cu;
    // 0x19a14c: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x19A14Cu;
    SET_GPR_U32(ctx, 31, 0x19A154u);
    ctx->pc = 0x19A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A14Cu;
    // 0x19a150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x19A14Cu, 0x19A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A154u;
label_19a154:
    // 0x19a154: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x19a154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_19a158:
    // 0x19a158: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x19a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x19a15c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19A15Cu;
    {
        const bool branch_taken_0x19a15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a15c) {
            ctx->pc = 0x19A184u;
            goto label_19a184;
        }
    }
    ctx->pc = 0x19A164u;
    // 0x19a164: 0x0  nop
    ctx->pc = 0x19a164u;
    // NOP
label_19a168:
    // 0x19a168: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19a16c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a170: 0x0  nop
    ctx->pc = 0x19a170u;
    // NOP
    // 0x19a174: 0x0  nop
    ctx->pc = 0x19a174u;
    // NOP
    // 0x19a178: 0x0  nop
    ctx->pc = 0x19a178u;
    // NOP
    // 0x19a17c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A17Cu;
    {
        const bool branch_taken_0x19a17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A17Cu;
        // 0x19a180: 0xac400074  sw          $zero, 0x74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a17c) {
            ctx->pc = 0x19A168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a168;
        }
    }
    ctx->pc = 0x19A184u;
label_19a184:
    // 0x19a184: 0xc0684a0  jal         func_1A1280
    ctx->pc = 0x19A184u;
    SET_GPR_U32(ctx, 31, 0x19A18Cu);
    ctx->pc = 0x19A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A184u;
    // 0x19a188: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1280u, 0x19A184u, 0x19A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A18Cu;
label_19a18c:
    // 0x19a18c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a190: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a194: 0x3e00008  jr          $ra
    ctx->pc = 0x19A194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A194u;
        // 0x19a198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A19Cu;
}
