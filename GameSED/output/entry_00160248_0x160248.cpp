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

// Function: entry_00160248
// Address: 0x160248 - 0x160260
void entry_00160248_0x160248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160248_0x160248");
#endif

    ctx->pc = 0x160248u;

    // 0x160248: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x160248u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x16024c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160250: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x160250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x160254: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x160254u;
    {
        const bool branch_taken_0x160254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160254u;
        // 0x160258: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160254) {
            ctx->pc = 0x160284u;
            return;
        }
    }
    ctx->pc = 0x16025Cu;
    // 0x16025c: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x16025cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x160260u;
}
