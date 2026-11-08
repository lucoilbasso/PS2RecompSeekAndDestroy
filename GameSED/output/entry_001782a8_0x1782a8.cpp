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

// Function: entry_001782a8
// Address: 0x1782a8 - 0x1782d8
void entry_001782a8_0x1782a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001782a8_0x1782a8");
#endif

    switch (ctx->pc) {
        case 0x1782c8u: goto label_1782c8;
        default: break;
    }

    ctx->pc = 0x1782a8u;

    // 0x1782a8: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x1782a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x1782ac: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1782ACu;
    {
        const bool branch_taken_0x1782ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1782ac) {
            ctx->pc = 0x1782B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1782ACu;
            // 0x1782b0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178340u;
            return;
        }
    }
    ctx->pc = 0x1782B4u;
    // 0x1782b4: 0x24c6d538  addiu       $a2, $a2, -0x2AC8
    ctx->pc = 0x1782b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956344));
    // 0x1782b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1782b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782bc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1782bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782c0: 0xc066ea0  jal         func_19BA80
    ctx->pc = 0x1782C0u;
    SET_GPR_U32(ctx, 31, 0x1782C8u);
    ctx->pc = 0x1782C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782C0u;
    // 0x1782c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA80u, 0x1782C0u, 0x1782C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782C8u;
label_1782c8:
    // 0x1782c8: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x1782c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1782cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1782CCu;
    {
        const bool branch_taken_0x1782cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1782D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782CCu;
        // 0x1782d0: 0x3c160025  lui         $s6, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782cc) {
            ctx->pc = 0x178304u;
            return;
        }
    }
    ctx->pc = 0x1782D4u;
    // 0x1782d4: 0x0  nop
    ctx->pc = 0x1782d4u;
    // NOP
    ctx->pc = 0x1782d8u;
}
