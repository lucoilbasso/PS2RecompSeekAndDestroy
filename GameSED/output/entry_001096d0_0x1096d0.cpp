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

// Function: entry_001096d0
// Address: 0x1096d0 - 0x1096e4
void entry_001096d0_0x1096d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001096d0_0x1096d0");
#endif

    ctx->pc = 0x1096d0u;

    // 0x1096d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1096d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1096d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1096d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1096d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1096d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1096dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1096dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1096e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1096e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    ctx->pc = 0x1096e4u;
}
