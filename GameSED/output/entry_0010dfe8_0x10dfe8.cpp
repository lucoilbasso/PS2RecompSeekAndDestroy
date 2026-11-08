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

// Function: entry_0010dfe8
// Address: 0x10dfe8 - 0x10e018
void entry_0010dfe8_0x10dfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dfe8_0x10dfe8");
#endif

    switch (ctx->pc) {
        case 0x10e004u: goto label_10e004;
        default: break;
    }

    ctx->pc = 0x10dfe8u;

    // 0x10dfe8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10dfec: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10DFECu;
    {
        const bool branch_taken_0x10dfec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10dfec) {
            ctx->pc = 0x10DFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DFECu;
            // 0x10dff0: 0x38820001  xori        $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E018u;
            return;
        }
    }
    ctx->pc = 0x10DFF4u;
    // 0x10dff4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10dff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10dff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dffc: 0xc04110c  jal         func_104430
    ctx->pc = 0x10DFFCu;
    SET_GPR_U32(ctx, 31, 0x10E004u);
    ctx->pc = 0x10E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFFCu;
    // 0x10e000: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10DFFCu, 0x10E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E004u;
label_10e004:
    // 0x10e004: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10e004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e008: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x10e008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x10e00c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10E00Cu;
    {
        const bool branch_taken_0x10e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E00Cu;
        // 0x10e010: 0x8c54b830  lw          $s4, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e00c) {
            ctx->pc = 0x10E01Cu;
            return;
        }
    }
    ctx->pc = 0x10E014u;
    // 0x10e014: 0x0  nop
    ctx->pc = 0x10e014u;
    // NOP
    ctx->pc = 0x10e018u;
}
