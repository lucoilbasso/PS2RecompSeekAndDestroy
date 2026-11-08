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

// Function: entry_00145ab8
// Address: 0x145ab8 - 0x145acc
void entry_00145ab8_0x145ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145ab8_0x145ab8");
#endif

    ctx->pc = 0x145ab8u;

    // 0x145ab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145abc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ac0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x145ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x145ac4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x145ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ac8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x145ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->pc = 0x145accu;
}
