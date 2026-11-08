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

// Function: entry_001ca208
// Address: 0x1ca208 - 0x1ca228
void entry_001ca208_0x1ca208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca208_0x1ca208");
#endif

    ctx->pc = 0x1ca208u;

    // 0x1ca208: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x1ca208u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x1ca20c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ca20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ca210: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ca210u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ca214: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x1ca214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ca218: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA218u;
    {
        const bool branch_taken_0x1ca218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA218u;
        // 0x1ca21c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca218) {
            ctx->pc = 0x1CA228u;
            return;
        }
    }
    ctx->pc = 0x1CA220u;
    // 0x1ca220: 0x6307a  dsrl        $a2, $a2, 1
    ctx->pc = 0x1ca220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 1);
    // 0x1ca224: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1ca224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->pc = 0x1ca228u;
}
