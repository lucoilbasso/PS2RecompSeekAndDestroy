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

// Function: entry_00145ee0
// Address: 0x145ee0 - 0x145ef0
void entry_00145ee0_0x145ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145ee0_0x145ee0");
#endif

    ctx->pc = 0x145ee0u;

    // 0x145ee0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145ee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ee8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x145ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x145eec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x145eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145ef0u;
}
