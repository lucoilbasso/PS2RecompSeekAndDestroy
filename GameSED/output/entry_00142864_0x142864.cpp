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

// Function: entry_00142864
// Address: 0x142864 - 0x14286c
void entry_00142864_0x142864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142864_0x142864");
#endif

    ctx->pc = 0x142864u;

    // 0x142864: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142868: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x142868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x14286cu;
}
