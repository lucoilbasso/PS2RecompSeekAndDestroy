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

// Function: entry_001076bc
// Address: 0x1076bc - 0x1076c4
void entry_001076bc_0x1076bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001076bc_0x1076bc");
#endif

    ctx->pc = 0x1076bcu;

    // 0x1076bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1076bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1076c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1076c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1076c4u;
}
