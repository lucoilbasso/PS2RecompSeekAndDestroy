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

// Function: entry_001afcfc
// Address: 0x1afcfc - 0x1afd38
void entry_001afcfc_0x1afcfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afcfc_0x1afcfc");
#endif

    ctx->pc = 0x1afcfcu;

    // 0x1afcfc: 0xf  sync
    ctx->pc = 0x1afcfcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afd00: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x1afd00u;
    // CACHE instruction (ignored)
    // 0x1afd04: 0xf  sync
    ctx->pc = 0x1afd04u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afd08: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1afd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x1afd0c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1afd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1afd10: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1afd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1afd14: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1afd14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1afd18: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1afd18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1afd1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFD1Cu;
    {
        const bool branch_taken_0x1afd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afd1c) {
            ctx->pc = 0x1AFD38u;
            return;
        }
    }
    ctx->pc = 0x1AFD24u;
    // 0x1afd24: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFD24u;
    {
        const bool branch_taken_0x1afd24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afd24) {
            ctx->pc = 0x1AFD38u;
            return;
        }
    }
    ctx->pc = 0x1AFD2Cu;
    // 0x1afd2c: 0xf  sync
    ctx->pc = 0x1afd2cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afd30: 0xbcd40001  cache       0x14, 0x1($a2)
    ctx->pc = 0x1afd30u;
    // CACHE instruction (ignored)
    // 0x1afd34: 0xf  sync
    ctx->pc = 0x1afd34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x1afd38u;
}
