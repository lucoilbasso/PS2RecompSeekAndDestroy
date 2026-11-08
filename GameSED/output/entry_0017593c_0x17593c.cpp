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

// Function: entry_0017593c
// Address: 0x17593c - 0x175948
void entry_0017593c_0x17593c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017593c_0x17593c");
#endif

    ctx->pc = 0x17593cu;

    // 0x17593c: 0x25a20001  addiu       $v0, $t5, 0x1
    ctx->pc = 0x17593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x175940: 0xae0e000c  sw          $t6, 0xC($s0)
    ctx->pc = 0x175940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x175944: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x175944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x175948u;
}
