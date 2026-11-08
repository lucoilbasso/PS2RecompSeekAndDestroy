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

// Function: entry_00169de4
// Address: 0x169de4 - 0x169e14
void entry_00169de4_0x169de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169de4_0x169de4");
#endif

    ctx->pc = 0x169de4u;

    // 0x169de4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x169de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x169de8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169dec: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x169decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x169df0: 0x28440021  slti        $a0, $v0, 0x21
    ctx->pc = 0x169df0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x169df4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x169df4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x169df8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169DF8u;
    {
        const bool branch_taken_0x169df8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x169DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DF8u;
        // 0x169dfc: 0x24700cd0  addiu       $s0, $v1, 0xCD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169df8) {
            ctx->pc = 0x169E14u;
            return;
        }
    }
    ctx->pc = 0x169E00u;
    // 0x169e00: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x169e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x169e04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x169e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e08: 0x24a57270  addiu       $a1, $a1, 0x7270
    ctx->pc = 0x169e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29296));
    // 0x169e0c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x169E0Cu;
    SET_GPR_U32(ctx, 31, 0x169E14u);
    ctx->pc = 0x169E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E0Cu;
    // 0x169e10: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x169E0Cu, 0x169E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E14u;
}
