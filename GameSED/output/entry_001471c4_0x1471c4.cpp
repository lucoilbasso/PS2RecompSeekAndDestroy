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

// Function: entry_001471c4
// Address: 0x1471c4 - 0x1471e0
void entry_001471c4_0x1471c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001471c4_0x1471c4");
#endif

    ctx->pc = 0x1471c4u;

    // 0x1471c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1471c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1471c8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1471c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1471cc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1471CCu;
    {
        const bool branch_taken_0x1471cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1471cc) {
            ctx->pc = 0x1471D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1471CCu;
            // 0x1471d0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1471A0u;
            return;
        }
    }
    ctx->pc = 0x1471D4u;
    // 0x1471d4: 0x26d200b0  addiu       $s2, $s6, 0xB0
    ctx->pc = 0x1471d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 176));
    // 0x1471d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1471d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1471dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1471e0u;
}
