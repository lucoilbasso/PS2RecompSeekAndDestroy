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

// Function: entry_0016a888
// Address: 0x16a888 - 0x16a898
void entry_0016a888_0x16a888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a888_0x16a888");
#endif

    ctx->pc = 0x16a888u;

    // 0x16a888: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16a888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16a88c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16a88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16a890: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16a890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a894: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x16a894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    ctx->pc = 0x16a898u;
}
