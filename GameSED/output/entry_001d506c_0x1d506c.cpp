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

// Function: entry_001d506c
// Address: 0x1d506c - 0x1d50a8
void entry_001d506c_0x1d506c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d506c_0x1d506c");
#endif

    switch (ctx->pc) {
        case 0x1d5078u: goto label_1d5078;
        default: break;
    }

    ctx->pc = 0x1d506cu;

    // 0x1d506c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d506cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d5070: 0xc073e1a  jal         func_1CF868
    ctx->pc = 0x1D5070u;
    SET_GPR_U32(ctx, 31, 0x1D5078u);
    ctx->pc = 0x1D5074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5070u;
    // 0x1d5074: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF868u, 0x1D5070u, 0x1D5078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5078u;
label_1d5078:
    // 0x1d5078: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d507c: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D507Cu;
    {
        const bool branch_taken_0x1d507c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D507Cu;
        // 0x1d5080: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d507c) {
            ctx->pc = 0x1D50A8u;
            return;
        }
    }
    ctx->pc = 0x1D5084u;
    // 0x1d5084: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x1d5084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x1d5088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d5088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d508c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x1d508cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1d5090: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d5090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d5094: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1d5094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1d5098: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d5098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d509c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D509Cu;
    {
        const bool branch_taken_0x1d509c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D50A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D509Cu;
        // 0x1d50a0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d509c) {
            ctx->pc = 0x1D50ECu;
            return;
        }
    }
    ctx->pc = 0x1D50A4u;
    // 0x1d50a4: 0x0  nop
    ctx->pc = 0x1d50a4u;
    // NOP
    ctx->pc = 0x1d50a8u;
}
