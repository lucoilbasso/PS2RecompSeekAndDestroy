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

// Function: entry_0016419c
// Address: 0x16419c - 0x1641b0
void entry_0016419c_0x16419c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016419c_0x16419c");
#endif

    ctx->pc = 0x16419cu;

    // 0x16419c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x16419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1641a0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1641a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1641a4: 0xaea31aac  sw          $v1, 0x1AAC($s5)
    ctx->pc = 0x1641a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6828), GPR_U32(ctx, 3));
    // 0x1641a8: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1641A8u;
    {
        const bool branch_taken_0x1641a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1641ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641A8u;
        // 0x1641ac: 0xaea21ab0  sw          $v0, 0x1AB0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 6832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641a8) {
            ctx->pc = 0x164444u;
            return;
        }
    }
    ctx->pc = 0x1641B0u;
}
