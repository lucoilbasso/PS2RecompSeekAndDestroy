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

// Function: entry_001afe00
// Address: 0x1afe00 - 0x1afe3c
void entry_001afe00_0x1afe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afe00_0x1afe00");
#endif

    ctx->pc = 0x1afe00u;

    // 0x1afe00: 0xf  sync
    ctx->pc = 0x1afe00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afe04: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x1afe04u;
    // CACHE instruction (ignored)
    // 0x1afe08: 0xf  sync
    ctx->pc = 0x1afe08u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afe0c: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1afe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x1afe10: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1afe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1afe14: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1afe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1afe18: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1afe18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1afe1c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1afe1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1afe20: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFE20u;
    {
        const bool branch_taken_0x1afe20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afe20) {
            ctx->pc = 0x1AFE3Cu;
            return;
        }
    }
    ctx->pc = 0x1AFE28u;
    // 0x1afe28: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFE28u;
    {
        const bool branch_taken_0x1afe28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afe28) {
            ctx->pc = 0x1AFE3Cu;
            return;
        }
    }
    ctx->pc = 0x1AFE30u;
    // 0x1afe30: 0xf  sync
    ctx->pc = 0x1afe30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afe34: 0xbcd60000  cache       0x16, 0x0($a2)
    ctx->pc = 0x1afe34u;
    // CACHE instruction (ignored)
    // 0x1afe38: 0xf  sync
    ctx->pc = 0x1afe38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x1afe3cu;
}
