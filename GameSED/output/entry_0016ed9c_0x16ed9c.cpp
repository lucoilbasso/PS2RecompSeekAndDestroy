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

// Function: entry_0016ed9c
// Address: 0x16ed9c - 0x16edcc
void entry_0016ed9c_0x16ed9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ed9c_0x16ed9c");
#endif

    switch (ctx->pc) {
        case 0x16eda8u: goto label_16eda8;
        default: break;
    }

    ctx->pc = 0x16ed9cu;

    // 0x16ed9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ed9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16eda0: 0xc06164c  jal         func_185930
    ctx->pc = 0x16EDA0u;
    SET_GPR_U32(ctx, 31, 0x16EDA8u);
    ctx->pc = 0x16EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EDA0u;
    // 0x16eda4: 0x2451ed50  addiu       $s1, $v0, -0x12B0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16EDA0u, 0x16EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EDA8u;
label_16eda8:
    // 0x16eda8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16eda8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16edac: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x16edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16edb0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16EDB0u;
    {
        const bool branch_taken_0x16edb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDB0u;
        // 0x16edb4: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16edb0) {
            ctx->pc = 0x16EDDCu;
            return;
        }
    }
    ctx->pc = 0x16EDB8u;
    // 0x16edb8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x16edb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16edbc: 0xac70001c  sw          $s0, 0x1C($v1)
    ctx->pc = 0x16edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 16));
    // 0x16edc0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x16edc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16edc4: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x16edc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x16edc8: 0xac710018  sw          $s1, 0x18($v1)
    ctx->pc = 0x16edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 17));
    ctx->pc = 0x16edccu;
}
