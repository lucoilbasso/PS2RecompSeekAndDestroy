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

// Function: entry_001055e0
// Address: 0x1055e0 - 0x1055f8
void entry_001055e0_0x1055e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001055e0_0x1055e0");
#endif

    ctx->pc = 0x1055e0u;

    // 0x1055e0: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x1055e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1055e4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1055E4u;
    {
        const bool branch_taken_0x1055e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1055E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055E4u;
        // 0x1055e8: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055e4) {
            ctx->pc = 0x1055C8u;
            return;
        }
    }
    ctx->pc = 0x1055ECu;
    // 0x1055ec: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1055ECu;
    {
        const bool branch_taken_0x1055ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055ECu;
        // 0x1055f0: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055ec) {
            ctx->pc = 0x1057A0u;
            return;
        }
    }
    ctx->pc = 0x1055F4u;
    // 0x1055f4: 0x0  nop
    ctx->pc = 0x1055f4u;
    // NOP
    ctx->pc = 0x1055f8u;
}
