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

// Function: entry_001cc8b4
// Address: 0x1cc8b4 - 0x1cc8cc
void entry_001cc8b4_0x1cc8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc8b4_0x1cc8b4");
#endif

    ctx->pc = 0x1cc8b4u;

    // 0x1cc8b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cc8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cc8b8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC8B8u;
    {
        const bool branch_taken_0x1cc8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8B8u;
        // 0x1cc8bc: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8b8) {
            ctx->pc = 0x1CC8CCu;
            return;
        }
    }
    ctx->pc = 0x1CC8C0u;
    // 0x1cc8c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc8c4: 0x16a2ff3e  bne         $s5, $v0, . + 4 + (-0xC2 << 2)
    ctx->pc = 0x1CC8C4u;
    {
        const bool branch_taken_0x1cc8c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC8C4u;
        // 0x1cc8c8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8c4) {
            ctx->pc = 0x1CC5C0u;
            return;
        }
    }
    ctx->pc = 0x1CC8CCu;
}
