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

// Function: entry_0012bf18
// Address: 0x12bf18 - 0x12bf4c
void entry_0012bf18_0x12bf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bf18_0x12bf18");
#endif

    switch (ctx->pc) {
        case 0x12bf24u: goto label_12bf24;
        case 0x12bf40u: goto label_12bf40;
        default: break;
    }

    ctx->pc = 0x12bf18u;

label_12bf18:
    // 0x12bf18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12bf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf1c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12BF1Cu;
    SET_GPR_U32(ctx, 31, 0x12BF24u);
    ctx->pc = 0x12BF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF1Cu;
    // 0x12bf20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12BF1Cu, 0x12BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF24u;
label_12bf24:
    // 0x12bf24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12bf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12bf2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12bf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf30: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x12bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x12bf34: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x12bf34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf38: 0xc048d2c  jal         func_1234B0
    ctx->pc = 0x12BF38u;
    SET_GPR_U32(ctx, 31, 0x12BF40u);
    ctx->pc = 0x12BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF38u;
    // 0x12bf3c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1234B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1234B0u, 0x12BF38u, 0x12BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF40u;
label_12bf40:
    // 0x12bf40: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x12BF40u;
    {
        const bool branch_taken_0x12bf40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF40u;
        // 0x12bf44: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf40) {
            ctx->pc = 0x12BF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bf18;
        }
    }
    ctx->pc = 0x12BF48u;
    // 0x12bf48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x12bf4cu;
}
