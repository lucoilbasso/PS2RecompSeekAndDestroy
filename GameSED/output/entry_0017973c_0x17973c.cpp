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

// Function: entry_0017973c
// Address: 0x17973c - 0x179744
void entry_0017973c_0x17973c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017973c_0x17973c");
#endif

    ctx->pc = 0x17973cu;

    // 0x17973c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179740: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x179740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x179744u;
}
