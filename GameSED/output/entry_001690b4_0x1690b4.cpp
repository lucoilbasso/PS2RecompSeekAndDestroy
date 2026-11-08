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

// Function: entry_001690b4
// Address: 0x1690b4 - 0x1690d0
void entry_001690b4_0x1690b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001690b4_0x1690b4");
#endif

    ctx->pc = 0x1690b4u;

    // 0x1690b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1690b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1690b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1690b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1690bc: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x1690bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x1690c0: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x1690c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x1690c4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1690c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1690c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1690C8u;
    {
        const bool branch_taken_0x1690c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690C8u;
        // 0x1690cc: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690c8) {
            ctx->pc = 0x1690D8u;
            return;
        }
    }
    ctx->pc = 0x1690D0u;
}
