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

// Function: entry_001afa88
// Address: 0x1afa88 - 0x1afa90
void entry_001afa88_0x1afa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afa88_0x1afa88");
#endif

    ctx->pc = 0x1afa88u;

    // 0x1afa88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1afa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1afa8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1afa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1afa90u;
}
