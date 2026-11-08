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

// Function: entry_00104e20
// Address: 0x104e20 - 0x104e40
void entry_00104e20_0x104e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104e20_0x104e20");
#endif

    ctx->pc = 0x104e20u;

    // 0x104e20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x104e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x104e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x104e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x104e34: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x104e34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x104e38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x104e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e3c: 0x0  nop
    ctx->pc = 0x104e3cu;
    // NOP
    ctx->pc = 0x104e40u;
}
