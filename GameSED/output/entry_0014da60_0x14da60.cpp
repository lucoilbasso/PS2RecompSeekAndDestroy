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

// Function: entry_0014da60
// Address: 0x14da60 - 0x14da80
void entry_0014da60_0x14da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014da60_0x14da60");
#endif

    ctx->pc = 0x14da60u;

    // 0x14da60: 0x56020041  bnel        $s0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x14DA60u;
    {
        const bool branch_taken_0x14da60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14da60) {
            ctx->pc = 0x14DA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DA60u;
            // 0x14da64: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DB68u;
            return;
        }
    }
    ctx->pc = 0x14DA68u;
    // 0x14da68: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14da6c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x14da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x14da70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14da70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14da74: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x14DA74u;
    {
        const bool branch_taken_0x14da74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA74u;
        // 0x14da78: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da74) {
            ctx->pc = 0x14DB64u;
            return;
        }
    }
    ctx->pc = 0x14DA7Cu;
    // 0x14da7c: 0x0  nop
    ctx->pc = 0x14da7cu;
    // NOP
    ctx->pc = 0x14da80u;
}
