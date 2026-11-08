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

// Function: entry_0017ced4
// Address: 0x17ced4 - 0x17cef8
void entry_0017ced4_0x17ced4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ced4_0x17ced4");
#endif

    ctx->pc = 0x17ced4u;

    // 0x17ced4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17ced8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x17ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x17cedc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17cedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cee0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17cee4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x17cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x17cee8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17ceec: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x17ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x17cef0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17cef4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17cef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x17cef8u;
}
