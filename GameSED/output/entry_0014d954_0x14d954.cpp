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

// Function: entry_0014d954
// Address: 0x14d954 - 0x14d978
void entry_0014d954_0x14d954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d954_0x14d954");
#endif

    ctx->pc = 0x14d954u;

    // 0x14d954: 0x56020084  bnel        $s0, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x14D954u;
    {
        const bool branch_taken_0x14d954 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d954) {
            ctx->pc = 0x14D958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D954u;
            // 0x14d958: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DB68u;
            return;
        }
    }
    ctx->pc = 0x14D95Cu;
    // 0x14d95c: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14d960: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x14d960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x14d964: 0x2404020b  addiu       $a0, $zero, 0x20B
    ctx->pc = 0x14d964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    // 0x14d968: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14d968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14d96c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x14D96Cu;
    {
        const bool branch_taken_0x14d96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D96Cu;
        // 0x14d970: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d96c) {
            ctx->pc = 0x14DB54u;
            return;
        }
    }
    ctx->pc = 0x14D974u;
    // 0x14d974: 0x0  nop
    ctx->pc = 0x14d974u;
    // NOP
    ctx->pc = 0x14d978u;
}
