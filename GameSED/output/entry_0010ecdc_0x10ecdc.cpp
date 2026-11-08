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

// Function: entry_0010ecdc
// Address: 0x10ecdc - 0x10ed00
void entry_0010ecdc_0x10ecdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ecdc_0x10ecdc");
#endif

    ctx->pc = 0x10ecdcu;

    // 0x10ecdc: 0x8e6301b8  lw          $v1, 0x1B8($s3)
    ctx->pc = 0x10ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 440)));
    // 0x10ece0: 0x22e02  srl         $a1, $v0, 24
    ctx->pc = 0x10ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x10ece4: 0x8e6401bc  lw          $a0, 0x1BC($s3)
    ctx->pc = 0x10ece4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
    // 0x10ece8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x10ece8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10ecec: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x10ececu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x10ecf0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x10ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10ecf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10ecf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ecfc: 0xae0301a8  sw          $v1, 0x1A8($s0)
    ctx->pc = 0x10ecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 3));
    ctx->pc = 0x10ed00u;
}
