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

// Function: entry_0014b094
// Address: 0x14b094 - 0x14b0c0
void entry_0014b094_0x14b094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b094_0x14b094");
#endif

    switch (ctx->pc) {
        case 0x14b0b4u: goto label_14b0b4;
        default: break;
    }

    ctx->pc = 0x14b094u;

    // 0x14b094: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x14b094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14b098: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B098u;
    {
        const bool branch_taken_0x14b098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b098) {
            ctx->pc = 0x14B09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B098u;
            // 0x14b09c: 0x920201ab  lbu         $v0, 0x1AB($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B0C0u;
            return;
        }
    }
    ctx->pc = 0x14B0A0u;
    // 0x14b0a0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0a8: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8
    ctx->pc = 0x14b0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    // 0x14b0ac: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B0ACu;
    SET_GPR_U32(ctx, 31, 0x14B0B4u);
    ctx->pc = 0x14B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B0ACu;
    // 0x14b0b0: 0x24060041  addiu       $a2, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B0ACu, 0x14B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B0B4u;
label_14b0b4:
    // 0x14b0b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14B0B4u;
    {
        const bool branch_taken_0x14b0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B0B4u;
        // 0x14b0b8: 0x8e0301c0  lw          $v1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b0b4) {
            ctx->pc = 0x14B0E4u;
            return;
        }
    }
    ctx->pc = 0x14B0BCu;
    // 0x14b0bc: 0x0  nop
    ctx->pc = 0x14b0bcu;
    // NOP
    ctx->pc = 0x14b0c0u;
}
