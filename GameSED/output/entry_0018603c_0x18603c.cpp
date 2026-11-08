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

// Function: entry_0018603c
// Address: 0x18603c - 0x186048
void entry_0018603c_0x18603c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018603c_0x18603c");
#endif

    ctx->pc = 0x18603cu;

    // 0x18603c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18603cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x186048u;
}
