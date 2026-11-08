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

// Function: entry_00174da8
// Address: 0x174da8 - 0x174dd8
void entry_00174da8_0x174da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174da8_0x174da8");
#endif

    switch (ctx->pc) {
        case 0x174db4u: goto label_174db4;
        case 0x174dd0u: goto label_174dd0;
        default: break;
    }

    ctx->pc = 0x174da8u;

    // 0x174da8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x174da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dac: 0xc06d5b2  jal         func_1B56C8
    ctx->pc = 0x174DACu;
    SET_GPR_U32(ctx, 31, 0x174DB4u);
    ctx->pc = 0x174DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DACu;
    // 0x174db0: 0x34848010  ori         $a0, $a0, 0x8010 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32784);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B56C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B56C8u, 0x174DACu, 0x174DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DB4u;
label_174db4:
    // 0x174db4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x174db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x174db8: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x174db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x174dbc: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x174dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x174dc0: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x174dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x174dc4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x174dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x174dc8: 0xc06ed3e  jal         func_1BB4F8
    ctx->pc = 0x174DC8u;
    SET_GPR_U32(ctx, 31, 0x174DD0u);
    ctx->pc = 0x174DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DC8u;
    // 0x174dcc: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB4F8u, 0x174DC8u, 0x174DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DD0u;
label_174dd0:
    // 0x174dd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x174DD0u;
    {
        const bool branch_taken_0x174dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DD0u;
        // 0x174dd4: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174dd0) {
            ctx->pc = 0x174DE8u;
            return;
        }
    }
    ctx->pc = 0x174DD8u;
}
