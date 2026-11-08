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

// Function: entry_0010382c
// Address: 0x10382c - 0x103834
void entry_0010382c_0x10382c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010382c_0x10382c");
#endif

    ctx->pc = 0x10382cu;

    // 0x10382c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x103830: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x103830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x103834u;
}
