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

// Function: entry_00157180
// Address: 0x157180 - 0x157198
void entry_00157180_0x157180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157180_0x157180");
#endif

    ctx->pc = 0x157180u;

    // 0x157180: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157188: 0x24501028  addiu       $s0, $v0, 0x1028
    ctx->pc = 0x157188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4136));
    // 0x15718c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15718cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x157190: 0x24110063  addiu       $s1, $zero, 0x63
    ctx->pc = 0x157190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x157194: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x157194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x157198u;
}
