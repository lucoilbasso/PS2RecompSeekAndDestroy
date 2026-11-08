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

// Function: entry_0018586c
// Address: 0x18586c - 0x185888
void entry_0018586c_0x18586c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018586c_0x18586c");
#endif

    ctx->pc = 0x18586cu;

    // 0x18586c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18586Cu;
    {
        const bool branch_taken_0x18586c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18586c) {
            ctx->pc = 0x185890u;
            return;
        }
    }
    ctx->pc = 0x185874u;
    // 0x185874: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x185874u;
    {
        const bool branch_taken_0x185874 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x185878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185874u;
        // 0x185878: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185874) {
            ctx->pc = 0x185888u;
            return;
        }
    }
    ctx->pc = 0x18587Cu;
    // 0x18587c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18587Cu;
    {
        const bool branch_taken_0x18587c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18587Cu;
        // 0x185880: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18587c) {
            ctx->pc = 0x18588Cu;
            return;
        }
    }
    ctx->pc = 0x185884u;
    // 0x185884: 0x0  nop
    ctx->pc = 0x185884u;
    // NOP
    ctx->pc = 0x185888u;
}
