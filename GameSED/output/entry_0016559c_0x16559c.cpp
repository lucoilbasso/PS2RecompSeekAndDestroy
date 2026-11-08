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

// Function: entry_0016559c
// Address: 0x16559c - 0x1655b4
void entry_0016559c_0x16559c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016559c_0x16559c");
#endif

    ctx->pc = 0x16559cu;

    // 0x16559c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16559Cu;
    {
        const bool branch_taken_0x16559c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1655A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16559Cu;
        // 0x1655a0: 0xae001268  sw          $zero, 0x1268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16559c) {
            ctx->pc = 0x1655B4u;
            return;
        }
    }
    ctx->pc = 0x1655A4u;
    // 0x1655a4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1655a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1655a8: 0xae001234  sw          $zero, 0x1234($s0)
    ctx->pc = 0x1655a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4660), GPR_U32(ctx, 0));
    // 0x1655ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1655acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1655b0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1655b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1655b4u;
}
