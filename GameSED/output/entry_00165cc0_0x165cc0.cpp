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

// Function: entry_00165cc0
// Address: 0x165cc0 - 0x165ce0
void entry_00165cc0_0x165cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165cc0_0x165cc0");
#endif

    ctx->pc = 0x165cc0u;

    // 0x165cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165cc4: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x165CC4u;
    {
        const bool branch_taken_0x165cc4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x165CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CC4u;
        // 0x165cc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cc4) {
            ctx->pc = 0x165CE0u;
            return;
        }
    }
    ctx->pc = 0x165CCCu;
    // 0x165ccc: 0x8e451264  lw          $a1, 0x1264($s2)
    ctx->pc = 0x165cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4708)));
    // 0x165cd0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x165cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x165cd4: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x165cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x165cd8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x165CD8u;
    {
        const bool branch_taken_0x165cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CD8u;
        // 0x165cdc: 0x8ca306ec  lw          $v1, 0x6EC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cd8) {
            ctx->pc = 0x165D18u;
            return;
        }
    }
    ctx->pc = 0x165CE0u;
}
