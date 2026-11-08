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

// Function: entry_001c7384
// Address: 0x1c7384 - 0x1c73a0
void entry_001c7384_0x1c7384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7384_0x1c7384");
#endif

    ctx->pc = 0x1c7384u;

    // 0x1c7384: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1c7384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1c7388: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c7388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c738c: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x1c738cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1c7390: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c7390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c7394: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c7394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c7398: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c7398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c739c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1c73a0u;
}
