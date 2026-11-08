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

// Function: entry_001a8c14
// Address: 0x1a8c14 - 0x1a8c30
void entry_001a8c14_0x1a8c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8c14_0x1a8c14");
#endif

    ctx->pc = 0x1a8c14u;

    // 0x1a8c14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a8c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a8c18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8c1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a8c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8c24: 0x2692001c  addiu       $s2, $s4, 0x1C
    ctx->pc = 0x1a8c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x1a8c28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a8c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8c2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a8c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a8c30u;
}
