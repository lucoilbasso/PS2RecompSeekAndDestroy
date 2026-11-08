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

// Function: entry_001568f0
// Address: 0x1568f0 - 0x156910
void entry_001568f0_0x1568f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001568f0_0x1568f0");
#endif

    ctx->pc = 0x1568f0u;

    // 0x1568f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1568f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1568f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1568f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1568f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1568f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1568fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1568fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156900: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x156900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x156904: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x156904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x156908: 0x8c510020  lw          $s1, 0x20($v0)
    ctx->pc = 0x156908u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15690c: 0x0  nop
    ctx->pc = 0x15690cu;
    // NOP
    ctx->pc = 0x156910u;
}
