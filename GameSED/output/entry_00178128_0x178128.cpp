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

// Function: entry_00178128
// Address: 0x178128 - 0x17813c
void entry_00178128_0x178128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178128_0x178128");
#endif

    ctx->pc = 0x178128u;

    // 0x178128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17812c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17812cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178130: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x178130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178134: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x178134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x17813cu;
}
