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

// Function: entry_00168e50
// Address: 0x168e50 - 0x168e70
void entry_00168e50_0x168e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168e50_0x168e50");
#endif

    ctx->pc = 0x168e50u;

    // 0x168e50: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x168e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x168e54: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x168e54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x168e58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x168e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x168e5c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x168e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x168e60: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x168e60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x168e64: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x168E64u;
    {
        const bool branch_taken_0x168e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E64u;
        // 0x168e68: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e64) {
            ctx->pc = 0x1690D8u;
            return;
        }
    }
    ctx->pc = 0x168E6Cu;
    // 0x168e6c: 0x0  nop
    ctx->pc = 0x168e6cu;
    // NOP
    ctx->pc = 0x168e70u;
}
