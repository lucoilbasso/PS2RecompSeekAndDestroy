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

// Function: entry_00193850
// Address: 0x193850 - 0x193860
void entry_00193850_0x193850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193850_0x193850");
#endif

    ctx->pc = 0x193850u;

    // 0x193850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193858: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19385c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x193860u;
}
