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

// Function: entry_0014b1a0
// Address: 0x14b1a0 - 0x14b1dc
void entry_0014b1a0_0x14b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b1a0_0x14b1a0");
#endif

    ctx->pc = 0x14b1a0u;

    // 0x14b1a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14b1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14b1a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14b1a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14b1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14b1ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14b1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14b1b0: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x14b1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x14b1b4: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x14b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x14b1b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b1bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14b1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1c0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x14b1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x14b1c4: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B1C4u;
    {
        const bool branch_taken_0x14b1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x14B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B1C4u;
        // 0x14b1c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1c4) {
            ctx->pc = 0x14B1DCu;
            return;
        }
    }
    ctx->pc = 0x14B1CCu;
    // 0x14b1cc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b1d0: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x14b1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x14b1d4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B1D4u;
    SET_GPR_U32(ctx, 31, 0x14B1DCu);
    ctx->pc = 0x14B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B1D4u;
    // 0x14b1d8: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B1D4u, 0x14B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1DCu;
}
