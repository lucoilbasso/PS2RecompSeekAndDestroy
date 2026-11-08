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

// Function: entry_0019d0a8
// Address: 0x19d0a8 - 0x19d0c8
void entry_0019d0a8_0x19d0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d0a8_0x19d0a8");
#endif

    ctx->pc = 0x19d0a8u;

    // 0x19d0a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d0ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d0b0: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x19d0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19d0b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19d0b8: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x19d0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19d0bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19d0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19d0c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19d0c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0c4: 0x0  nop
    ctx->pc = 0x19d0c4u;
    // NOP
    ctx->pc = 0x19d0c8u;
}
