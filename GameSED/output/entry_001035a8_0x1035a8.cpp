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

// Function: entry_001035a8
// Address: 0x1035a8 - 0x1035c0
void entry_001035a8_0x1035a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001035a8_0x1035a8");
#endif

    ctx->pc = 0x1035a8u;

    // 0x1035a8: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1035A8u;
    {
        const bool branch_taken_0x1035a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1035a8) {
            ctx->pc = 0x1035ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1035A8u;
            // 0x1035ac: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1035C0u;
            return;
        }
    }
    ctx->pc = 0x1035B0u;
    // 0x1035b0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1035b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1035b4: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1035b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1035b8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1035B8u;
    {
        const bool branch_taken_0x1035b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035B8u;
        // 0x1035bc: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035b8) {
            ctx->pc = 0x10364Cu;
            return;
        }
    }
    ctx->pc = 0x1035C0u;
}
