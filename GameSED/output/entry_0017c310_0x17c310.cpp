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

// Function: entry_0017c310
// Address: 0x17c310 - 0x17c330
void entry_0017c310_0x17c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c310_0x17c310");
#endif

    ctx->pc = 0x17c310u;

    // 0x17c310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c318: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17c318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17c31c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c320: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17c320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c324: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x17c324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x17c328: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x17c328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x17c32c: 0x0  nop
    ctx->pc = 0x17c32cu;
    // NOP
    ctx->pc = 0x17c330u;
}
