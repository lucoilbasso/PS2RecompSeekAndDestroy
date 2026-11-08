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

// Function: entry_00155898
// Address: 0x155898 - 0x1558a4
void entry_00155898_0x155898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155898_0x155898");
#endif

    ctx->pc = 0x155898u;

    // 0x155898: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15589c: 0xae020850  sw          $v0, 0x850($s0)
    ctx->pc = 0x15589cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 2));
    // 0x1558a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1558a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1558a4u;
}
