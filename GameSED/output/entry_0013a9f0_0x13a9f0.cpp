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

// Function: entry_0013a9f0
// Address: 0x13a9f0 - 0x13aa20
void entry_0013a9f0_0x13a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a9f0_0x13a9f0");
#endif

    ctx->pc = 0x13a9f0u;

    // 0x13a9f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13a9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13a9f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13a9f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a9f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13a9fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13a9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13aa00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13aa04: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13aa08: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13aa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13aa0c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AA0Cu;
    {
        const bool branch_taken_0x13aa0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA0Cu;
        // 0x13aa10: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa0c) {
            ctx->pc = 0x13AA20u;
            return;
        }
    }
    ctx->pc = 0x13AA14u;
    // 0x13aa14: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x13aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x13aa18: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13AA18u;
    SET_GPR_U32(ctx, 31, 0x13AA20u);
    ctx->pc = 0x13AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA18u;
    // 0x13aa1c: 0x24a56828  addiu       $a1, $a1, 0x6828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13AA18u, 0x13AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA20u;
}
