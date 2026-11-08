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

// Function: entry_00117298
// Address: 0x117298 - 0x1172b0
void entry_00117298_0x117298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117298_0x117298");
#endif

    ctx->pc = 0x117298u;

    // 0x117298: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x117298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x11729c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11729Cu;
    {
        const bool branch_taken_0x11729c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1172A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11729Cu;
        // 0x1172a0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11729c) {
            ctx->pc = 0x117260u;
            return;
        }
    }
    ctx->pc = 0x1172A4u;
    // 0x1172a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1172A4u;
    {
        const bool branch_taken_0x1172a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1172A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1172A4u;
        // 0x1172a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1172a4) {
            ctx->pc = 0x1172BCu;
            return;
        }
    }
    ctx->pc = 0x1172ACu;
    // 0x1172ac: 0x0  nop
    ctx->pc = 0x1172acu;
    // NOP
    ctx->pc = 0x1172b0u;
}
