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

// Function: entry_001460a8
// Address: 0x1460a8 - 0x1460b8
void entry_001460a8_0x1460a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001460a8_0x1460a8");
#endif

    ctx->pc = 0x1460a8u;

    // 0x1460a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1460a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1460ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1460acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1460b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1460b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1460b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1460b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1460b8u;
}
