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

// Function: entry_001d3eb8
// Address: 0x1d3eb8 - 0x1d3ed0
void entry_001d3eb8_0x1d3eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3eb8_0x1d3eb8");
#endif

    ctx->pc = 0x1d3eb8u;

    // 0x1d3eb8: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1d3eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1d3ebc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d3ebcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d3ec0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d3ec0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3ec4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D3EC4u;
    {
        const bool branch_taken_0x1d3ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EC4u;
        // 0x1d3ec8: 0x30560001  andi        $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ec4) {
            ctx->pc = 0x1D3F48u;
            return;
        }
    }
    ctx->pc = 0x1D3ECCu;
    // 0x1d3ecc: 0x0  nop
    ctx->pc = 0x1d3eccu;
    // NOP
    ctx->pc = 0x1d3ed0u;
}
