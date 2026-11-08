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

// Function: entry_00188b1c
// Address: 0x188b1c - 0x188b40
void entry_00188b1c_0x188b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188b1c_0x188b1c");
#endif

    ctx->pc = 0x188b1cu;

    // 0x188b1c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x188b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x188b20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x188b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x188b24: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x188b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x188b28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b2c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x188b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x188b30: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x188b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x188b34: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x188b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x188b38: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x188b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x188b3c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x188b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x188b40u;
}
