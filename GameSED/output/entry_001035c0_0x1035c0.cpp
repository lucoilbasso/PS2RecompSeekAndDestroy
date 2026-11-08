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

// Function: entry_001035c0
// Address: 0x1035c0 - 0x1035e0
void entry_001035c0_0x1035c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001035c0_0x1035c0");
#endif

    ctx->pc = 0x1035c0u;

    // 0x1035c0: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1035C0u;
    {
        const bool branch_taken_0x1035c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1035c0) {
            ctx->pc = 0x1035C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1035C0u;
            // 0x1035c4: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1035E0u;
            return;
        }
    }
    ctx->pc = 0x1035C8u;
    // 0x1035c8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1035c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1035cc: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1035ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1035d0: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x1035d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1035d4: 0x8c850160  lw          $a1, 0x160($a0)
    ctx->pc = 0x1035d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x1035d8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1035D8u;
    {
        const bool branch_taken_0x1035d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035D8u;
        // 0x1035dc: 0x8ca20090  lw          $v0, 0x90($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035d8) {
            ctx->pc = 0x10364Cu;
            return;
        }
    }
    ctx->pc = 0x1035E0u;
}
