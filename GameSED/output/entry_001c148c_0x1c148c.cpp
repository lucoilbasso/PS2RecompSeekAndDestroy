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

// Function: entry_001c148c
// Address: 0x1c148c - 0x1c14b4
void entry_001c148c_0x1c148c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c148c_0x1c148c");
#endif

    ctx->pc = 0x1c148cu;

    // 0x1c148c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1c148cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1c1490: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1490u;
    {
        const bool branch_taken_0x1c1490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1490) {
            ctx->pc = 0x1C1494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1490u;
            // 0x1c1494: 0x8e020848  lw          $v0, 0x848($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C14B4u;
            return;
        }
    }
    ctx->pc = 0x1C1498u;
    // 0x1c1498: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c1498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c149c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C149Cu;
    {
        const bool branch_taken_0x1c149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c149c) {
            ctx->pc = 0x1C14A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C149Cu;
            // 0x1c14a0: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1524u;
            return;
        }
    }
    ctx->pc = 0x1C14A4u;
    // 0x1c14a4: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1c14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1c14a8: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C14A8u;
    {
        const bool branch_taken_0x1c14a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c14a8) {
            ctx->pc = 0x1C14ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C14A8u;
            // 0x1c14ac: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1524u;
            return;
        }
    }
    ctx->pc = 0x1C14B0u;
    // 0x1c14b0: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x1c14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    ctx->pc = 0x1c14b4u;
}
