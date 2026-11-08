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

// Function: entry_001a22fc
// Address: 0x1a22fc - 0x1a2320
void entry_001a22fc_0x1a22fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a22fc_0x1a22fc");
#endif

    ctx->pc = 0x1a22fcu;

    // 0x1a22fc: 0x54520008  bnel        $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A22FCu;
    {
        const bool branch_taken_0x1a22fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1a22fc) {
            ctx->pc = 0x1A2300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A22FCu;
            // 0x1a2300: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2320u;
            return;
        }
    }
    ctx->pc = 0x1A2304u;
    // 0x1a2304: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1a2304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1a2308: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2308u;
    {
        const bool branch_taken_0x1a2308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2308) {
            ctx->pc = 0x1A230Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2308u;
            // 0x1a230c: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2320u;
            return;
        }
    }
    ctx->pc = 0x1A2310u;
    // 0x1a2310: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x1a2310u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a2314: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A2314u;
    {
        const bool branch_taken_0x1a2314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2314u;
        // 0x1a2318: 0xaf809070  sw          $zero, -0x6F90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2314) {
            ctx->pc = 0x1A23ACu;
            return;
        }
    }
    ctx->pc = 0x1A231Cu;
    // 0x1a231c: 0x0  nop
    ctx->pc = 0x1a231cu;
    // NOP
    ctx->pc = 0x1a2320u;
}
