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

// Function: entry_001afe3c
// Address: 0x1afe3c - 0x1afe78
void entry_001afe3c_0x1afe3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afe3c_0x1afe3c");
#endif

    ctx->pc = 0x1afe3cu;

    // 0x1afe3c: 0xf  sync
    ctx->pc = 0x1afe3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afe40: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x1afe40u;
    // CACHE instruction (ignored)
    // 0x1afe44: 0xf  sync
    ctx->pc = 0x1afe44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afe48: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1afe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x1afe4c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1afe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1afe50: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1afe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1afe54: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1afe54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1afe58: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1afe58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1afe5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFE5Cu;
    {
        const bool branch_taken_0x1afe5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afe5c) {
            ctx->pc = 0x1AFE78u;
            return;
        }
    }
    ctx->pc = 0x1AFE64u;
    // 0x1afe64: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFE64u;
    {
        const bool branch_taken_0x1afe64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afe64) {
            ctx->pc = 0x1AFE78u;
            return;
        }
    }
    ctx->pc = 0x1AFE6Cu;
    // 0x1afe6c: 0xf  sync
    ctx->pc = 0x1afe6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afe70: 0xbcd60001  cache       0x16, 0x1($a2)
    ctx->pc = 0x1afe70u;
    // CACHE instruction (ignored)
    // 0x1afe74: 0xf  sync
    ctx->pc = 0x1afe74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x1afe78u;
}
