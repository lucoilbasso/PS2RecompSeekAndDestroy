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

// Function: entry_00141d6c
// Address: 0x141d6c - 0x141d74
void entry_00141d6c_0x141d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141d6c_0x141d6c");
#endif

    ctx->pc = 0x141d6cu;

    // 0x141d6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x141d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141d70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x141d70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x141d74u;
}
