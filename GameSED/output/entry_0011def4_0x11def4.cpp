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

// Function: entry_0011def4
// Address: 0x11def4 - 0x11df14
void entry_0011def4_0x11def4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011def4_0x11def4");
#endif

    ctx->pc = 0x11def4u;

    // 0x11def4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11def4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11def8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11def8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11defc: 0x8f898d10  lw          $t1, -0x72F0($gp)
    ctx->pc = 0x11defcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11df00: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11df04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11df08: 0x8c427000  lw          $v0, 0x7000($v0)
    ctx->pc = 0x11df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28672)));
    // 0x11df0c: 0x34aa4000  ori         $t2, $a1, 0x4000
    ctx->pc = 0x11df0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x11df10: 0x8d24003c  lw          $a0, 0x3C($t1)
    ctx->pc = 0x11df10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    ctx->pc = 0x11df14u;
}
