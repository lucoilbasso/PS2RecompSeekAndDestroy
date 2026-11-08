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

// Function: entry_001bc94c
// Address: 0x1bc94c - 0x1bc960
void entry_001bc94c_0x1bc94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc94c_0x1bc94c");
#endif

    ctx->pc = 0x1bc94cu;

    // 0x1bc94c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1bc94cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1bc950: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc954: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1bc954u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1bc958: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1bc958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc95c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1bc95cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1bc960u;
}
