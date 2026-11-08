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

// Function: entry_0017512c
// Address: 0x17512c - 0x17513c
void entry_0017512c_0x17512c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017512c_0x17512c");
#endif

    ctx->pc = 0x17512cu;

    // 0x17512c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17512cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x175130: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x175130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x175134: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x175134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x175138: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x175138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    ctx->pc = 0x17513cu;
}
