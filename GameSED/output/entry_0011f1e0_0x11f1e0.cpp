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

// Function: entry_0011f1e0
// Address: 0x11f1e0 - 0x11f1f8
void entry_0011f1e0_0x11f1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f1e0_0x11f1e0");
#endif

    ctx->pc = 0x11f1e0u;

    // 0x11f1e0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x11f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x11f1e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F1E4u;
    {
        const bool branch_taken_0x11f1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1E4u;
        // 0x11f1e8: 0x26220080  addiu       $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1e4) {
            ctx->pc = 0x11F1F8u;
            return;
        }
    }
    ctx->pc = 0x11F1ECu;
    // 0x11f1ec: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x11f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x11f1f0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11F1F0u;
    {
        const bool branch_taken_0x11f1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1F0u;
        // 0x11f1f4: 0x26220080  addiu       $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1f0) {
            ctx->pc = 0x11F24Cu;
            return;
        }
    }
    ctx->pc = 0x11F1F8u;
}
